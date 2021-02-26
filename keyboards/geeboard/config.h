/*
Copyright 2021 kb-elmo<mail@elmo.space>

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
#define VENDOR_ID    0xEF9F
#define PRODUCT_ID   0x8192
#define DEVICE_VER   0x0001
#define MANUFACTURER megamannen
#define PRODUCT      geeboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 7

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { D7, F7, C6, F6, F5, F4 }
#define MATRIX_COL_PINS { B1, E6, B3, B4, B2, B5, B6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* RGB backlight */
#define RGB_DI_PIN D1
#ifdef RGB_DI_PIN
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 8
    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 8
    #define RGBLIGHT_LIMIT_VAL 255
    #define RGBLIGHT_SLEEP // RGB will turn off when PC is put to sleep
#endif

/* rotary encoders */
#define ENCODERS_PAD_A { D0, D3 }
#define ENCODERS_PAD_B { D4, D2 }
#define ENCODER_RESOLUTIONS { 2, 2 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
