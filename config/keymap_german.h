#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

#define DE_Y    Z           // Y
#define DE_Z    Y           // Z
#define DE_PLUS EQUAL       // +
#define DE_MINS FSLH        // -

#define DE_SLSH LS(N7)      // /
#define DE_STAR LS(DE_PLUS) // *

#define DE_SS   MINUS       // ß

// Aliases
//#define DE_CIRC KC_GRV  // ^ (dead)
//#define DE_ACUT KC_EQL  // ´ (dead)
//#define DE_UDIA KC_LBRC // Ü
//#define DE_ODIA KC_SCLN // Ö
//#define DE_ADIA KC_QUOT // Ä
//#define DE_HASH KC_NUHS // #
//#define DE_LABK KC_NUBS // <
//#define DE_DEG  S(DE_CIRC) // °
//#define DE_EXLM S(DE_1)    // !
//#define DE_DQUO S(DE_2)    // "
//#define DE_SECT S(DE_3)    // §
//#define DE_DLR  S(DE_4)    // $
//#define DE_PERC S(DE_5)    // %
//#define DE_AMPR S(DE_6)    // &
//#define DE_LPRN S(DE_8)    // (
//#define DE_RPRN S(DE_9)    // )
//#define DE_EQL  S(DE_0)    // =
//#define DE_QUES S(DE_SS)   // ?
//#define DE_GRV  S(DE_ACUT) // ` (dead)
//#define DE_QUOT S(DE_HASH) // '
//#define DE_RABK S(DE_LABK) // >
//#define DE_SCLN S(DE_COMM) // ;
//#define DE_COLN S(DE_DOT)  // :
//#define DE_UNDS S(DE_MINS) // _
//#define DE_SUP2 ALGR(DE_2)    // ²
//#define DE_SUP3 ALGR(DE_3)    // ³
//#define DE_LCBR ALGR(DE_7)    // {
//#define DE_LBRC ALGR(DE_8)    // [
//#define DE_RBRC ALGR(DE_9)    // ]
//#define DE_RCBR ALGR(DE_0)    // }
//#define DE_BSLS ALGR(DE_SS)   // (backslash)
//#define DE_AT   ALGR(DE_Q)    // @
//#define DE_EURO ALGR(DE_E)    // €
//#define DE_TILD ALGR(DE_PLUS) // ~
//#define DE_PIPE ALGR(DE_LABK) // |
//#define DE_MICR ALGR(DE_M)    // µ
