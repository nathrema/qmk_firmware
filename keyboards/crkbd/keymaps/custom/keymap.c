#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(KC_GRV, KC_B, KC_F, KC_L, KC_K, KC_Q, KC_VOLU, KC_MPLY, KC_P, KC_G, KC_O, KC_U, KC_COMM, KC_EQL, KC_TAB, LSFT_T(KC_N), LT(7,KC_S), LCTL_T(KC_H), LALT_T(KC_T), LGUI_T(KC_M), KC_VOLD, KC_PSCR, RGUI_T(KC_Y), RALT_T(KC_C), RCTL_T(KC_A), LT(7,KC_E), RSFT_T(KC_I), KC_CAPS, KC_BSLS, KC_X, KC_V, KC_J, KC_D, KC_Z, KC_QUOT, KC_W, KC_SCLN, KC_SLSH, KC_DOT, KC_MINS, LCTL(KC_V), LT(4,KC_R), KC_BSPC, KC_ENT, LT(5,KC_SPC), LCTL(KC_Z)),
    [1] = LAYOUT_split_3x6_3_ex2(KC_GRV, KC_B, KC_F, KC_L, KC_K, KC_Q, DF(0), KC_MPLY, KC_P, KC_G, KC_O, KC_U, KC_COMM, KC_EQL, KC_TAB, KC_N, KC_S, KC_H, KC_T, KC_M, OS_LSFT, KC_PSCR, KC_Y, KC_C, KC_A, KC_E, KC_I, KC_CAPS, KC_BSLS, KC_X, KC_V, KC_J, KC_D, KC_Z, KC_QUOT, KC_W, KC_SCLN, KC_SLSH, KC_DOT, KC_MINS, LCTL(KC_V), KC_R, KC_BSPC, KC_ENT, KC_SPC, LCTL(KC_Z)),
    [2] = LAYOUT_split_3x6_3_ex2(KC_ESC, KC_Q, KC_E, KC_R, KC_T, KC_Y, DF(0), KC_NO, KC_U, KC_I, KC_O, KC_P, KC_COMM, KC_EQL, KC_TAB, KC_A, KC_S, KC_W, KC_D, KC_F, OS_LSFT, KC_NO, KC_L, KC_G, KC_H, KC_J, KC_K, KC_CAPS, KC_BSLS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_QUOT, KC_N, KC_M, KC_SLSH, KC_DOT, KC_MINS, KC_1, KC_ENT, KC_BSPC, KC_4, KC_SPC, KC_2),
    [3] = LAYOUT_split_3x6_3_ex2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),
    [4] = LAYOUT_split_3x6_3_ex2(KC_ESC, KC_LT, KC_LBRC, KC_LCBR, KC_LPRN, KC_AMPR, DF(1), MO(6), KC_PIPE, KC_RPRN, KC_RCBR, KC_RBRC, KC_GT, KC_DEL, KC_WBAK, KC_0, KC_1, KC_2, KC_3, KC_4, DF(2), KC_NO, KC_5, KC_6, KC_7, KC_8, KC_9, KC_WFWD, KC_TRNS, KC_CIRC, KC_PERC, KC_AT, KC_EXLM, KC_TILD, KC_GRV, KC_BSLS, KC_HASH, KC_DLR, KC_ASTR, KC_TRNS, LCTL(KC_C), LCTL(KC_X), KC_TRNS, KC_TRNS, KC_SPC, LCS(KC_Z)),
    [5] = LAYOUT_split_3x6_3_ex2(KC_ESC, MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_NO, DF(1), MO(6), KC_NO, MS_WHLL, MS_WHLU, MS_WHLD, MS_WHLR, KC_DEL, KC_WBAK, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_F6, DF(2), KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_WFWD, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_F5, KC_F2, MS_BTN1, MS_BTN2, MS_BTN3, MS_ACL2, KC_NO, LCTL(KC_C), LCTL(KC_X), KC_TRNS, KC_TRNS, KC_SPC, LCS(KC_Z)),
    [6] = LAYOUT_split_3x6_3_ex2(KC_PSCR, KC_PWR, KC_SLEP, KC_NO, UG_TOGG, BL_TOGG, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_WAKE, KC_NO, KC_PSCR, KC_NO, RM_ON, UG_HUEU, UG_SATU, UG_VALU, UG_NEXT, KC_TRNS, KC_TRNS, RM_PREV, RM_VALD, RM_SATD, RM_HUED, RM_OFF, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [7] = LAYOUT_split_3x6_3_ex2(LGUI(KC_GRV), QK_MACRO_16, QK_MACRO_17, QK_MACRO_18, QK_MACRO_19, LGUI(KC_Z), KC_NO, KC_NO, QK_MACRO_15, QK_MACRO_0, QK_MACRO_1, QK_MACRO_2, QK_MACRO_3, RGUI(KC_EQL), LGUI(KC_TAB), QK_MACRO_20, QK_MACRO_21, QK_MACRO_22, QK_MACRO_23, LGUI(KC_M), KC_NO, KC_NO, QK_MACRO_14, QK_MACRO_4, QK_MACRO_5, QK_MACRO_6, QK_MACRO_7, KC_NO, LGUI(KC_BSLS), QK_MACRO_24, QK_MACRO_25, QK_MACRO_26, QK_MACRO_27, LGUI(KC_Q), QK_MACRO_13, QK_MACRO_8, QK_MACRO_9, QK_MACRO_10, QK_MACRO_11, RGUI(KC_MINS), KC_NO, QK_MACRO_28, KC_NO, QK_MACRO_29, QK_MACRO_12, KC_NO)
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case QK_MACRO_0:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_G)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_1:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_O)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_2:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_U)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_3:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_COMM)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_4:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_C)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            // case QK_MACRO_5:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_A)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_6:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_E)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_7:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_I)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_8:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_W)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_9:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_SCLN)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
            //     return false;
            // case QK_MACRO_10:
            //     SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_SLSH)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
            //     return false;
            case QK_MACRO_11:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_DOT)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_12:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_SPC)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_13:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_QUOT)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_14:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_Y)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_15:
            //     SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_X)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
            //     return false;
            // case QK_MACRO_16:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_B)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_17:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_F)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_18:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_L)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_19:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_K)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_20:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_N)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_21:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_S)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_22:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_H)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_23:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_T)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_24:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_P)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_25:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_V)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_26:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_J)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_27:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_D)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_28:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_R)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_29:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_ENT)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
        }
    }

    return true;
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 2: {
                hsv_t hsv = {2, 128, 50};
                rgb_t rgb = hsv_to_rgb(hsv);
                rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
                break;
            }
            case 3: {
                hsv_t hsv = {2, 128, 50};
                rgb_t rgb = hsv_to_rgb(hsv);
                rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
                break;
            }
            default: {
                hsv_t hsv = {190, 255, 50};
                rgb_t rgb = hsv_to_rgb(hsv);
                rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
                break;
            }
        }
    }
    return false;
}

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


