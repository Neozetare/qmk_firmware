#pragma once

#include "quantum.h"
#include "lang.h"

/* USER-LEVEL KEYCODES */

#define UK_TMUT LCTL(LSFT(LK_M))

#define TEAMS_KEYCODES_LENGTH 1

#ifdef USER_SAFE_RANGE
#   define TEAMS_SAFE_RANGE USER_SAFE_RANGE
#   undef USER_SAFE_RANGE
#   define USER_SAFE_RANGE TEAMS_SAFE_RANGE + TEAMS_KEYCODES_LENGTH
#else
#   define TEAMS_SAFE_RANGE SAFE_RANGE
#endif

enum teams_keycodes {
    UK_TIDL = TEAMS_SAFE_RANGE
};

/* PUBLIC MODULE-LEVEL FUNCTIONS */ 

void process_record_teams(uint16_t keycode, keyrecord_t *record);
void matrix_scan_teams(void);