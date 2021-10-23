/*
Copyright 2021 Loïc Berland (Danyal)
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x3533
#define DEVICE_VER 0x0001
#define MANUFACTURER Danyal
#define PRODUCT Dan16
#define DESCRIPTION A handwired 4x4 Macropad with a rotary encoder

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* Keyboard Matrix Assignments
 *
 * Modify to match your wiring
 *
 *                        1   2   3   4 
 */
#define MATRIX_ROW_PINS { F4, F5, F7, B3 }
#define MATRIX_COL_PINS { D3, D1, D4, E6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Rotary Encoder Support */
#define ENCODERS_PAD_A { D2 }
#define ENCODERS_PAD_B { B2 }

#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
  #define NO_ACTION_MACRO
  #define NO_ACTION_FUNCTION
#endif
