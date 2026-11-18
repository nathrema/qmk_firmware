#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#include "../adaptive_keys.h"

const key_override_t semicolon_colon_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_COLN, KC_SCLN);
const key_override_t slash_question_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUES, KC_SLSH);
const key_override_t quote_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DQUO, KC_QUOT);

const key_override_t *key_overrides[] = {
    &semicolon_colon_key_override,
    &slash_question_key_override,
    &quote_key_override
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_adaptive_swap(keycode, record)) { return false; }
    if (!process_adaptive_magic(keycode, record)) { return false; }
    return true;
}

bool remember_last_key_user(uint16_t keycode, keyrecord_t* record, uint8_t* remembered_mods) {
    if (!remember_last_key_adaptive(keycode, record, remembered_mods)) { return false; }
    return true;
}
