#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_TAP,
    TD_DOUBLE_HOLD,
    TD_DOUBLE_SINGLE_TAP, // Send two single taps
    TD_TRIPLE_TAP,
    TD_TRIPLE_HOLD
} td_state_t;

typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;

enum {
    GUI_SLSH_BSLSH,
    TD_COPY_PSTE, 
    TD_UNDO_AGIN,
};

td_state_t cur_dance(tap_dance_state_t *state);

void slash_finished(tap_dance_state_t *state, void *user_data);
void slash_reset(tap_dance_state_t *state, void *user_data);

// TD(TD_COPY_PSTE)
// TD(GUI_SLSH_BSLSH)
// TD(TD_UNDO_AGIN)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(KC_GRV, KC_B, KC_F, KC_L, KC_K, KC_Z, KC_VOLU, KC_MPLY, KC_X, KC_G, KC_O, KC_U, KC_COMM, KC_EQL, KC_TAB, KC_N, KC_S, KC_H, KC_T, KC_M, KC_VOLD, KC_MNXT, KC_Y, KC_C, KC_A, KC_E, KC_I, QK_REP, KC_BSLS, LCTL_T(KC_P), LT(7,KC_V), LCTL_T(KC_J), LALT_T(KC_D), LGUI_T(KC_Q), RGUI(KC_QUOT), RALT_T(KC_W), RCTL_T(KC_SCLN), LT(7,KC_SLSH), RSFT_T(KC_DOT), KC_MINS, TD(TD_COPY_PSTE), KC_R, LT(4,KC_BSPC), LT(5,KC_ENT), KC_SPC, TD(TD_UNDO_AGIN)),
    [1] = LAYOUT_split_3x6_3_ex2(KC_GRV, KC_B, KC_F, KC_L, KC_K, KC_Z, KC_1, DF(0), KC_X, KC_G, KC_O, KC_U, KC_COMM, KC_EXLM, QK_REP, KC_N, KC_S, KC_H, KC_T, KC_M, KC_2, DF(0), KC_Y, KC_C, KC_A, KC_E, KC_I, QK_REP, KC_BSLS, KC_P, KC_V, KC_J, KC_D, KC_Q, KC_QUOT, KC_W, KC_SCLN, KC_QUES, KC_DOT, KC_MINS, KC_BSPC, KC_R, OS_LCTL, OS_RSFT, KC_SPC, KC_ENT),
    [2] = LAYOUT_split_3x6_3_ex2(KC_GRV, KC_B, KC_F, KC_L, KC_K, KC_Z, KC_1, DF(0), KC_X, KC_G, KC_O, KC_U, KC_COMM, KC_NO, KC_TAB, KC_N, KC_S, KC_H, KC_T, KC_M, KC_2, DF(0), KC_Y, KC_C, KC_A, KC_E, KC_I, KC_NO, KC_BSLS, KC_P, KC_V, KC_J, KC_D, KC_Q, KC_QUOT, KC_W, KC_SCLN, KC_SLSH, KC_DOT, KC_NO, KC_BSPC, KC_R, OSL(3), OS_RSFT, KC_SPC, KC_ENT),
    [3] = LAYOUT_split_3x6_3_ex2(KC_X, KC_G, KC_O, KC_U, KC_COMM, KC_EQL, KC_4, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Y, KC_C, KC_A, KC_E, KC_I, KC_3, KC_5, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_QUOT, KC_W, KC_SCLN, KC_SLSH, KC_DOT, KC_MINS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [4] = LAYOUT_split_3x6_3_ex2(KC_ESC, KC_CIRC, KC_PERC, KC_AT, KC_EXLM, KC_TILD, DF(1), MO(6), KC_GRV, KC_BSLS, KC_HASH, KC_DLR, KC_ASTR, KC_ESC, KC_WBAK, KC_LT, KC_LBRC, KC_LCBR, KC_LPRN, KC_AMPR, DF(0), DF(2), KC_PIPE, KC_RPRN, KC_RCBR, KC_RBRC, KC_GT, KC_WFWD, LCTL(KC_V), KC_7, KC_8, KC_9, KC_0, KC_6, KC_5, KC_1, KC_2, KC_3, KC_4, KC_UNDS, KC_TRNS, KC_R, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS),
    [5] = LAYOUT_split_3x6_3_ex2(KC_ESC, KC_H, KC_J, KC_K, KC_L, KC_PSCR, DF(1), MO(6), KC_PSCR, MS_WHLL, MS_WHLU, MS_WHLD, MS_WHLR, KC_ESC, KC_WBAK, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_F11, DF(0), DF(2), KC_F12, KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_WFWD, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F6, KC_F5, KC_F1, KC_F2, KC_F3, KC_F4, KC_TRNS, KC_ENT, KC_R, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS),
    [6] = LAYOUT_split_3x6_3_ex2(KC_PSCR, KC_PWR, KC_SLEP, KC_NO, UG_TOGG, BL_TOGG, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_WAKE, KC_NO, KC_PSCR, KC_NO, RM_ON, UG_HUEU, UG_SATU, UG_VALU, UG_NEXT, KC_TRNS, KC_TRNS, RM_PREV, RM_VALD, RM_SATD, RM_HUED, RM_OFF, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [7] = LAYOUT_split_3x6_3_ex2(KC_NO, QK_MACRO_19, QK_MACRO_18, QK_MACRO_17, QK_MACRO_16, KC_NO, KC_NO, KC_NO, KC_NO, QK_MACRO_0, QK_MACRO_1, QK_MACRO_2, QK_MACRO_3, KC_NO, KC_NO, QK_MACRO_23, QK_MACRO_22, QK_MACRO_21, QK_MACRO_20, KC_NO, KC_NO, KC_NO, KC_NO, QK_MACRO_4, QK_MACRO_5, QK_MACRO_6, QK_MACRO_7, KC_NO, KC_NO, QK_MACRO_27, QK_MACRO_26, QK_MACRO_25, QK_MACRO_24, KC_NO, KC_NO, QK_MACRO_8, QK_MACRO_9, QK_MACRO_10, QK_MACRO_11, KC_NO, KC_NO, QK_MACRO_28, KC_NO, KC_NO, QK_MACRO_12, KC_NO)
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
            case QK_MACRO_5:
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
                return false;
            case QK_MACRO_10:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_SLSH)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_11:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_DOT)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_12:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_SPC)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_V)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_16:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_K)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_17:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_F)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_18:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_L)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_19:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_B)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_20:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_T)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_21:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_H)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_22:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_S)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_23:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_N)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_24:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_D)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_25:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_J)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_26:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_V)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_27:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_P)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
                return false;
            case QK_MACRO_28:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_R)SS_UP(X_LGUI)SS_DELAY(110)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
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

td_state_t cur_dance(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return TD_SINGLE_TAP;
        // Key has not been interrupted, but the key is still held. Means you want to send a 'HOLD'.
        else return TD_SINGLE_HOLD;
    } else if (state->count == 2) {
        // TD_DOUBLE_SINGLE_TAP is to distinguish between typing "pepper", and actually wanting a double tap
        // action when hitting 'pp'. Suggested use case for this return value is when you want to send two
        // keystrokes of the key, and not the 'double tap' action/macro.
        if (state->interrupted) return TD_DOUBLE_SINGLE_TAP;
        else if (state->pressed) return TD_DOUBLE_HOLD;
        else return TD_DOUBLE_TAP;
    }

    // Assumes no one is trying to type the same letter three times (at least not quickly).
    // If your tap dance key is 'KC_W', and you want to type "www." quickly - then you will need to add
    // an exception here to return a 'TD_TRIPLE_SINGLE_TAP', and define that enum just like 'TD_DOUBLE_SINGLE_TAP'
    if (state->count == 3) {
        if (state->interrupted || !state->pressed) return TD_TRIPLE_TAP;
        else return TD_TRIPLE_HOLD;
    } else return TD_UNKNOWN;
}

// Create an instance of 'td_tap_t' for the 'x' tap dance.
static td_tap_t xtap_state = {
    .is_press_action = true,
    .state = TD_NONE
};

void slash_finished(tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case TD_SINGLE_TAP: register_code(KC_SLSH); break;
        case TD_SINGLE_HOLD: register_code(KC_RGUI); break;
        case TD_DOUBLE_TAP: register_code(KC_BSLS); break;
        // Last case is for fast typing. Assuming your key is `f`:
        // For example, when typing the word `buffer`, and you want to make sure that you send `ff` and not `Esc`.
        // In order to type `ff` when typing fast, the next character will have to be hit within the `TAPPING_TERM`, which by default is 200ms.
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_SLSH); register_code(KC_SLSH); break;
        default: break;
    }
}

void slash_reset(tap_dance_state_t *state, void *user_data) {
    switch (xtap_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_SLSH); break;
        case TD_SINGLE_HOLD: unregister_code(KC_RGUI); break;
        case TD_DOUBLE_TAP: unregister_code(KC_BSLS); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_SLSH); break;
        default: break;
    }
    xtap_state.state = TD_NONE;
}

tap_dance_action_t tap_dance_actions[] = {
    [GUI_SLSH_BSLSH] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, slash_finished, slash_reset),
    [TD_COPY_PSTE] = ACTION_TAP_DANCE_DOUBLE(LCTL(KC_V), LCTL(KC_C)),
    [TD_UNDO_AGIN] = ACTION_TAP_DANCE_DOUBLE(LCTL(KC_Z), LCS(KC_Z)),
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


