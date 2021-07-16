SRC += neozetare.c

ifeq ($(strip $(KEYMAP_LANG)), french)
    OPT_DEFS += -DKEYMAP_LANG_FRENCH
else ifeq ($(strip $(KEYMAP_LANG)), french_osx)
    OPT_DEFS += -DKEYMAP_LANG_FRENCH_OSX
else ifeq ($(strip $(KEYMAP_LANG)), bepo)
    OPT_DEFS += -DKEYMAP_LANG_BEPO
endif

ifeq ($(strip $(DEBUG_ENABLE)), yes)
    OPT_DEFS += -DCONSOLE_ENABLE
    OPT_DEFS += -DDEBUG_ENABLE
endif

ifeq ($(strip $(SPAMSTRING_ENABLE)), yes)
    OPT_DEFS += -DSPAMSTRING_ENABLE
    SRC += spamstring.c
endif
