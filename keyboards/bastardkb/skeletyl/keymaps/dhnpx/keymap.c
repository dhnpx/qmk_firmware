/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_Q,    KC_W,    KC_E,     KC_R,   KC_T,                                           KC_Y,    KC_U,    KC_I,     KC_O,   KC_P,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_A,    KC_S,    KC_D,     KC_F,   KC_G,                                           KC_H,    KC_J,    KC_K,     KC_L,   KC_SCLN,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_Z,    KC_X,    KC_C,     KC_V,   KC_B,                                           KC_N,   KC_M,    KC_COMMA, KC_DOT,  KC_SLSH,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            MO(3),   KC_SPC,   MO(1),      MO(2),  KC_BSPC,  MO(4)
                                        //`--------------------------'  `--------------------------'
    ),
	[1] = LAYOUT_split_3x5_3(
        KC_NO, RCS(KC_TAB), KC_TAB, RCTL(KC_TAB), KC_NO,                            KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_DEL,
        OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), KC_NO,          KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_ENT,
        KC_NO, KC_CUT, KC_COPY, KC_PSTE, KC_NO,                                     KC_NO, KC_BSPC, KC_NO, KC_NO, KC_NO,
                                        KC_TRNS, KC_SPC, KC_TRNS,                   MO(5), KC_BSPC, MO(4)
    ),
	[2] = LAYOUT_split_3x5_3(
        KC_TILD, KC_AT, KC_HASH, KC_DLR, KC_PERC,                     KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_GRV,
        KC_EXLM, KC_PLUS, KC_MINS, KC_EQL, KC_NO,                     KC_UNDS, OSM(MOD_LSFT), OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL),
        KC_DQUO, KC_SLSH, KC_ASTR, KC_QUES, KC_NO,                    KC_PIPE, KC_BSLS, KC_LCBR, KC_RCBR, KC_QUOT,
                                KC_TRNS, KC_SPC, MO(5),         KC_TRNS, KC_BSPC, KC_TRNS
    ),
    [3] = LAYOUT_split_3x5_3(
        KC_NO, KC_MPLY, KC_VOLD, KC_VOLU, KC_NO,                                        KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO,
        OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), KC_NO,              KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO,
        KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO,                                          KC_BTN4, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN5,
                                    KC_TRNS, KC_SPC, KC_TRNS,               KC_TRNS, KC_BSPC, KC_TRNS
    ),
	[4] = LAYOUT_split_3x5_3(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_CAPS,                        KC_NUM, KC_INS, KC_PSCR, KC_SCRL, KC_PAUS,
        KC_F5, KC_F6, KC_F7, KC_F8, KC_APP,                         KC_NO, OSM(MOD_LSFT), OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL),
        KC_F9, KC_F10, KC_F11, KC_F12, KC_NO,                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                    KC_TRNS, KC_SPC, KC_TRNS,     KC_TRNS, KC_BSPC, KC_TRNS
    ),
    [5] = LAYOUT_split_3x5_3(
        KC_SLSH, KC_7, KC_8, KC_9, KC_ASTR,                             KC_NO, KC_EQL, KC_LT, KC_GT, KC_NO,
        KC_MINS, KC_4, KC_5, KC_6, KC_PLUS,                             KC_NO, OSM(MOD_LSFT), OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL),
        KC_DOT, KC_1, KC_2, KC_3, KC_COMMA,                             KC_DQUO, KC_0, KC_LBRC, KC_RBRC, KC_QUOT,
                                KC_TRNS, KC_SPC, KC_TRNS,         KC_TRNS, KC_BSPC, KC_TRNS
    ),
    [6] = LAYOUT_split_3x5_3(
        KC_NO, KC_LT, KC_GT, KC_EQL, KC_NO,                                         KC_EQL, KC_7, KC_8, KC_9, KC_PLUS,
        OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), KC_NO,          KC_ASTR, KC_4, KC_5, KC_6, KC_MINS,
        KC_NO, KC_RBRC, KC_LBRC, KC_NO, KC_NO,                                      KC_0, KC_1, KC_2, KC_3, KC_SLSH,
                        KC_TRNS, KC_SPC, KC_TRNS,                           MO(5), KC_BSPC, KC_TRNS
    ),

};


//const uint16_t PROGMEM ld_semicolon[] = {KC_L, KC_D, COMBO_END};
//const uint16_t PROGMEM uo_slash[] = {KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM df_esc[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jk_ent[] = {KC_J, KC_K, COMBO_END};
//const uint16_t PROGMEM rs_tab[] = {KC_R, KC_S, COMBO_END};
//const uint16_t PROGMEM eh_del[] = {KC_E, KC_H, COMBO_END};
const uint16_t PROGMEM sd_lshft[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM kl_rshft[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM mo6[] = {MO(1), KC_SPC, COMBO_END};

combo_t key_combos[] = {
  //COMBO(uo_slash, KC_SLSH),
  //COMBO(rs_tab, KC_TAB),
  COMBO(jk_ent, KC_ENT),
  COMBO(df_esc, KC_ESC),
  //COMBO(eh_del, KC_DEL),
  COMBO(sd_lshft, KC_LSFT),
  COMBO(kl_rshft, KC_RSFT),
  COMBO(mo6, MO(6)),
};
