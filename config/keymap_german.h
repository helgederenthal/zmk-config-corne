#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

#define DE_Y    Z           // Y
#define DE_Z    Y           // Z
#define DE_PLUS RBKT        // +
#define DE_MINS FSLH        // -

#define DE_FSLH LS(N7)      // /
#define DE_STAR LS(RBKT)    // *

#define DE_AT   RA(Q)       // @
#define DE_Ae   APOS        // Ä
#define DE_SS   MINUS       // ß
#define DE_LBKT RA(N8)      // [
#define DE_RBKT RA(N9)      // ]
#define DE_LBRC RA(N7)      // {
#define DE_RBRC RA(N0)      // }
#define DE_LT   NUBS        // <
#define DE_GT   LS(NUBS)    // >
#define DE_LPAR LS(N8)      // (
#define DE_RPAR LS(N9)      // )
#define DE_EURO RA(E)       // €
#define DE_DLLR LS(N4)      // $
#define DE_AMPS LS(N6)      // &
#define DE_PRCT LS(N5)      // %

#define DE_HASH NUHS        // #
#define DE_TILD RA(RBKT)    // ~
#define DE_EQL  LS(N0)      // =
#define DE_GRV  LS(EQUAL)   // `
#define DE_ACUT EQUAL       // ´
#define DE_DQT  LS(N2)      // "
#define DE_SQT  LS(NUHS)    // '
#define DE_Ue   LBKT        // Ü
#define DE_EXLM LS(N1)      // !
#define DE_QUES LS(MINUS)   // ?
#define DE_BSLH RA(MINUS)   // Backslash
#define DE_PIPE RA(NUBS)    // |
#define DE_CIRC GRAVE       // ^
#define DE_Oe   SEMI        // Ö
#define DE_SECT LS(N3)      // §

