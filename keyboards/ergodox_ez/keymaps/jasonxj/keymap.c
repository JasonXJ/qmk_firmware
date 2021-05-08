#include QMK_KEYBOARD_H
#include "version.h"

enum layers {
    OLD0,
    OLD1,
    BASE, // default layer
    NOOP_LAYER, // symbols
    /*MDIA,  // media keys*/
};

/*enum custom_keycodes {*/
/*#ifdef ORYX_CONFIGURATOR*/
  /*VRSN = EZ_SAFE_RANGE,*/
/*#else*/
  /*VRSN = SAFE_RANGE,*/
/*#endif*/
  /*RGB_SLD*/
/*};*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [OLD0] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_INSERT,                                      KC_DELETE,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           _______,                                        _______,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    _______,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_ESCAPE,                                      KC_ENTER,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       _______,       
    KC_LCTRL,       KC_LGUI,        KC_LALT,        KC_LBRACKET,    KC_RBRACKET,                                                                                                    KC_MINUS,       KC_EQUAL,       KC_LALT,        KC_LGUI,        KC_RCTRL,


                                                                                                    KC_HOME,        KC_END,         KC_PGUP,        KC_PGDOWN,

                                                                                                                    TO(NOOP_LAYER),      TO(BASE),
                                                                                    KC_SPACE,       KC_LSHIFT,      MO(OLD1),      MO(OLD1),        KC_RSHIFT,      KC_BSPACE
  ),



  [OLD1] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          _______,                                        _______,        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    _______,        _______,        KC_KP_ASTERISK, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,                                     _______,        KC_AUDIO_VOL_UP,KC_MEDIA_PREV_TRACK,KC_UP,          KC_MEDIA_NEXT_TRACK,KC_PSCREEN,     KC_F12,
    _______,        _______,        KC_KP_SLASH,    KC_KP_4,        KC_KP_5,        KC_KP_6,                                                                        KC_AUDIO_VOL_DOWN,KC_LEFT,        KC_DOWN,        KC_RIGHT,       _______,        _______,       
    _______,        _______,        _______,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_MINUS,                                    _______,        KC_AUDIO_MUTE,  _______,        _______,        _______,        _______,        _______,       
    _______,        _______,        _______,        KC_KP_0,        KC_KP_DOT,                                                                                                      _______,        _______,        _______,        _______,        _______,       

                                                                                                    _______,        _______,        _______,        _______,       

                                                                                                                    _______,        _______,       
                                                                                    KC_EQUAL,       _______,        _______,        _______,        _______,        KC_MEDIA_PLAY_PAUSE
  ),


  [BASE] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           XXXXXXX      ,   XXXXXXX,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           XXXXXXX,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           XXXXXXX      ,   XXXXXXX,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G                         ,                   KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    XXXXXXX,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           XXXXXXX      ,   XXXXXXX,        KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       XXXXXXX,       
    KC_LCTRL,       KC_LGUI,        KC_LALT,        KC_LBRACKET,    KC_RBRACKET,                                                                     KC_MINUS,       KC_EQUAL,       KC_LALT,        KC_LGUI,        KC_RCTRL,


                                                                                    KC_HOME,        KC_END       ,    KC_PGUP,        KC_PGDOWN,

                                                                                                    XXXXXXX      ,    TO(OLD0),
                                                                    KC_SPACE,       KC_LSHIFT,      MO(OLD1)     ,   MO(OLD1),        KC_RSHIFT,      KC_BSPACE
  ),

  [NOOP_LAYER] = LAYOUT_ergodox_pretty(
    XXXXXXX,       XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,                                      XXXXXXX,      XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,
    XXXXXXX,         XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,                                        XXXXXXX,        XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,
    XXXXXXX,    XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,                                                                           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,      XXXXXXX,
    XXXXXXX,        XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,                                      XXXXXXX,       XXXXXXX,           XXXXXXX,           XXXXXXX,       XXXXXXX,         XXXXXXX,       XXXXXXX,       
    XXXXXXX,       XXXXXXX,        XXXXXXX,        XXXXXXX,    XXXXXXX,                                                                                                    XXXXXXX,       XXXXXXX,       XXXXXXX,        XXXXXXX,        XXXXXXX,


                                                                                                    XXXXXXX,        XXXXXXX,         XXXXXXX,        XXXXXXX,

                                                                                                                    TO(OLD0),        XXXXXXX,
                                                                                    XXXXXXX,       XXXXXXX,      XXXXXXX,      XXXXXXX,        XXXXXXX,      XXXXXXX
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  /*if (record->event.pressed) {*/
    /*switch (keycode) {*/
      /*case VRSN:*/
        /*SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);*/
        /*return false;*/
      /*#ifdef RGBLIGHT_ENABLE*/
      /*case RGB_SLD:*/
        /*rgblight_mode(1);*/
        /*return false;*/
      /*#endif*/
    /*}*/
  /*}*/
  return true;
}

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = get_highest_layer(state);
  switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
        #endif
        break;
      case 1:
        ergodox_right_led_1_on();
        #ifdef RGBLIGHT_COLOR_LAYER_1
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
        #endif
        break;
      case 2:
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_2
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
        #endif
        break;
      case 3:
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_3
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
        #endif
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_4
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
        #endif
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_5
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
        #endif
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_6
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_7
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
        #endif
        break;
      default:
        break;
    }

  return state;
};
