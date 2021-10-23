#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base
 * ,---------------------------.
 * |  FN  |   -  |   +  |BSPACE|
 * |------+------+------+------|
 * |   7  |   8  |   9  |  *   |
 * |------+------+------+------|
 * |   4  |   5  |   6  | ENTER|
 * |------+------+------+------|
 * |   1  |   2  |   3  |  0   |
 * `---------------------------'
 */
[_BASE] = LAYOUT_ortho_4x4(
     TT(_FN), KC_MINUS, KC_KP_PLUS, KC_BSPACE, 
		KC_7, KC_8, KC_9, KC_KP_ASTERISK, 
		KC_4, KC_5, KC_6, KC_ENTER, 
		KC_1, KC_2, KC_3, KC_0
),

/* FN
 * ,---------------------------.
 * |      | RESET|      |      |
 * |------+------+------+------|
 * |      |      |      |      |
 * |------+------+------+------|
 * |      |      |      |      |
 * |------+------+------+------|
 * |      |      |      |      |
 * `---------------------------'
 */
[_FN] = LAYOUT_ortho_4x4(
    KC_TRNS,     RESET,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS
),

[2] = LAYOUT_ortho_4x4(
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS
),

[3] = LAYOUT_ortho_4x4(
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS
)
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
          tap_code16(LALT(KC_TAB));
        } else {
           tap_code16(LSA(KC_TAB));
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
        }
    }
    return false;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}