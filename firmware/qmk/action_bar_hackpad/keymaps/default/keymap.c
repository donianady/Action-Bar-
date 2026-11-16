// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keymap_brazilian_abnt2.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [0] =LAYOUT{
    KC_MPRV, KC_MNXT, KC_MPLY, KC_MUTE, KC_C, KC_V
   }

};
#ifdef ENCODER_ENABLE
bool encoder_update_user(unit8_t index, bool clockwise) {
    if (index == 0) {
        if(clockwise) {
            tab_code(KC_VOLU);
        
        } else {
            tap_code(KC_VOLD);
        }
    }
    return false;
}
#endif
