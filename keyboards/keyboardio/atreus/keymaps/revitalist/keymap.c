// Copyright (C) 2019, 2020  Keyboard.io, Inc
//
// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE, // Colemak base layer is the default layer
    _NUMM, // Numbers on the right, media controls on the left - use the middle-bottom-left key (Enter)
    _NAVF, // Navigation on the left, function keys on the right - use the 2nd-middle-bottom-right key (Space - this is the lowest key on the right)
    _SYMM  // Symbols on the right, mouse controls on the left - use the 2nd-middle-bottom-left key (Backspace   - this is the lowest key on the left)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /*
   * Base alpha layer - Colemak layout with mods in the Atreus default positions and layer toggle on ESC (symbols) and Backspace (Number pad)
   *  Q            W      F     P      G                  ||                J       L      U      Y     '
   *  A            R      S     T      D                  ||                H       N      E      I     O
   *  Z            X      C     V      B             grv  || bsls           K       M      ,      .     /
   *  LT(Sym,Esc)  tab    super shift  LT(Num,bksp)  alt  || ctrl  LT(Nav,space)   shift  super  minus Entr
   */

  [_BASE] = LAYOUT(
      KC_Q,              KC_W,        KC_F,       KC_P,            KC_G,                                                         KC_J,   KC_L,    KC_U,      KC_Y,     KC_QUOT,  \
      KC_A,              KC_R,        KC_S,       KC_T,            KC_D,                                                         KC_H,   KC_N,    KC_E,      KC_I,     KC_O,     \
      KC_Z,              KC_X,        KC_C,       KC_V,            KC_B,        KC_GRV,                     KC_BSLS,             KC_K,   KC_M,    KC_COMM,   KC_DOT,   KC_SLSH,  \
      LT(_SYMM,KC_ESC),  KC_TAB,      KC_LGUI, KC_LSFT, LT(_NUMM,KC_BSPC),     KC_LALT,                     KC_LCTL, LT(_NAVF,KC_SPC),   KC_RSFT, KC_RGUI,   KC_MINS,  KC_ENT ),

 /*
   * Navigation layer with function keys
   *  pg-up   home   up    end    ins        ||       prsc    F7     F8     F9    F12
   *  pg-dn   left   down  right  capsw      ||       sclk    F4     F5     F6    F11
   *  undo    cut    copy  paste  redo  grv  || bsls  paus    F1     F2     F3    F10
   *  esc     tab    super shift  del   alt  || ctrl  hold    shift  n/a    n/a   Entr
   */

  [_NAVF] = LAYOUT( /* Navigation on the left, function keys on the right */
      KC_PGUP,     KC_HOME,     KC_UP,      KC_END,          KC_INS,                                                          KC_PSCR,   KC_F7,   KC_F8,    KC_F9,     KC_F12,  \
      KC_PGDN,     KC_LEFT,     KC_DOWN,    KC_RGHT,         CW_TOGG,                                                         KC_SCRL,   KC_F4,   KC_F5,    KC_F6,     KC_F11,  \
      LCMD(KC_Z),  LCMD(KC_X),  LCMD(KC_C), LCMD(KC_V),      SCMD(KC_Z),        KC_GRV,                     KC_BSLS,          KC_PAUS,   KC_F1,   KC_F2,    KC_F3,     KC_F10,  \
      KC_ESC,      KC_TAB,      KC_LGUI,    KC_LSFT,         KC_DEL,            KC_LALT,                    KC_LCTL,          KC_NO,     KC_RSFT, KC_RGUI,  KC_LALT,   KC_ENT ),

 /*
   * Symbols layer with mouse keys
   *  wheel-up   wheel-l   mouse-up    wheel-dn    n/a        ||        {       &      *      (     }
   *  wheel-dn   mouse-l   mouse-dn    mouse-r     capsw      ||        +       $      %      ^     :
   *  undo       cut       copy        paste       redo  grv  || bsls   |       !      @      #     ~
   *  hold       tab       btn-3       btn-1       btn-2 alt  || ctrl   (       )      n/a    n/a   Entr
   */

  [_SYMM] = LAYOUT( /* Mouse controls on the left, symbol keys on the right */
      KC_WH_U,     KC_WH_L,      KC_MS_U,    KC_WH_R,        KC_NO,                                                           KC_LCBR,  KC_AMPR,  KC_ASTR,  KC_LPRN,   KC_RCBR,  \
      KC_WH_D,     KC_MS_L,      KC_MS_D,    KC_MS_R,        KC_NO,                                                           KC_PLUS,  KC_DLR,   KC_PERC,  KC_CIRC,   KC_COLN,  \
      LCMD(KC_Z),  LCMD(KC_X),   LCMD(KC_C), LCMD(KC_V),     SCMD(KC_Z),        KC_GRV,                      KC_BSLS,         KC_PIPE,  KC_EXLM,  KC_AT,    KC_HASH,   KC_TILD,  \
      KC_NO,       KC_TAB,       KC_BTN3,    KC_BTN1,        KC_BTN2,          KC_LALT,                      KC_UNDS,         KC_LPRN,  KC_RPRN,  KC_RGUI,  KC_LALT,   KC_ENT ),

 /*
   * Number layer with media keys
   *  n/a        n/a       vol-up      n/a         n/a        ||        [       7      8      9     ]
   *  n/a        prev-trk  vol-dn      next-trk    n/a        ||        +       4      5      6     ;
   *  undo       cut       copy        paste       redo  grv  || bsls   =       2      3      #     `
   *  hold       tab       mute        stop        hold  alt  || minus  0       .      :      _     Entr
   */

  [_NUMM] = LAYOUT( /* Media controls on the left, number pad keys on the right */
      KC_NO,       KC_NO,       KC_VOLU,    KC_NO,           KC_NO,                                                           KC_LBRC,  KC_7,     KC_8,     KC_9,      KC_RBRC,  \
      KC_NO,       KC_MPRV,     KC_VOLD,    KC_MNXT,         KC_NO,                                                           KC_PLUS,  KC_4,     KC_5,     KC_6,      KC_SCLN,  \
      LCMD(KC_Z),  LCMD(KC_X),  LCMD(KC_C), LCMD(KC_V),      SCMD(KC_Z),        KC_GRV,                      KC_BSLS,         KC_EQL,   KC_1,     KC_2,     KC_3,      KC_GRV,   \
      KC_ESC,      KC_TAB,      KC_MUTE,    KC_MSTP,         KC_NO,             KC_LALT,                     KC_MINS,         KC_0,     KC_DOT,   KC_COLN,  KC_UNDS,   KC_ASTR )

};
