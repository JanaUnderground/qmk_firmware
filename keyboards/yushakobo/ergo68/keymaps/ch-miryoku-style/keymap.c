/* Copyright 2023 yushakobo
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
        [0] = LAYOUT(
        KC_ESC,                 KC_1,                   KC_2,                   KC_3,           KC_4,           KC_5,                               KC_6,           KC_7,           KC_8,           KC_9,               KC_0,               KC_NO,
        KC_NO,                  KC_Q,                   KC_W,                   KC_E,           KC_R,           KC_T,       KC_NO,      KC_NO,      KC_Y,           KC_U,           KC_I,           KC_O,               KC_P,               KC_LBRC,
        KC_NO,                  LGUI_T(KC_A),           LALT_T(KC_S),           LCTL_T(KC_D),   LSFT_T(KC_F),   KC_G,       KC_NO,      KC_NO,      KC_H,           RSFT_T(KC_J),   RCTL_T(KC_K),   RALT_T(KC_L),       RGUI_T(KC_SCLN),    KC_QUOT,
        KC_NO,                  KC_Z,                   KC_X,                   KC_C,           KC_V,           KC_B,       KC_NO,      KC_NO,      KC_N,           KC_M,           KC_COMM,        KC_DOT,             KC_SLSH,            KC_NO,
        KC_MEDIA_PREV_TRACK,    KC_MEDIA_PLAY_PAUSE,    KC_MEDIA_NEXT_TRACK,    KC_ESC,         LT(2,KC_SPC),   KC_TAB,     KC_NO,      KC_NO,      LT(3,KC_ENT),   LT(1,KC_BSPC),  KC_DEL,         KC_KB_VOLUME_DOWN,  KC_KB_MUTE,         KC_KB_VOLUME_UP
    ),
        [1] = LAYOUT(
        KC_TRNS,    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                            KC_TRNS,        KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,
        KC_TRNS,    KC_TRNS,        KC_7,           KC_8,           KC_9,           KC_TRNS,    KC_TRNS,    KC_TRNS,    RALT(KC_LBRC),  KC_TRNS,            KC_UP,              KC_TRNS,            RALT(KC_RBRC),      KC_TRNS,
        KC_NUM,     KC_TRNS,        LGUI_T(KC_4),   LALT_T(KC_5),   LCTL_T(KC_6),   KC_TRNS,    KC_TRNS,    KC_TRNS,    LSFT(KC_8),     RSFT_T(KC_LEFT),    RCTL_T(KC_DOWN),    RALT_T(KC_RIGHT),   LSFT(KC_9),         KC_TRNS,
        KC_TRNS,    KC_TRNS,        KC_1,           KC_2,           KC_3,           KC_TRNS,    KC_TRNS,    KC_TRNS,    RALT(KC_QUOT),  LSFT(KC_1),         LSFT(KC_0),         KC_SLSH,            RALT(KC_NUHS),      KC_TRNS,
        KC_TRNS,    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_0,           KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS
    ),
        [2] = LAYOUT(
        KC_TRNS,    KC_TRNS,            KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,                                KC_TRNS,    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,    RALT(KC_E),         RALT(KC_8),     RALT(KC_6),     LSFT(KC_4),         RALT(KC_1),     KC_TRNS,    KC_TRNS,    RALT(KC_2), RALT(KC_3),     LSFT(KC_3),     LSFT(KC_5),     LSFT(KC_6),     KC_TRNS,
        KC_TRNS,    LSFT(KC_2),         RALT(KC_MINS),  LSFT(KC_EQL),   LSFT_T(KC_MINS),    LSFT(KC_GRV),   KC_TRNS,    KC_TRNS,    RALT(KC_7), LSFT(KC_7),     RALT(KC_NUBS),  LSFT(KC_RBRC),  LSFT(KC_MINS),  KC_TRNS,
        KC_TRNS,    LSFT(KC_NUHS),      KC_GRV,         KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_NUBS,    LSFT(KC_NUBS),  KC_NUHS,        RALT(KC_EQL),   KC_EQL,         KC_TRNS,
        KC_TRNS,    KC_TRNS,            KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS
    ),
        [3] = LAYOUT(
        KC_TRNS,    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                            KC_TRNS,    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,
        KC_TRNS,    KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_PSCR,        KC_SCRL,        KC_PAUS,        KC_TRNS,            KC_TRNS,
        KC_TRNS,    LGUI_T(KC_F11), LALT_T(KC_F4),  LCTL_T(KC_F5),  LSFT_T(KC_F6),  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    RSFT_T(KC_INS), RCTL_T(KC_HOME),RALT_T(KC_PGUP),RGUI_T(KC_CAPS),    KC_TRNS,
        KC_TRNS,    KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_DEL,         KC_END,         KC_PGDN,        KC_TRNS,            KC_TRNS,
        KC_TRNS,    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS
    )
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // caps lock cyan
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 0, 0, 128);
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 0, 0, 0);
    }

    // num lock cyan
    if (host_keyboard_led_state().num_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 0, 0, 128);
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 0, 0, 0);
    }

    // scroll lock cyan
    if (host_keyboard_led_state().scroll_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(2, 0, 0, 128);
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(2, 0, 0, 0);
    }

    // layer state
    switch (get_highest_layer(layer_state)) {
        case 0:
            rgblight_sethsv(HSV_WHITE);
            break;
        case 1:
            rgblight_sethsv(1, 255, 255);
            break;
        case 2:
            rgblight_sethsv(HSV_CYAN);
            break;
        case 3:
            rgblight_sethsv(250, 255, 255);
            break;
        case 4:
            rgblight_sethsv(HSV_GREEN);
            break;
    }

    return true;
}

bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }

    rgb_matrix_set_color(9,  104, 0, 0);
    rgb_matrix_set_color(22, 104, 0, 0);
    rgb_matrix_set_color(23, 104, 0, 0);
    rgb_matrix_set_color(36, 104, 0, 0);
    rgb_matrix_set_color(32, 104, 0, 0);
    rgb_matrix_set_color(31, 104, 0, 0);
    rgb_matrix_set_color(30, 104, 0, 0);
    return true;
}

void keyboard_post_init_user(void) {
    //rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR); // RGB_MATRIX_SOLID_COLOR, RGB_MATRIX_BREATHING, RGB_MATRIX_SPLASH, RGB_MATRIX_SOLID_SPLASH
    rgblight_sethsv(HSV_WHITE);
}
