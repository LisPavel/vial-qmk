#pragma once
#include "quantum.h"

#define _MAIN 0
#define _SYMB 1
#define _NAV 2
#define _NUMB 3
#define _MOUSE 4
#define _GAME 5
#define _GADD 6
#define _SEVEN 7
#define _EIGHT 8
#define _NINE 9
#define _TEN 10
#define _ELEVEN 11
#define _TWELVE 12
#define _THIRTEEN 13
#define _FOURTEEN 14
#define _FIFTEEN 15

#define BASE      DF(_MAIN)
#define RAISE     MO(_SYMB)
#define LOWER     MO(_NAV)
#define ADJUST    MO(_NUMB)
#define PREVWRD   LCTL(KC_LEFT)
#define NEXTWRD   LCTL(KC_RIGHT)
#define CTRLUP    LCTL(KC_UP)
#define CTRLDN    LCTL(KC_DOWN)
#define LANG      LALT(KC_LSFT)

#define CT_Q      LCTL_T(KC_Q)
#define CT_CM     RCTL_T(KC_COMM)
#define SF_Z      LSFT_T(KC_Z)
#define SF_SS     RSFT_T(KC_SLSH)
#define AL_X      LALT_T(KC_X)
#define AL_DT     RALT_T(KC_DOT)
#define LO_TB     LT(LOWER, KC_TAB)

#define APP_A     LSG(KC_A)
#define APP_S     LSG(KC_S)
#define APP_D     LSG(KC_D)
#define APP_F     LSG(KC_F)
#define APP_G     LSG(KC_G)
#define APP_X     LSG(KC_X)
#define APP_C     LSG(KC_C)
#define APP_V     LSG(KC_V)
#define APP_B     LSG(KC_B)

enum custom_keycodes {
    NEXTSEN = QK_KB,
    PREDL, 
    BRACES,
    PARENTH,
    ALT_TAB,

    SW_WIN,  // Switch to next window         (alt-tab)
    SW_TAB,  // Switch to next browser tab    (ctrl-tab)

    LAYER_NEXT,
    LAYER_PREV,
};

// 1st layer on the cycle
#define LAYER_CYCLE_START 0
// Last layer on the cycle
#define LAYER_CYCLE_END   15
