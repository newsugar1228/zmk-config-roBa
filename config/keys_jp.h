/*
 * Japanese JIS (106/109) key aliases for ZMK
 *
 * Target OS layout:
 *   Windows / macOS configured for a Japanese JIS keyboard
 *
 * Usage:
 *   1. Place this file beside your .keymap file in config/
 *   2. Add this near the top of the .keymap file:
 *        #include "keys_jp.h"
 *   3. Use aliases such as:
 *        &kp JP_AT
 *        &kp JP_COLON
 *        &kp JP_YEN
 *
 * This file maps characters to USB HID key positions interpreted by
 * the operating system's Japanese keyboard layout.
 */

#pragma once

#include <dt-bindings/zmk/keys.h>

/* Number row */
#define JP_EXCLAMATION       LS(N1)             /* ! */
#define JP_EXCL              JP_EXCLAMATION
#define JP_DOUBLE_QUOTES     LS(N2)             /* " */
#define JP_DQT               JP_DOUBLE_QUOTES
#define JP_HASH              LS(N3)             /* # */
#define JP_POUND             JP_HASH
#define JP_DOLLAR            LS(N4)             /* $ */
#define JP_PERCENT           LS(N5)             /* % */
#define JP_AMPERSAND         LS(N6)             /* & */
#define JP_AMPS              JP_AMPERSAND
#define JP_APOSTROPHE        LS(N7)             /* ' */
#define JP_SINGLE_QUOTE      JP_APOSTROPHE
#define JP_LEFT_PARENTHESIS  LS(N8)             /* ( */
#define JP_LPAR              JP_LEFT_PARENTHESIS
#define JP_RIGHT_PARENTHESIS LS(N9)             /* ) */
#define JP_RPAR              JP_RIGHT_PARENTHESIS

/* JIS symbol keys */
#define JP_MINUS             MINUS              /* - */
#define JP_EQUAL             LS(MINUS)          /* = */
#define JP_CARET             EQUAL              /* ^ */
#define JP_TILDE             LS(EQUAL)          /* ~ */

#define JP_AT                LEFT_BRACKET       /* @ */
#define JP_GRAVE             LS(LEFT_BRACKET)   /* ` */

#define JP_LEFT_BRACKET      RIGHT_BRACKET      /* [ */
#define JP_LBKT              JP_LEFT_BRACKET
#define JP_LEFT_BRACE        LS(RIGHT_BRACKET)  /* { */
#define JP_LBRC              JP_LEFT_BRACE

/*
 * On a JIS keyboard, the key immediately to the left of Enter
 * corresponds to HID Keyboard Non-US # and ~.
 */
#define JP_RIGHT_BRACKET     NON_US_HASH        /* ] */
#define JP_RBKT              JP_RIGHT_BRACKET
#define JP_RIGHT_BRACE       LS(NON_US_HASH)    /* } */
#define JP_RBRC              JP_RIGHT_BRACE

#define JP_SEMICOLON         SEMICOLON          /* ; */
#define JP_SEMI              JP_SEMICOLON
#define JP_PLUS              LS(SEMICOLON)      /* + */

#define JP_COLON             SINGLE_QUOTE       /* : */
#define JP_ASTERISK          LS(SINGLE_QUOTE)   /* * */
#define JP_ASTRK             JP_ASTERISK

#define JP_COMMA             COMMA              /* , */
#define JP_LESS_THAN         LS(COMMA)          /* < */
#define JP_LT                JP_LESS_THAN

#define JP_PERIOD            PERIOD             /* . */
#define JP_DOT               JP_PERIOD
#define JP_GREATER_THAN      LS(PERIOD)         /* > */
#define JP_GT                JP_GREATER_THAN

#define JP_SLASH             SLASH              /* / */
#define JP_QUESTION          LS(SLASH)           /* ? */
#define JP_QUESTION_MARK     JP_QUESTION

/* JIS-specific physical keys */
#define JP_BACKSLASH         INT_RO             /* \ (ろ key) */
#define JP_BSLH              JP_BACKSLASH
#define JP_UNDERSCORE        LS(INT_RO)         /* _ */

#define JP_YEN               INT_YEN            /* ¥ / \ depending on OS/font */
#define JP_PIPE              LS(INT_YEN)        /* | */

/* Japanese input keys */
#define JP_KATAKANA_HIRAGANA INT_KANA
#define JP_KANA              INT_KANA
#define JP_HENKAN            INT_HENKAN
#define JP_CONVERT           INT_HENKAN
#define JP_MUHENKAN          INT_MUHENKAN
#define JP_NONCONVERT        INT_MUHENKAN

#define JP_KATAKANA          LANG_KATAKANA
#define JP_HIRAGANA          LANG_HIRAGANA
#define JP_ZENKAKU_HANKAKU   LANG_ZENKAKUHANKAKU
#define JP_ZKHK              JP_ZENKAKU_HANKAKU
