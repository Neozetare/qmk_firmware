#include "neozetare.h"
#include "sendstring_french.h"

/* USER-LEVEL FUNCTIONS  */

void keyboard_post_init_user(void) {
#ifdef DEBUG_ENABLE
    debug_enable = true;
    debug_matrix = true;
    debug_keyboard = true;
    debug_mouse = true;
#endif

    keyboard_post_init_km();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    process_record_teams(keycode, record);

    switch (keycode) {
        case UK_MAKE:
            break;
#ifdef SPAMSTRING_ENABLE
        case UK_SSTR:
            process_record_spamstring(keycode, record);
            break;
#endif
    }

    return process_record_km(keycode, record);
}

void matrix_scan_user(void) {
    matrix_scan_spamstring();
}

/* DEFAULT KM-LEVEL FUNCTIONS  */

__attribute__ ((weak))
void keyboard_post_init_km(void) {}

__attribute__ ((weak))
bool process_record_km(uint16_t keycode, keyrecord_t *record) {
    return true;
}

__attribute__ ((weak))
void matrix_scan_km(void) {}
