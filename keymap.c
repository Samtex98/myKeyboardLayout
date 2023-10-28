#include QMK_KEYBOARD_H

// Keyboard Layers
#define _MD 0
#define _FN 1
#define _DB 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_MD] = LAYOUT_ortho_5x15( /* QWERTY */
	KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_NLCK, KC_PSLS, KC_PAST, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
	KC_INS,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_P7,   KC_P8,   KC_P9,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLASH, \
   KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_P4,   KC_P5,   KC_P6,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_P1,   KC_P2,   KC_P3,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
   MO(_FN), KC_MINS, KC_EQL,  KC_LALT, KC_LCTL,  KC_SPC, KC_BSPC, KC_P0,   KC_TAB,  KC_ENT, KC_RALT,  KC_LGUI, KC_LBRC, KC_RBRC, MO(_FN)  \
 ),

 [_FN] = LAYOUT_ortho_5x15( /* FUNCTION */
	_______, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_SCLK, MO(_DB), KC_PSCR, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11, \
	_______, _______, KC_UP,   _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  KC_F12, \
   KC_CAPS, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, KC_INS , KC_HOME, KC_PGUP, _______, KC_LEFT, KC_DOWN,   KC_UP, KC_RIGHT, _______, \
   _______, _______, _______, _______,  _______, _______, KC_DEL ,  KC_END, KC_PGDN, _______, KC_MRWD, KC_MUTE, KC_MPLY, KC_MFFD,  _______, \
   _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, KC_BRID, KC_VOLD, KC_VOLU, KC_BRIU,  MO(_FN)  \
 ),

 [_DB] = LAYOUT_ortho_5x15( /* DEBUG */
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, \
    _______, BL_STEP, BL_DEC,  BL_INC,  BL_BRTG, _______, _______,   RESET, _______, _______, RGB_MOD, RGB_VAD, RGB_VAI, RGB_RMOD, _______, \
    _______, _______, _______, _______, _______, _______, _______,   DEBUG, _______, _______, RGB_SAD, RGB_HUD, RGB_HUI,  RGB_SAI, _______, \
    _______, _______, BL_ON,   BL_OFF,  BL_TOGG, _______, _______, _______, _______, _______, RGB_TOG, _______, _______,  _______, _______  \
 ),
};