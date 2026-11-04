#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

enum keys {
	KC_MAGIC = SAFE_RANGE
};
uint16_t default_magic = QK_REP;

#include "adaptive_keys.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_adaptive_key(keycode, record)) { return false; }

    	switch(keycode) {
		case KC_MAGIC:
			if (get_repeat_key_count()) {
			        return true;
			}

				repeat_key_invoke(&record->event);
				return false;
			break;
    }

    return true;
};

bool remember_last_key_user(uint16_t keycode, keyrecord_t* record, uint8_t* remembered_mods) {
    switch (keycode) {
        case KC_MAGIC:
            return false;
    }

    return true;
}
