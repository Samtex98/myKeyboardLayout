#include QMK_KEYBOARD_H

// Keyboard Layers
#define _MD 0
#define _WM 1
#define _QQ 2
#define _FN 3
#define _DB 4

// Unicode Map

enum unicode_names {
					U_A,
					U_a,
					U_AE,
					U_ae,
					U_O,
					U_o
};

const uint32_t PROGMEM unicode_map[] = {
										[U_A]  = 0xC5, // Å 
										[U_a]  = 0xE5, // å 
										[U_AE] = 0xC4, // Ä 
										[U_ae] = 0xE4, // ä
										[U_O]  = 0xD6, // Ö 
										[U_o]  = 0xF5,  // ö 
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_MD] = LAYOUT_ortho_5x15( /* NON FUNC */
	 KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_NLCK, KC_PSLS, KC_PAST,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______, \
	 KC_INS , _______, _______, _______, _______, _______,   KC_P7,   KC_P8,   KC_P9, _______, _______, _______, _______, _______, _______, \
     KC_ESC, _______, _______, _______, _______, _______,   KC_P4,   KC_P5,   KC_P6, _______, _______, _______, _______, _______, _______, \
    KC_LSFT, _______, _______, _______, _______, _______,   KC_P1,   KC_P2,   KC_P3, _______, _______, _______, _______, _______, KC_RSFT, \
    MO(_FN), KC_MINS, KC_EQL,  KC_LALT, KC_LCTL,  KC_SPC, KC_BSPC,   KC_P0,  KC_TAB,  KC_ENT, KC_RALT, KC_LGUI, KC_LBRC, KC_RBRC, MO(_FN)  \
 ),
 
 [_WM] = LAYOUT_ortho_5x15( /* WORKMAN */
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______,    KC_Q,    KC_D,    KC_R,    KC_W,    KC_B, _______, _______, _______,    KC_J,    KC_F,    KC_U,    KC_P, _______, KC_BSLASH, \
    _______,    KC_A,    KC_S,    KC_H,    KC_T,    KC_G, _______, _______, _______,    KC_Y,    KC_N,    KC_E,    KC_O,    KC_I, KC_QUOT, \
    _______,    KC_Z,    KC_X,    KC_M,    KC_C,    KC_V, _______, _______, _______,    KC_K,    KC_L, KC_COMM,  KC_DOT, KC_SLSH, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
 ),
 
 [_QQ] = LAYOUT_ortho_5x15( /* NON-STANDARD QWERTY */
	_______, _______, _______, _______,  _______, _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, \
	_______,    KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,   _______, _______, _______,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLASH, \
    _______,    KC_A,    KC_S,    KC_D,     KC_F,    KC_G,   _______, _______, _______,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT, \
    _______,    KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,   _______, _______, _______,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, _______, \
    _______, _______, _______,  _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______  \
 ),

 [_FN] = LAYOUT_ortho_5x15( /* FUNCTION */
	_______,         KC_F1,       KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_SLCK, MO(_DB), KC_PSCR,   KC_F6,   KC_F7,   KC_F8,   KC_F9,      KC_F10,  KC_F11, \
    _______, XP(U_ae,U_AE), XP(U_a,U_A), _______, _______, _______, KC_HOME, TG(_WM), KC_PGUP, _______, _______, _______, _______, XP(U_o,U_O),  KC_F12, \
    KC_CAPS,       _______,     _______, _______, _______, _______, KC_END,  TG(_QQ), KC_PGDN, KC_PPLS, KC_LEFT, KC_DOWN,   KC_UP,    KC_RIGHT, KC_HOME, \
    _______,       _______,     _______, _______, _______, _______, KC_DEL,  _______,  KC_INS, KC_PCMM, KC_VOLD, KC_MUTE, KC_MPLY,     KC_VOLU,  KC_END, \
    _______,       _______,     _______, _______, _______, _______, _______, _______, _______, KC_PMNS, KC_BRID, KC_PGDN, KC_PGUP,     KC_BRIU, _______  \
 ),

 [_DB] = LAYOUT_ortho_5x15( /* DEBUG */
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, \
    _______, BL_STEP, BL_DEC,  BL_INC,  BL_BRTG, _______, _______,   RESET, _______, _______, RGB_MOD, RGB_VAD, RGB_VAI, RGB_RMOD, _______, \
    _______, _______, _______, _______, _______, _______, _______,   DEBUG, _______, _______, RGB_SAD, RGB_HUD, RGB_HUI,  RGB_SAI, _______, \
    _______, _______, BL_ON,   BL_OFF,  BL_TOGG, _______, _______, _______, _______, _______, RGB_TOG, _______, _______,  _______, _______  \
 ),
};
