#pragma once

#include QMK_KEYBOARD_H
#include "ergohaven.h"

// #define RESET QK_BOOT

// #define XXXX KC_NONE

// #define LA_SYM MO(_SYMB)
#define LA_SYM LT(_SYMB, KC_BSPC)
// #define LA_NAV MO(_NAV)
#define LA_NAV LT(_NAV, KC_TAB)
// #define LA_GFN MO(_GFN)

// #define QUOT S(KC_GRV)
// #define PIPE S(KC_BSLS)
// #define DPIPE S(RALT(KC_BSLS))
// #define SCLN S(KC_LBRC)
// #define CLN S(KC_RBRC)
// #define GRV RALT(KC_GRV)
// #define BSL RALT(KC_BSLS)

// #define SPACE_L C(G(KC_LEFT))
// #define SPACE_R C(G(KC_RGHT))

// #define TAB_L C(S(KC_TAB))
// #define TAB_R C(KC_TAB)

// enum layers {
//     _DEF,
//     _SYM,
//     _NAV,
//     _NUM,
//     _MOUSE,
//     _GAM,
//     _GFN,
// };
