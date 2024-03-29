#include "keymap_common.h"
#include "keyboard_fn.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP(
    KC_WH_D, KC_WH_U,          KC_FN0,  KC_HOME, KC_END,
    KC_E,    KC_R,    KC_T,    KC_U,    KC_I,    KC_P,
    KC_D,    KC_G,    KC_J,    KC_B,    KC_ESC,  KC_ENT,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,
    KC_LCTL,          KC_LALT, KC_SPC,           KC_M),

  KEYMAP(
    KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,
    KC_FN1,  KC_FN2,  KC_FN3,  KC_FN4,  KC_FN5,  KC_FN6,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_FN8,           KC_TRNS, KC_TRNS,          KC_FN7)
};

const action_t fn_actions[] = {
  ACTION_LAYER_MOMENTARY(1),
  ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_USB),
  ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_0),
  ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_1),
  ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_2),
  ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_REBOND),
  ACTION_FUNCTION_OPT(KEYBOARD_CONTROL, CONTROL_BATTERY_PERCENTAGE),
  ACTION_FUNCTION_OPT(KEYBOARD_CONTROL, CONTROL_SLEEP),
  ACTION_FUNCTION_OPT(KEYBOARD_CONTROL, CONTROL_BOOTLOADER),
};
