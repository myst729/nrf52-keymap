#pragma once

#include <stdint.h>
#include "keymap.h"
#include "config.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

#define KEYMAP( \
  K0100, K0101, K0102, K0103, K0104, K0105, K0106, K0107, K0108, K0109, K010A, K010B, K010C, K010D,        K010F, \
  K0200,        K0202, K0203, K0204, K0205, K0206, K0207, K0208, K0209, K020A, K020B, K020C, K020D, K020E, K020F, \
  K0300,        K0302, K0303, K0304, K0305, K0306, K0307, K0308, K0309, K030A, K030B,        K030D, K030E, K030F, \
  K0400,        K0402, K0403, K0404, K0405, K0406, K0407, K0408, K0409, K040A, K040B,        K040D, K040E, K040F, \
  K0500,        K0502, K0503,               K0506,                      K050A, K050B, K050C, K050D, K050E, K050F  \
) { \
  { K0100, K0101, K0102, K0103, K0104, K0105, K0106, K0107, K0108, K0109, K010A, K010B, K010C, K010D, KC_NO, K010F }, \
  { K0200, KC_NO, K0202, K0203, K0204, K0205, K0206, K0207, K0208, K0209, K020A, K020B, K020C, K020D, K020E, K020F }, \
  { K0300, KC_NO, K0302, K0303, K0304, K0305, K0306, K0307, K0308, K0309, K030A, K030B, KC_NO, K030D, K030E, K030F }, \
  { K0400, KC_NO, K0402, K0403, K0404, K0405, K0406, K0407, K0408, K0409, K040A, K040B, KC_NO, K040D, K040E, K040F }, \
  { K0500, KC_NO, K0502, K0503, KC_NO, KC_NO, K0506, KC_NO, KC_NO, KC_NO, K050A, K050B, K050C, K050D, K050E, K050F }  \
}
