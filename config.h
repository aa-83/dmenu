/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar              = 0;     /* -b  option; if 0, dmenu appears at bottom */
static int colorprompt	       = 1;     /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static float opacity           = 0.95;  /* -o  option; defines alpha translucency */
static int fuzzy               = 1;     /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int instant             = 1;     /* -n  option; if 1, selects matching item without the need to press enter */
static int center              = 1;     /* -c  option; if 0, dmenu won't be centered on the screen */
static int min_width           = 500;   /* minimum width when centered */
static const char *fonts[]     = {	    /* -fn option overrides fonts[0]; default X11 font or font set */
	  "monospace:size=20",
	  "Noto Color Emoji:pixelsize=16:style=regular:antialias=true:autohint=true"
};
static char *prompt            = NULL;      /* -p  option; prompt to the left of input field */
static const char *dynamic     = NULL;      /* -dy option; dynamic command to run on input change */
static const char *symbol_1    = "<";
static const char *symbol_2    = ">";

static const unsigned int baralpha = 0xd0;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3]      = {
	/*               fg      bg        border     */
	[SchemeNorm] =			{ OPAQUE, baralpha },
	[SchemeSel]  =			{ OPAQUE, baralpha },
	[SchemeOut] =			{ OPAQUE, baralpha },
	[SchemeHp] =			{ OPAQUE, baralpha },
	[SchemeSelHighlight] =	{ OPAQUE, baralpha },
	[SchemeNormHighlight] = { OPAQUE, baralpha },
};

static const char *colors[][2] =
{
	/*							 fg         bg       */
	[SchemeNorm]			= { "#0abdb6", "#091833" },
	[SchemeSel]				= { "#091833", "#ea00d9" },
	[SchemeOut]				= { "#f58700", "#0000b2" },
	[SchemeHp]				= { "#000000", "#ff0000" },
	[SchemeSelHighlight]	= { "#091833", "#0abdb6" },
	[SchemeNormHighlight]	= { "#ea00d9", "#091833" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char startpipe[] = "#";
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 3;

