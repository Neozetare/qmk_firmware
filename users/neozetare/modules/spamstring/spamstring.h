#pragma once

#include "quantum.h"

/* DEFAULT PREPROCESSOR CONSTANTS */

#ifndef SPAMSTRING_PAYLOAD
#   define SPAMSTRING_PAYLOAD "spam"
#endif

#ifndef SPAMSTRING_PAUSE
#   define SPAMSTRING_PAUSE 500
#endif

#ifndef SPAMSTRING_INTERVAL
#   define SPAMSTRING_INTERVAL 30
#endif

/* PUBLIC MODULE-LEVEL FUNCTIONS */ 

void process_record_spamstring(uint16_t keycode, keyrecord_t *record);
void matrix_scan_spamstring(void);

/* PUBLIC MODULE-LEVEL FUNCTIONS */

void _send_payload(void);
void _send_payload_with_separator(void);
