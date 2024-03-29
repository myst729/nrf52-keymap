#pragma once

#include <stdint.h>
#include "keymap.h"
#include "config.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

#define KEYMAP( \
  K00,   K01,          K03,   K04,   K05, \
  K10,   K11,   K12,   K13,   K14,   K15, \
  K20,   K21,   K22,   K23,   K24,   K25, \
  K30,          K32,   K33,   K34,   K35, \
  K40,          K42,   K43,          K45  \
) { \
  { K00,   K01,   KC_NO, K03,   K04,   K05 }, \
  { K10,   K11,   K12,   K13,   K14,   K15 }, \
  { K20,   K21,   K22,   K23,   K24,   K25 }, \
  { K30,   KC_NO, K32,   K33,   K34,   K35 }, \
  { K40,   KC_NO, K42,   K43,   KC_NO, K45 }  \
}
