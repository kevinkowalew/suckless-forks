//    _                                                    
//   / \   _ __  _ __   ___  __ _ _ __ __ _ _ __   ___ ___ 
//  / _ \ | '_ \| '_ \ / _ \/ _` | '__/ _` | '_ \ / __/ _ \
// / ___ \| |_) | |_) |  __/ (_| | | | (_| | | | | (_|  __/
///_/   \_\ .__/| .__/ \___|\__,_|_|  \__,_|_| |_|\___\___|
//        |_|   |_|                                        
//
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int border_width = 5;
static unsigned int lineheight = 100;         /* -h option; minimum height of a menu line     */

static const char *fonts[] = {
	"hasklig:size=15", "fontawesome:20"
};
static const char *prompt      = "";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
