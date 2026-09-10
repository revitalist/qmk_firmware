// Copyright (C) 2019, 2020  Keyboard.io, Inc
//
// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

enum layer_names {
    _BSE,
    _NUM,
    _NAV,
    _SYM,
    _MED,
    _FUN,
    _MSE,
};

// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_R LALT_T(KC_R)
#define GUI_S LGUI_T(KC_S)
#define SHFT_T LSFT_T(KC_T)

// Right-hand home row mods
#define SFT_N RSFT_T(KC_N)
#define GUI_E RGUI_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define CTL_O RCTL_T(KC_O)

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_R LALT_T(KC_R)
#define CTL_S LCTL_T(KC_S)
#define SHFT_T LSFT_T(KC_T)

// Right-hand home row mods
#define SFT_N RSFT_T(KC_N)
#define CTL_E RCTL_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define GUI_O RGUI_T(KC_O)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BSE] = LAYOUT(    /* BASE layer is standard Colemak */
    KC_Q,              KC_W,              KC_F,         KC_P,              KC_B,                                                     KC_J,              KC_L,              KC_U,         KC_Y,             KC_QUOT,   \
    GUI_A,             ALT_R,             CTL_S,        SHFT_T,            KC_G,                                                     KC_M,              SFT_N,             CTL_E,        ALT_I,            GUI_O,     \
    KC_Z,              KC_X,              KC_C,         KC_D,              KC_V,              U_NP,              U_NP,               KC_K,              KC_H,              KC_COMM,      KC_DOT,           KC_SLSH,   \
    U_NP,              U_NP,              U_NP,         LT(_FUN,KC_DEL),   LT(_NUM,KC_BSPC),  LT(_SYM,KC_ENT),   LT(_MSE,KC_TAB),    LT(_NAV,KC_SPC),   LT(_MED,KC_ESC),   U_NP,         U_NP,             U_NP ),


  [_NUM] = LAYOUT( /* Number pad */
    U_NA,              U_NA,              KC_LPRN,      KC_RPRN,           KC_PLUS,                                                  KC_LBRC,           KC_7,              KC_8,         KC_9,              KC_RBRC,  \
    KC_LGUI,           KC_LALT,           KC_LCTL,      KC_LSFT,           KC_MINS,                                                  KC_EQL,            KC_4,              KC_5,         KC_6,              KC_SCLN,  \
    U_NA,              U_NA,              U_NA,         U_NA,              KC_COMM,           U_NP,              U_NP,               KC_BSLS,           KC_1,              KC_2,         KC_3,              KC_GRV,   \
    U_NP,              U_NP,              U_NP,         U_NA,              U_NA,              U_NA,           KC_MINS,               KC_0,              KC_DOT,            U_NP,         U_NP,              U_NP ),


  [_NAV] = LAYOUT( /* Navigation  */
    KC_PGUP,           KC_HOME,           KC_UP,        KC_END,            KC_INS,                                                   U_NA,              U_NA,              U_NA,         U_NA,              U_NA,     \
    KC_PGDN,           KC_LEFT,           KC_DOWN,      KC_RGHT,           CW_TOGG,                                                  U_NA,              KC_LSFT,           KC_LCTL,      KC_LALT,           KC_LGUI,  \
    U_UND,             U_CUT,             U_CPY,        U_PST,             U_RDO,             U_NP,              U_NP,               U_NA,              U_NA,              U_NA,         U_NA,              U_NA,     \
    U_NP,              U_NP,              U_NP,         KC_DEL,            KC_BSPC,           KC_ENT,            U_NA,               U_NA,              U_NA,              U_NP,         U_NP,              U_NP ),


  [_SYM] = LAYOUT( /* Symbols */
    U_NA,              U_NA,              KC_LPRN,      KC_RPRN,           KC_PLUS,                                                  KC_LCBR,           KC_AMPR,           KC_ASTR,      KC_LPRN,           KC_RCBR,  \
    KC_LGUI,           KC_LALT,           KC_LCTL,      KC_LSFT,           KC_MINS,                                                  KC_PLUS,           KC_DLR,            KC_PERC,      KC_CIRC,           KC_COLN,  \
    U_NA,              U_NA,              U_NA,         U_NA,              KC_BSLS,           U_NP,              U_NP,               KC_PIPE,           KC_EXLM,           KC_AT,        KC_HASH,           KC_TILD,  \
    U_NP,              U_NP,              U_NP,         U_NA,              U_NA,              U_NA,              KC_UNDS,            KC_LPRN,           KC_RPRN,           U_NP,         U_NP,              U_NP ),


  [_MED] = LAYOUT( /*  Media  */
    RGB_HUI,           RGB_SAI,           KC_VOLU,      RGB_VAI,           RGB_TOG,                                                  U_NA,              U_NA,              U_NA,         U_NA,              U_NA,     \
    RGB_MOD,           KC_MPRV,           KC_VOLD,      KC_MNXT,           U_NU,                                                     U_NA,              KC_LSFT,           KC_LCTL,      KC_LALT,           KC_LGUI,  \
    U_NU,              U_NU,              U_NU,         U_NU,              OU_AUTO,           U_NP,              U_NP,               U_NA,              U_NA,              U_NA,         U_NA,              U_NA,     \
    U_NP,              U_NP,              U_NP,         KC_MUTE,           KC_MPLY,           KC_MSTP,           U_NA,               U_NA,              U_NA,              U_NP,         U_NP,              U_NP ),


  [_FUN] = LAYOUT( /* Functions */
    U_NA,              U_NA,              U_NA,         U_NA,              U_NA,                                                     KC_PSCR,           KC_F7,             KC_F8,        KC_F9,             KC_F12,   \
    KC_LGUI,           KC_LALT,           KC_LCTL,      KC_LSFT,           U_NA,                                                     KC_SCRL,           KC_F4,             KC_F5,        KC_F6,             KC_F11,   \
    U_NA,              U_NA,              U_NA,         U_NA,              U_NA,              U_NP,              U_NP,               KC_PAUS,           KC_F1,             KC_F2,        KC_F3,             KC_F10,   \
    U_NP,              U_NP,              U_NP,         U_NA,              U_NA,              U_NA,              KC_TAB,             KC_SPC,            KC_APP,            U_NP,         U_NP,              U_NP ),

  [_MSE] = LAYOUT( /*  Mouse  */
    KC_WH_U,           KC_WH_L,           KC_MS_U,      KC_WH_R,           U_NU,                                                     U_NA,              U_NA,              U_NA,         U_NA,              U_NA,     \
    KC_WH_D,           KC_MS_L,           KC_MS_D,      KC_MS_R,           U_NU,                                                     U_NA,              KC_LSFT,           KC_LCTL,      KC_LALT,           KC_LGUI,  \
    U_UND,             U_CUT,             U_CPY,        U_PST,             U_RDO,             U_NP,              U_NP,               U_NA,              U_NA,              U_NA,         U_NA,              U_NA,     \
    U_NP,              U_NP,              U_NP,         KC_BTN3,           KC_BTN1,           KC_BTN2,           U_NA,               U_NA,              U_NA,              U_NP,         U_NP,              U_NP )

};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        'L', 'L', 'L', 'L', 'L',             'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L',             'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',  'R',  'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',  'R',  'R', 'R', 'R', 'R', 'R'
    );
