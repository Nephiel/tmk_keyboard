#include "keymap_common.h"
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* 0: Default layer
     * ,-----------------------------------------------------------.
     * |f11| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | ' | ¡ | Backsp|
     * |-----------------------------------------------------------|
     * | Tab | q | w | e | r | t | y | u | i | o | p | ` | + |Enter|
     * |------------------------------------------------------.    |
     * | fn10 | a | s | d | f | g | h | j | k | l | ñ | ' | ç |    |
     * |--------------------------O--------------------------------|
     * |fn4 |fn3| z | x | c | v | b | n | m | , | . | - |   fn5    |
     * |-----------------------------------------------------------|
     * |fn6 |LGui|fn8 |m1 |Space|m3 | fn0 | m2 |fn9 |RGui|Menu|fn7 |
     * `--------------'   '-----'   '-----'    '-------------------'
     * fn0: hold for Function layer
     * fn3: tap for '<' (NUBS), hold for RAlt
     * fn4, fn5: Custom Functions for LShift and RShift (parenthesis)
     * fn6, fn7: Custom Functions for LCtrl and RCtrl (brackets)
     * fn8, fn9: Custom Functions for LAlt and RAlt (curly brackets)
     * fn10: tap for CapsLock, hold for RCtrl
     * fn11: Esc <-------------------------------(most used)
     *       with RAlt: GRAVE ('\') (RAlt+GRV)       ...
     *       with fn0:  GRAVE ('º','ª') (GRV)        ...
     *       with fn0+RAlt: 'RAlt+Esc' <---------(least used)
     */
    KEYMAP(
        FN11,1   ,2   ,3   ,4   ,5   ,6   ,7   ,8   ,9   ,0   ,MINS,EQL ,BSPC, \
        TAB ,Q   ,W   ,E   ,R   ,T   ,Y   ,U   ,I   ,O   ,P   ,LBRC,RBRC,ENT , \
        FN10,A   ,S   ,D   ,F   ,G   ,H   ,J   ,K   ,L   ,SCLN,QUOT,NUHS,      \
        FN4 ,FN3 ,Z   ,X   ,C   ,V   ,B   ,N   ,M   ,COMM,DOT ,SLSH,FN5 ,      \
        FN6 ,LGUI,FN8 ,SPC ,FN0 ,FN9 ,RGUI,APP ,FN7                            ),

    /* 1: Normal mods layer
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |------------------------------------------------------.    |
     * |CapsLk|   |   |   |   |   |   |   |   |   |   |   |   |    |
     * |--------------------------O--------------------------------|
     * |LSft| < |   |   |   |   |   |   |   |   |   |   |  RShift  |
     * |-----------------------------------------------------------|
     * |LCtl|    |LAlt|   |     |   |     |    |RAlt|    |    |RCtl|
     * `--------------'   '-----'   '-----'    '-------------------'
     */
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
        LSFT,NUBS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RSFT,      \
        LCTL,TRNS,LALT,TRNS,TRNS,RALT,TRNS,TRNS,RCTL                           ),

    /* 2: Numpad layer
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |Np7|Np8|Np9|   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |Np4|Np5|Np6|   |   |   |Enter|
     * |------------------------------------------------------. Np |
     * |NumLck|   |   |   |   |   |   |Np1|Np2|Np3|   |   |Np/|    |
     * |--------------------------O--------------------------------|
     * |    |   |   |   |   |   |   |Np0|Np0|   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |   |     |   |     |    |    |    |    |    |
     * `--------------'   '-----'   '-----'    '-------------------'
     */
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,P7  ,P8  ,P9  ,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,P4  ,P5  ,P6  ,TRNS,TRNS,TRNS,PENT, \
        NLCK,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,P1  ,P2  ,P3  ,TRNS,TRNS,PSLS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,P0  ,P0  ,TRNS,TRNS,TRNS,TRNS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS                           ),

    /* 3: Function and Media layer
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |
     * |-----------------------------------------------------------|
     * |     |Mut|Vl-|Vl+|F20|   |   |PUp|Up |PDn|Prt|SLk|Ins|     |
     * |------------------------------------------------------.    |
     * |      |   |Prv|Stp|Ply|Nxt|Hom|Lft|Dwn|Rgt|End|   |Pau|    |
     * |--------------------------O--------------------------------|
     * |    |   |   |   |   |   |   |fn2|PDn|   |   |Del|          |
     * |-----------------------------------------------------------|
     * |    |    |    |   |     |   |     |    |    |    |fn1 |    |
     * `--------------'   '-----'   '-----'    '-------------------'
     * fn1: toggle Normal Mods layer
     * fn2: toggle Numpad layer
     */
    KEYMAP(
        TRNS,F1  ,F2  ,F3  ,F4  ,F5  ,F6  ,F7  ,F8  ,F9  ,F10 ,F11 ,F12 ,TRNS, \
        TRNS,MUTE,VOLD,VOLU,F20 ,TRNS,TRNS,PGUP,UP  ,PGDN,PSCR,SLCK,INS ,TRNS, \
        TRNS,TRNS,MPRV,MSTP,MPLY,MNXT,HOME,LEFT,DOWN,RGHT,END ,TRNS,PAUS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN2 ,PGDN,TRNS,TRNS,DEL ,TRNS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN1 ,TRNS                           ),
};

const uint8_t FUNCTION_LAYER_NUMBER = 3;

/*
 * Macro identifiers
 */
/*
enum macro_id {
    HELLO,
    FOUR_SPACES,
    ALT_TAB,
};
*/

/*
 * Macro definitions
 */
/*
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case HELLO:
            return (record->event.pressed ?
                    MACRO( I(0), T(H), T(E), T(L), T(L), W(255), T(O), END ) :
                    MACRO_NONE );
        case FOUR_SPACES:
            return (record->event.pressed ?
                    MACRO( T(SPC), T(SPC), T(SPC), T(SPC), END ) :
                    MACRO_NONE );
        case ALT_TAB:
            return (record->event.pressed ?
                    MACRO( D(LALT), D(TAB), END ) :
                    MACRO( U(TAB), END ));
    }
    return MACRO_NONE;
}
*/

/*
 * Function identifiers
 */
enum function_id {
    CUSTOM_LSFT,
    CUSTOM_RSFT,
    CUSTOM_LCTL,
    CUSTOM_RCTL,
    CUSTOM_LALT,
    CUSTOM_RALT,
    CUSTOM_ESC,
};

/*
 * Custom function. Works like ACTION_MODS_TAP_KEY, but applies a second modifier to the tap key.
 * Sends "mod_held" when the key is held, "mod_tap"+"key_tap" when the key is tapped
 */
void action_mods_tap_mod_key(keyrecord_t *record, uint8_t mod_held, uint8_t mod_tap, uint8_t key_tap)
{
    if (record->event.pressed) {
        if (record->tap.count > 0) {
            if (record->tap.interrupted) {
                // TODO: cancel tap on mouse button press as well
                record->tap.count = 0;  // ad hoc: cancel tap
                register_mods(MOD_BIT(mod_held));
            } else {
                add_weak_mods(MOD_BIT(mod_tap));
                send_keyboard_report();
                register_code(key_tap);
            }
        } else {
            register_mods(MOD_BIT(mod_held));
        }
    } else {
        if (record->tap.count > 0) {
            unregister_code(key_tap);
            del_weak_mods(MOD_BIT(mod_tap));
            send_keyboard_report();
        } else {
            unregister_mods(MOD_BIT(mod_held));
        }
    }
}


/*
 * Function definitions
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    void (*custom_esc_method)(uint8_t) = (record->event.pressed) ? &add_key : &del_key;
    uint8_t ralted = get_mods() & (MOD_BIT(KC_RALT) | MOD_BIT(KC_RALT));
    switch (id) {
        case CUSTOM_LSFT:
            action_mods_tap_mod_key(record, KC_LSFT, // Mod to send when held
                                            KC_RSFT, KC_8); // Mod+Key to send when tapped
            break;
        case CUSTOM_RSFT:
            action_mods_tap_mod_key(record, KC_RSFT, // Mod to send when held
                                            KC_LSFT, KC_9); // Mod+Key to send when tapped
            break;
        case CUSTOM_LCTL:
            action_mods_tap_mod_key(record, KC_LCTL, // Mod to send when held
                                            KC_RALT, KC_LBRC); // Mod+Key to send when tapped
            break;
        case CUSTOM_RCTL:
            action_mods_tap_mod_key(record, KC_RCTL, // Mod to send when held
                                            KC_RALT, KC_RBRC); // Mod+Key to send when tapped
            break;
        case CUSTOM_LALT:
            action_mods_tap_mod_key(record, KC_LALT, // Mod to send when held
                                            KC_RALT, KC_QUOT); // Mod+Key to send when tapped
            break;
        case CUSTOM_RALT:
            action_mods_tap_mod_key(record, KC_RALT, // Mod to send when held
                                            KC_RALT, KC_NUHS); // Mod+Key to send when tapped
            break;
        case CUSTOM_ESC:
            // This makes it easier to type a backslash (simply RAlt+Esc).
            // If you actually need to send RAlt+Esc, use Fn0+RAlt+Esc.
	    if (layer_state & (1<<FUNCTION_LAYER_NUMBER)) {
                // Function layer is active, send Esc if RAlt is down
                custom_esc_method(ralted ? KC_ESCAPE : KC_GRAVE);
            } else {
                // Function layer is inactive, send a backslash if RAlt is down
                custom_esc_method(ralted ? KC_GRAVE : KC_ESCAPE);
            }
            send_keyboard_report();
            break;
        default:
            break;
    }
}

/*
 * Function key actions
 */
const action_t PROGMEM fn_actions[] = {
//  [0] = ACTION_LAYER_MOMENTARY(3),  // Hold for Function layer
    [0] = ACTION_LAYER_TAP_TOGGLE(3), // Hold for Function layer, tap 5 times to toggle
    [1] = ACTION_LAYER_TOGGLE(1), // Toggle Normal Mods layer
    [2] = ACTION_LAYER_TOGGLE(2), // Toggle Numpad layer
    [3] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_NUBS), // Tap for '<', hold for RAlt
    [4] = ACTION_FUNCTION_TAP(CUSTOM_LSFT),  // Tap for '(', hold for LShift
    [5] = ACTION_FUNCTION_TAP(CUSTOM_RSFT),  // Tap for ')', hold for RShift
    [6] = ACTION_FUNCTION_TAP(CUSTOM_LCTL),  // Tap for '[', hold for LCtrl
    [7] = ACTION_FUNCTION_TAP(CUSTOM_RCTL),  // Tap for ']', hold for RCtrl
    [8] = ACTION_FUNCTION_TAP(CUSTOM_LALT),  // Tap for '{', hold for LAlt
    [9] = ACTION_FUNCTION_TAP(CUSTOM_RALT),  // Tap for '}', hold for RAlt
   [10] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_CAPS), // Tap for CapsLock, hold for LCtrl
   [11] = ACTION_FUNCTION(CUSTOM_ESC), // RAlt+Esc for '\', fn0+Esc for 'º', fn0+Ralt+Esc for 'Ralt+Esc'
   //[11] = ACTION_MODS_KEY(MOD_LCTL, KC_A),   // fn+X as Ctrl+A (Select All)
   //[12] = ACTION_MODS_KEY(MOD_LCTL, KC_Z),   // fn+X as Ctrl+Z (Undo)
   //[13] = ACTION_MODS_KEY(MOD_LCTL, KC_X),   // fn+X as Ctrl+X (Cut)
   //[14] = ACTION_MODS_KEY(MOD_LCTL, KC_C),   // fn+X as Ctrl+C (Copy)
   //[15] = ACTION_MODS_KEY(MOD_LCTL, KC_V),   // fn+X as Ctrl+V (Paste)
   // [x] = ACTION_MACRO(FOUR_SPACES), // Send 4 spaces
};
