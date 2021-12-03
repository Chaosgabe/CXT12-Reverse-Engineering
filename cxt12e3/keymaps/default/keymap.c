// Copyright 2021 GA (@Chaosgabe)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_keypad3r_3x4(
        KC_MYCM, LWIN(KC_2), KC_CALC, KC_F16, 
		KC_MRWD, KC_MFFD, KC_MPLY, KC_MSTP, 
		KC_F21, KC_F22, KC_F23, KC_F24, 
		RGB_MODE_PLAIN, RGB_MODE_FORWARD, RGB_TOG),
    
    [_FN] = LAYOUT_keypad3r_3x4(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code16(RGB_VAI);
        } else {
            tap_code16(RGB_VAD);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code16(KC_C);
        } else {
            tap_code16(KC_D);
        }
    } else if (index == 2) { /* Third encoder */
        if (clockwise) {
            tap_code16(KC_E);
        } else {
            tap_code16(KC_F);
        }
    }
    return false;
}