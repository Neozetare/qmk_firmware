#pragma once

#include "quantum.h"

#if defined(KEYMAP_LANG_FRENCH)
#   include "keymap_french.h"
#   define LK_M FR_M

#elif defined(KEYMAP_LANG_FRENCH_OSX)
#   include "keymap_french_osx.h"
#   define LK_M FR_M

#elif defined(KEYMAP_LANG_BEPO)
#   include "keymap_bepo.h"
#   define LK_M BP_M

#else
#   define LK_M KC_M

#endif
