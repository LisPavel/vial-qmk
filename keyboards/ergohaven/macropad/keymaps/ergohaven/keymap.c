#include QMK_KEYBOARD_H
#include "ergohaven.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
                        KC_MUTE,
      KC_7, KC_8,       KC_9,
      KC_4, KC_5,       KC_6,
      KC_1, KC_2,       KC_3,
      KC_0, LAYER_PREV, LAYER_NEXT
  ),
  [1] = LAYOUT(
                        _______,
      KC_HOME, KC_INS,  KC_END,
      PREVWRD, KC_UP,   NEXTWRD,
      KC_LEFT, KC_DOWN, KC_RIGHT,
      KC_DEL,  _______, _______
  ),
  [2] = LAYOUT(
                        KC_BTN3,
      KC_CUT,  KC_COPY, KC_PASTE,
      KC_BTN1, KC_MS_U, KC_BTN2,
      KC_MS_L, KC_MS_D, KC_MS_R,
      KC_PSCR, _______, _______
  ),
  [3] = LAYOUT(
                        KC_MUTE,
      KC_BRID, KC_CPNL, KC_BRIU,
      KC_MYCM, KC_WSCH, KC_MAIL,
      KC_MPRV, KC_MPLY, KC_MNXT,
      KC_CALC, _______, _______
  ),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
  [1] = { ENCODER_CCW_CW(KC_PGDN, KC_PGUP) },
  [2] = { ENCODER_CCW_CW(KC_WH_D, KC_WH_U) },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	return OLED_ROTATION_90;
}

static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 
0xc0, 0xf0, 0xe0, 0xf8, 0xf8, 0xf8, 0x7c, 0xfc, 0xbc, 0x5c, 0xbc, 0xae, 0xce, 0xf6, 0xfe, 0xfa, 
0xf6, 0xf6, 0xfa, 0xfa, 0xfa, 0xfe, 0xfe, 0xfe, 0xfe, 0x7e, 0x7e, 0x7e, 0x7e, 0x7c, 0x7c, 0x78, 
0xf0, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xfb, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x1f, 0x1f, 
0x0f, 0x0f, 0x07, 0x03, 0x03, 0x01, 0x21, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 
0xe1, 0x79, 0x90, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x02, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xf3, 0xf9, 0xfe, 0xff, 0xf7, 
0xf5, 0xe5, 0xe5, 0xe5, 0x45, 0x45, 0x47, 0x43, 0x81, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x02, 0x01, 0xc0, 0x20, 0x20, 0xd0, 0xe0, 0xe8, 0xf8, 0xf4, 0xfa, 0xfa, 0xfd, 0xff, 0xfe, 
0x7f, 0xbf, 0x7f, 0xdf, 0xf7, 0xf9, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x2f, 0x9f, 0xff, 
0xfb, 0xf9, 0xe1, 0xc2, 0x82, 0x03, 0x93, 0x83, 0xc7, 0xe3, 0xf7, 0x7b, 0xbe, 0xde, 0x00, 0x00, 
0x00, 0x00, 0xff, 0x01, 0xff, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x7f, 
0x80, 0xfe, 0x3e, 0x1f, 0x07, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x5e, 
0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfd, 0xfe, 0xff, 0xff, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x01, 0x03, 0x06, 0x0d, 0x1e, 0x1d, 0x1b, 0x1b, 0x1b, 0x1b, 0x0b, 0x0f, 0x07, 0x03, 
0x01, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x03, 0x1b, 0x1b, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x1f, 0x1f, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x11, 0xc3, 0x07, 0x0e, 0x1d, 0x3a, 0x00, 0x00, 0x00, 
0x00, 0x02, 0x02, 0x23, 0x03, 0x1b, 0x01, 0x05, 0x00, 0x02, 0x00, 0x80, 0x80, 0xa0, 0xc0, 0xc0, 
0xc0, 0xf0, 0xe0, 0xf0, 0xf0, 0xf0, 0xf8, 0xf8, 0xf9, 0xfa, 0xfc, 0xfc, 0xfc, 0xfe, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x80, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x80, 0xe0, 0xe0, 0xf0, 0xf0, 
0xf8, 0x58, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x5f, 0xbf, 0xcf, 
0xef, 0xef, 0xf7, 0xf3, 0xfb, 0xfd, 0xfd, 0xfd, 0xfd, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xfc, 
0xf8, 0xf0, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x01, 0x04, 0x16, 0x98, 0x60, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x80, 0xfe, 0x6f, 0xb3, 0x0b, 0x05, 0x0a, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x70, 0xc0, 0xb0, 0xf9, 0x3e, 0x7f, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xe0, 0xc0, 0x00, 0x00, 0x0e, 0xe0, 0x01, 0x0e, 
0x00, 0x00, 0x00, 0x80, 0x47, 0xf0, 0x68, 0x3c, 0x2d, 0x06, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x40, 0xd8, 0xec, 0xfa, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7d, 
0xff, 0x7b, 0x17, 0x27, 0x1f, 0x1f, 0x1f, 0x5f, 0x2f, 0x1f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x2e, 0x30, 0x00, 0x00, 0xfe, 0x00, 
0x00, 0xf8, 0x1e, 0x0f, 0x0f, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa0, 
0xe8, 0xfc, 0xfd, 0xff, 0x7f, 0x7f, 0x3e, 0x1f, 0x1f, 0x0f, 0x03, 0x07, 0x03, 0x02, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

void render_layer_state(void) {
    oled_write_ln_P(PSTR("fw:v3.1\n"), false);
    // oled_write_P(PSTR("\n"), false);
    oled_write_ln_P(PSTR("lvl:"), false);
    // oled_write_P(PSTR("\n"), false);
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("ZERO\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("ONE\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("TWO\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("THREE\n"), false);
            break;
        case _FOUR:
            oled_write_P(PSTR("FOUR\n"), false);
            break;
        case _FIVE:
            oled_write_P(PSTR("FIVE\n"), false);
            break;
        case _SIX:
            oled_write_P(PSTR("SIX\n"), false);
            break;
        case _SEVEN:
            oled_write_P(PSTR("SEVEN\n"), false);
            break;
        case _EIGHT:
            oled_write_P(PSTR("EIGHT\n"), false);
            break;
        case _NINE:
            oled_write_P(PSTR("NINE\n"), false);
            break;
         case _TEN:
            oled_write_P(PSTR("TEN\n"), false);
            break;
         case _ELEVEN:
            oled_write_P(PSTR("ELEVEN\n"), false);
            break;
         case _TWELVE:
            oled_write_P(PSTR("TWELVE\n"), false);
            break;
         case _THIRTEEN:
            oled_write_P(PSTR("THIRTEEN\n"), false);
            break;
         case _FOURTEEN:
            oled_write_P(PSTR("FOURTEEN\n"), false);
            break;
         case _FIFTEEN:
            oled_write_P(PSTR("FIFTEEN\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
            oled_write_P(PSTR("\n"), false);
}

bool oled_task_user(void) {
  render_layer_state();
  render_logo();
  return true;
}

#endif
