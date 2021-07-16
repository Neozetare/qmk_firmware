#include QMK_KEYBOARD_H

enum user_keycodes {
    UNO = SAFE_RANGE
};

bool active = false;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        UNO
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case UNO:
            if (record->event.pressed) {
                active = !active;
            }
            break;
    }

    return true;
}

void matrix_scan_user(void) {
    if (active) {
        tap_code(KC_MS_UP);
        tap_code(KC_MS_DOWN);
        tap_code(KC_MS_BTN1);
    }
}
