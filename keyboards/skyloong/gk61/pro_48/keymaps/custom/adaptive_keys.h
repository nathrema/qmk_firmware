// https://www.reddit.com/r/KeyboardLayouts/comments/smnv1o/adaptive_keys_qmk_implementation


static uint8_t prior_saved_mods = 0;
static uint16_t prior_keycode = KC_NO;


bool process_adaptive_key(uint16_t keycode, const keyrecord_t *record) {
  bool return_state = true;

  if (record->event.pressed) {
    uint8_t saved_mods = get_mods();
    if (saved_mods & MOD_MASK_CAG) {
      // don't interfere if modifiers are involved
      return true;
    }
      return_state = true;
      unregister_code(KC_LSFT);
      unregister_code(KC_RSFT);
      keycode = keycode & 0xFF;
      uint16_t first = KC_NO;
      uint16_t second = KC_NO;


      switch (prior_keycode) {
      case KC_NO:
        switch (keycode) {

#define AK_BOTH_START(key, def_key)                                            \
  default:                                                                     \
    return_state = true;                                                       \
    tap_code(first);                                                           \
    }                                                                          \
    break;                                                                     \
  case key:                                                                    \
        first = def_key;                                                           \
        return_state = false;                                                      \
    switch (keycode) {

#define WHEN(key) AK_BOTH_START(key, KC_NO)

#define REPLACE(second_key, replaced_key) \
    case second_key: \
        second = replaced_key; \
        break;


#include "adaptive_keys.def"
        default:
          return_state = true;
          tap_code(first);
        }
      }

      if (return_state) {
            set_mods(saved_mods);
      } else {
        set_mods(prior_saved_mods);
        tap_code(first);

        if (is_caps_word_on() && !caps_word_press_user(second)) {
            add_weak_mods(MOD_BIT(KC_LSFT));
        }

        clear_mods();
        tap_code(second);
      }
    switch (keycode) {
#undef AK_BOTH_START
#undef WHEN
#undef REPLACE
#define AK_BOTH_START(key, ...)                                                \
  case key:                                                                    \
    return_state = false;                                                      \
    break;
#define WHEN(...)
#define REPLACE(...)
#include "adaptive_keys.def"
    }
    prior_saved_mods = saved_mods;
    prior_keycode = keycode;        // this keycode is stripped of mods+taps
  }
  return return_state;
}

#undef AK_BOTH_START
#undef WHEN
#undef REPLACE
