#include "spamstring.h"

/* GLOBAL VARIABLES */

bool is_key_down = false;
bool is_pause_active = true;
uint16_t key_timer = 0;

/* PUBLIC MODULE-LEVEL FUNCTIONS */

void process_record_spamstring(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        is_key_down = true;
        is_pause_active = true;
        _send_payload();
    } else {
        is_key_down = false;
    }
}

void matrix_scan_spamstring(void) {
    if (is_pause_active) {
        if (timer_elapsed(key_timer) <= SPAMSTRING_PAUSE) {
            return;
        } else {
            is_pause_active = false;
        }
    }

    if (!is_pause_active && is_key_down && timer_elapsed(key_timer) > SPAMSTRING_INTERVAL) {
        _send_payload_with_separator();
    }
}

/* PUBLIC MODULE-LEVEL FUNCTIONS */

void _send_payload(void) {
    SEND_STRING(SPAMSTRING_PAYLOAD);
    key_timer = timer_read();
}

void _send_payload_with_separator(void) {
#ifdef SPAMSTRING_SEPARATOR
    SEND_STRING(SPAMSTRING_SEPARATOR);
#endif
    _send_payload();
}
