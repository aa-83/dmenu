/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar			= 0;      /* -b  option; if 0, dmenu appears at bottom */
static double opacity		= 0.9;    /* -o  option; defines alpha translucency */
static int fuzzy			= 1;      /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int instant			= 0;      /* -n  option; if 1, selects matching item without the need to press enter */
static int center			= 1;      /* -c  option; if 0, dmenu won't be centered on the screen */
static int min_width		= 500;    /* minimum width when centered */
static const char *fonts[] =		  /* -fn option overrides fonts[0]; default X11 font or font set */
	{ "monospace:size=20" };
static const char *prompt	= NULL;   /* -p  option; prompt to the left of input field */

static const unsigned int baralpha = 0xd0;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3]      = {
	/*						  fg      bg         border     */
	[SchemeNorm] =			{ OPAQUE, baralpha },
	[SchemeSel]  =			{ OPAQUE, baralpha },
	[SchemeSelHighlight] =	{ OPAQUE, baralpha },
	[SchemeNormHighlight] = { OPAQUE, baralpha },
	[SchemeOut] =			{ OPAQUE, baralpha },
/*	[SchemeMid] =			{ OPAQUE, baralpha },*/
};

static const char *colors[][2] =
{
	/*							 fg         bg       */
	[SchemeSel]				= { "#091843", "#ea00d9" },
	[SchemeNorm]			= { "#0abdb6", "#091843" },
	[SchemeOut]				= { "#f58700", "#0000b2" },
	[SchemeSelHighlight]	= { "#091843", "#0abdb6" },
	[SchemeNormHighlight]	= { "#ea00d9", "#091843" },
	[SchemeHp]				= { "#000000", "#ff0000" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char startpipe[]		 = "#";
static const char worddelimiters[]	 = " ";

/* Size of the window border */
static unsigned int border_width = 5;

/*
 * Use prefix matching by default; can be inverted with the -x flag.
 */
static int use_prefix = 0;

