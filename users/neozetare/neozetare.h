#pragma once

#include "quantum.h"
#include "keymap_lang.h"

#ifdef CONSOLE_ENABLE
#   include "print.h"
#endif

#ifdef SPAMSTRING_ENABLE
#   include "spamstring.h"
#endif

/* USER-LEVEL KEYCODES */

#define UK_MTMS LCTL(LSFT(LK_M))

enum user_keycodes {
    UK_MAKE = SAFE_RANGE,
    UK_SSTR,
    KEYMAP_SAFE_RANGE
};

/* USER-LEVEL FUNCTIONS  */

void keyboard_post_init_user(void);
bool process_record_user(uint16_t keycode, keyrecord_t *record);
void matrix_scan_user(void);

/* DEFAULT KM-LEVEL FUNCTIONS  */

void keyboard_post_init_km(void);
bool process_record_km(uint16_t keycode, keyrecord_t *record);
void matrix_scan_km(void);
