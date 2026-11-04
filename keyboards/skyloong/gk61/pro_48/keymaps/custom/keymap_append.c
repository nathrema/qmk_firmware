#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


enum custom_keycodes {
    KC_ENTER_2, KC_ENTER_3, KC_ENTER_4, KC_ENTER_5
};

#include "adaptive_keys.h"

void repeat_keycode(uint16_t keycode, int count) {
        if (count > 0) {
            tap_code(keycode);
            repeat_keycode(keycode, count - 1);
        }
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_adaptive_key(keycode, record)) { return false; }

    return true;
};

