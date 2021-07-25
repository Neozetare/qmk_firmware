#pragma once

#include "quantum.h"
#include "lang.h"

#ifdef CONSOLE_ENABLE
#   include "print.h"
#endif

#define USER_SAFE_RANGE SAFE_RANGE

/* MODULES */

#ifdef SPAMSTRING_ENABLE
#   include "modules/spamstring/spamstring.h"
#endif

#ifdef TEAMS_ENABLE
#   include "modules/teams/teams.h"
#endif

/* USER-LEVEL KEYCODES */

enum user_keycodes {
    UK_MAKE = USER_SAFE_RANGE,
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
