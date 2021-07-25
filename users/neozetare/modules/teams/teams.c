#include "teams.h"

/* GLOBAL VARIABLES */

bool is_idle_active = false;

/* PUBLIC MODULE-LEVEL FUNCTIONS */

void process_record_teams(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case UK_TIDL:
            if (record->event.pressed) {
                is_idle_active = !is_idle_active;
            }
            break;
    }
}

void matrix_scan_teams(void) {
    if (is_idle_active) {
#ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_UP);
        tap_code(KC_MS_DOWN);
#endif
    }
}
