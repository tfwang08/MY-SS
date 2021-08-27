/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;	    /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;    /* -c option; centers dmenu on screen */
static int min_width = 700; /* minimum width when centered */
static int fuzzy = 1; /* -F  option; if 0, dmenu doesn't use fuzzy matching  */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"FiraCode Nerd Font Mono:size=15"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#eaeaea", "#171717"},
    [SchemeSel] = {"#eaeaea", "#2f2f2f"},
    [SchemeOut] = {"#242a32", "#70c0ba"},
    [SchemeSelHighlight] = {"#ffc978", "#2f2f2f"},
    [SchemeNormHighlight] = {"#ffc978", "#171717"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
