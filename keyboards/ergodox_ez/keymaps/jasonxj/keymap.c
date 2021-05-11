#include QMK_KEYBOARD_H
#include "version.h"

#include "./keymap-gen.c"

enum combos {
    CB_ESC,
    CB_BSPACE,
    CB_ENTER,
};
const uint16_t PROGMEM esc_combos[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM bspace_combos[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM enter_combos[] = {KC_K, KC_L, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [CB_ESC] = COMBO(esc_combos, KC_ESC),
    [CB_BSPACE] = COMBO(bspace_combos, KC_BSPACE),
    [CB_ENTER] = COMBO(enter_combos, KC_ENTER),
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
