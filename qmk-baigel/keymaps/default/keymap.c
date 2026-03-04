#include QMK_KEYBOARD_H
#include <ws2812.h>
#include <rgblight.h>

//void ws2812_setleds(rgb_led_t *ledarray, uint16_t number_of_leds)

/*enum custom_keycodes {
    KC_DBL0 = SAFE_RANGE,
};*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  LAYOUT(
    KC_ESC,  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_DELETE,
    KC_GRAVE,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BACKSPACE, KC_HOME,
    KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_BACKSLASH, KC_END,
    KC_CAPS_LOCK,  KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE, KC_ENTER, KC_PAGE_UP,
    KC_LEFT_SHIFT,  KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RIGHT_SHIFT, KC_UP, KC_PAGE_DOWN,
    KC_LEFT_CTRL,  KC_LEFT_ALT, KC_LCMD, KC_SPACE, KC_RCMD, KC_RIGHT_ALT, KC_RIGHT_CTRL, KC_LEFT, KC_DOWN, KC_RIGHT
  ),
};

void keyboard_post_init_user(void) {
	rgblight_sethsv_at(HSV_WHITE, 0); // led 0
	rgblight_sethsv_at(HSV_PURPLE,   1); // led 1
	rgblight_sethsv_at(HSV_GREEN, 2); // led 2 

	/*sethsv(HSV_WHITE, &led[0]); // led 0
	sethsv(HSV_BLUE,   &led[1]); // led 1
	sethsv(HSV_GREEN, &led[2]); // led 2
	rgblight_set(); // Utility functions do not call rgblight_set() automatically, so they need to be called explicitly.
	ws2812_setleds(led, 4);*/
	
}

const uint16_t PROGMEM vol_down[] = {KC_RIGHT_ALT, KC_F5};
const uint16_t PROGMEM vol_up[] = {KC_RIGHT_ALT, KC_F6};


combo_t key_combos[] = {
    COMBO(vol_down, KC_BACKSPACE),
	//COMBO(vol_up, KC_KB_VOLUME_DOWN),
    COMBO(vol_up, KC_A)
};
