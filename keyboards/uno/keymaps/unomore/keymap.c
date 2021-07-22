/* Copyright 2020 Snipeye
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "sendstring_french.h"

enum tap_dance_indexes {
	UNO
};

void on_dance_finished(qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
			tap_code16(LWIN(KC_L));
			break;

		case 2:
        	SEND_STRING("sah");
        	tap_code(KC_ENT);
			break;

		case 3:
        	SEND_STRING("quel plaisir");
        	tap_code(KC_ENT);
			break;
	}
}

qk_tap_dance_action_t tap_dance_actions[] = {
	[UNO] = ACTION_TAP_DANCE_FN(on_dance_finished)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		TD(UNO)
	)
};