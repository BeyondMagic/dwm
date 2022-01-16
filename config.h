/****************************************************************************************
 * Basic Constants
 * Basic settings
 ****************************************************************************************/



/****************************************************************************************
 * Appearance
 * Basic settings
 ****************************************************************************************/



static const char *menuscript[]			= { "/home/iris/Git/Projects/creamberry/path/desktop_root_click", NULL }; // script to open menu
static const unsigned int borderpx  = 2;    // border pixel of windows
static const unsigned int snap      = 3;    // snap pixel
static const int extrabarright      = 0;    // 1 means extra bar text on right */
static const char statussep         = ';';  // separator between status bars */
static const int showbar            = 1;    // 0 means no lemonbar space
static const int focusonwheel       = 1;    // focus on click or sloppy
static const unsigned int gappih    = 20;    // horiz inner gap between windows
static const unsigned int gappiv    = 20;    // vert inner gap between windows
static const unsigned int gappoh    = 15;    // horiz outer gap between windows and screen edge
static const unsigned int gappov    = 15;    // vert outer gap between windows and screen edge
static       int smartgaps          = 0;     // 1 means no outer gap when there is only one window
static const char slopspawnstyle[]  = "-t 0 -c 0.92,0.85,0.69,0.3 -o"; // do NOT define -f (format) here
static const char slopresizestyle[] = "-t 0 -c 0.92,0.85,0.69,0.3"; // do NOT define -f (format) here
static const char preview_title_win[] = "preview_dwm";
static const int riodraw_borders    = 0;        // 0 or 1, indicates whether the area drawn using slop includes the window borders
static const int riodraw_matchpid   = 1;        // 0 or 1, indicates whether to match the PID of the client that was spawned with riospawn
static const int riodraw_spawnasync = 0;        // 0 means that the application is only spawned after a successful selection while
                                                // 1 means that the application is being initialised in the background while the selection is made



/****************************************************************************************
 * Default layouts for certain tags
 ****************************************************************************************/


static const MonitorRule monrules[] = {

  /*mon  tag  layout  mfact  nmaster  showbar  topbar */
//	{  -1,   1,  1,      -1,    -1,      -1,      -1     }, // use a different layout
//	{  -1,   2,  2,      -1,    -1,      -1,      -1     }, // use a different layout
	{  -1,   3,  3,      -1,    -1,      -1,      -1     }, // use a different layout
	{  -1,   4,  4,      -1,    -1,      -1,      -1     }, // use a different layout
//	{  -1,   5,  5,      -1,    -1,      -1,      -1     }, // use a different layout
	{  -1,   6,  6,      -1,    -1,      -1,      -1     }, // use a different layout
	{  -1,   7,  7,      -1,    -1,      -1,      -1     }, // use a different layout
	{  -1,   8,  8,      -1,    -1,      -1,      -1     }, // use a different layout

	{  -1,  -1,  0,      -1,    -1,      -1,      -1     }, // default

};


/****************************************************************************************
 * External Bar
 ****************************************************************************************/


static const int topbar             = 1;          // 0 means bottom bar
static const char *altbarclass      = "Bar";      // Alternate bar class name (Bar is for lemonbar)


/****************************************************************************************
 * Colours to use
 *  Since I'm not using any bar, just let it have a simple font
 ****************************************************************************************/


static const char col_dump[]            = "#222222";

static const char col_flo_sel[]         = "#333333"; // Selected Floating Windows
static const char col_flo_non[]         = "#ffffff"; // Floating Windows

static const char col_til_sel[]         = "#ffffff"; // Selected Floating Windows
static const char col_til_non[]         = "#333333"; // Floating Windows

static const char *colors[][4]      = {

  /*             fg          bg        border      */
	[SchemeNorm] = { col_dump, col_dump, col_flo_sel, col_til_non },
	[SchemeSel] =  { col_dump, col_dump, col_til_sel, col_flo_non },

};

/****************************************************************************************
 * Fonts to load at DWM
 *  Since I'm not using any bar, just let it have a simple font
 *  TODO: Find a way to disable such things
 ****************************************************************************************/


static const char *fonts[]          = { "monospace:size=10" };
//static const char dmenufont[]       = "monospace:size=10";




/****************************************************************************************
 * Tags Names
 *  I'm not using it to load in the bar (Lemonbar), so changing this won't make any much difference than loading them in
 *  dwm-msg to get name
 ****************************************************************************************/


static const char *tags[]           = { "1",  "2",  "3",  "4",  "5",  "6",  "7",  "8",  "9"  };
//static const char *defaulttagapps[] = { "st", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
#define NUMTAGS 9


/****************************************************************************************
 * Tag Rules
 *  Open certain windows with certain titles or classes at certain tags with certain configs
 ****************************************************************************************/


static const Rule rules[] = {
  /* xprop(1):
   *  WM_CLASS(STRING) = instance, class
   *  WM_NAME(STRING) = title
   */

  // class
  { "mpv",NULL,NULL,
    // tags mask
    4,
    // isfloating
    0,
    // isfreesize
    0,
    // monitor
    -1 , 
    // unmanaged
    0 },

  // class
  { "Dunst",NULL,NULL,
    // tags mask
    0,
    // isfloating
    1,
    // isfreesize
    0,
    // monitor
    -1 , 
    // unmanaged
    0 },

  // class
  { "Navigator",NULL,NULL,
    // tags mask
    1,
    // isfloating
    0,
    // isfreesize
    0,
    // monitor
    -1 , 
    // unmanaged
    0 },

  // class
  { "Gimp",NULL,NULL,
    // tags mask
    128,
    // isfloating
    0,
    // isfreesize
    0,
    // monitor
    -1, 
    // unmanaged
    0 },

  // class
  { "Visualboyadvance-m",NULL,NULL,
    // tags mask
    32,
    // isfloating
    1,
    // isfreesize
    0,
    // monitor
    -1,
    // unmanaged
    0 },

  // title
  { NULL, NULL, "things_of_life",
    // tags mask
    32,
    // isfloating
    1,
    // isfreesize
    1,
    // monitor
    -1,
    // unmanaged
    0 },

  // class
  { "Xsnow",NULL,NULL,
    // tags mask
    0,
    // isfloating
    0,
    // isfreesize
    0,
    // monitor
    -1,
    // unmanaged
    2 },

  // class
  { "GLava",NULL,NULL,
    // tags mask
    0,
    // isfloating
    0,
    // isfreesize
    0,
    // monitor
    -1,
    // unmanaged
    2 },

  // class
  { "qBittorrent",NULL,NULL,
    // tags mask
    64,
    // isfloating
    0,
    // isfreesize
    0,
    // monitor
    -1,
    // unmanaged
    0 },

  // title
  { NULL,NULL,"floatst",
    // tags mask
    0,
    // isfloating
    1,
    // isfreesize
    0,
    // monitor
    -1,
    // unmanaged
    0 },

  // Class
  { "St",NULL,NULL,
    // tags mask
    0,
    // isfloating
    0,
    // isfreesize
    1,
    // monitor
    -1,
    // unmanaged
    0 },

  // class
  { "Pavucontrol",NULL,NULL,
    // tags mask
    0,
    // isfloating
    1,
    // isfreesize
    0,
    // monitor
    -1  , 
    // unmanaged
    0 },

  // Title
  { NULL,NULL,"freesizedwm",
    // tags mask
    0,
    // isfloating
    1,
    // isfreesize
    1,
    // monitor
    -1  , 
    // unmanaged
    0 },

  // Title
  { NULL,NULL,"preview_dwm",
    // tags mask
    0,
    // isfloating
    1,
    // isfreesize
    1,
    // monitor
    -1  , 
    // unmanaged
    0 },

  // Title
  { NULL,NULL,"XBindKey: Hit a key",
    // tags mask
    0,
    // isfloating
    1,
    // isfreesize
    0,
    // monitor
    -1  , 
    // unmanaged
    0 },

  // class
  { "TelegramDesktop",NULL,NULL,
    // tags mask
    256,
    // isfloating
    0,
    // isfreesize
    0,
    // monitor
    -1  , 
    // unmanaged
    0 },

};

/****************************************************************************************
 * Layout Settings
 ****************************************************************************************/


static const float mfact     = 0.55; // factor of master area size [0.05..0.95]
static const int nmaster     = 1;    // number of clients in master area
static const int resizehints = 1;    // 1 means respect size hints in tiled resizals


/****************************************************************************************
 * Layout(s)
 ****************************************************************************************/

#define FORCE_VSPLIT 1  // nrowgrid layout: force two clients to always split vertically

#include "./vanitygaps/vanitygaps.c"

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile    }, // first entry is default
	{ "><>",      NULL    }, // no layout function means floating behavior
	{ "[M]",      monocle },
	{ "[@]",      spiral },
	{ "[\\]",     dwindle },
	{ "H[]",      deck },
	{ "TTT",      bstack },
	{ "===",      bstackhoriz },
	{ "HHH",      grid },
	{ "###",      nrowgrid },
	{ "---",      horizgrid },
	{ ":::",      gaplessgrid },
	{ "|M|",      centeredmaster },
	{ ">M>",      centeredfloatingmaster },
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ NULL,       NULL },
};


/****************************************************************************************
 * Key Super DWM
 ****************************************************************************************/


//#define FORCE_VSPLIT 1         // nrowgrid layout: force two clients to always split vertically

/* key definitions */
#define MODKEY Mod4Mask

#define AltMask Mod1Mask

#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

// Cycle through windows and set keybinds to change through tags
#define STACKKEYS(MOD,ACTION) \
	{ MOD,  XK_v,   ACTION##stack,  {.i = 0 } },
/*	{ MOD,	XK_j,	ACTION##stack,	{.i = INC(+1) } }, \
	{ MOD,	XK_k,	ACTION##stack,	{.i = INC(-1) } }, \*/

	/* { MOD, XK_grave, ACTION##stack, {.i = PREVSEL } }, \ */
	/* { MOD, XK_a,     ACTION##stack, {.i = 1 } }, \ */
	/* { MOD, XK_z,     ACTION##stack, {.i = 2 } }, \ */
	/* { MOD, XK_x,     ACTION##stack, {.i = -1 } }, */

/****************************************************************************************
 * Helper for spawning shell commands in the pre dwm-5.0 fashion
 ****************************************************************************************/


#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }
//static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
//static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_cyan, "-sf", col_gray4, NULL };
static const char *termcmd[]  = { "st", NULL };



/****************************************************************************************
 * Commands
 ****************************************************************************************/




static Key keys[] = {
	/* modifier                     key        function        argument */
	STACKKEYS(MODKEY,                     focus)
	STACKKEYS(MODKEY|ShiftMask,           push)
	  TAGKEYS(			              XK_1,		0)
	  TAGKEYS(			              XK_2,		1)
	  TAGKEYS(			              XK_3,		2)
	  TAGKEYS(			              XK_4,		3)
	  TAGKEYS(			              XK_5,		4)
	  TAGKEYS(			              XK_6,	  5)
	  TAGKEYS(			              XK_7,		6)
	  TAGKEYS(			              XK_8,		7)
	  TAGKEYS(			              XK_9,		8)
	  TAGKEYS(			              XK_m,		7)


//	{ MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
//	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
//	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_o,      incnmaster,     {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_o,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.01} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.01} },
	{ MODKEY,                       XK_space,  zoom,           {0} },
	{ MODKEY,                    XK_backslash, view,           {0} },
	{ MODKEY,                       XK_q,      killclient,     {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY,												XK_Tab,		view,		{0} },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_Left,   focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_Right,  focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_Left,   tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_Right,  tagmon,         {.i = +1 } },
/*	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)*/

	{ MODKEY|ShiftMask,             XK_q,      quit,           {0} },


   /****************************************************************************************
   * Windows
    ****************************************************************************************/

	{ MODKEY|ShiftMask,             XK_x,      killunsel,      {0} },
	{ MODKEY|ShiftMask,           XK_j,      pushdown,   {0} },
	{ MODKEY|ShiftMask,           XK_k,      pushup,     {0} },
  { MODKEY,                     XK_n,     switchcol,   {0} },
//	{ MODKEY,             XK_j,      movestack,      {.i = +1 } },
//	{ MODKEY,             XK_k,      movestack,      {.i = -1 } },

	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },

   /****************************************************************************************
   * Layout  
   *****************************************************************************************/


	{ ShiftMask|ControlMask, XK_space,  togglefloating, {0} },
  { MODKEY,			        XK_t,		   setlayout,	     {.v = &layouts[0]} },   // tile                   : Super     +     t 
  { MODKEY|ShiftMask,		XK_t,		   setlayout,	     {.v = &layouts[1]} },   // bstack                 : Super + Shift + T
  { MODKEY,			        XK_y,		   setlayout,	     {.v = &layouts[2]} },   // spiral                 : Super     +     y
  { MODKEY|ShiftMask,		XK_y,	     setlayout,	     {.v = &layouts[3]} },   // dwindle                : Super + Shift + Y
  { MODKEY,			        XK_u,		   setlayout,	     {.v = &layouts[4]} },   // deck                   : Super     +     u
  { MODKEY|ShiftMask,		XK_u,		   setlayout,	     {.v = &layouts[5]} },   // monocle                : Super + Shift + U
  { MODKEY,		        	XK_i,		   setlayout,	     {.v = &layouts[6]} },   // centeredmaster         : Super     +     I
  { MODKEY|ShiftMask,		XK_i,		   setlayout,	     {.v = &layouts[7]} },   // centeredfloatingmaster : Super + Shift + i
	{ MODKEY|ControlMask, XK_period, cyclelayout,    {.i = +1 } },

   /****************************************************************************************
   * Patches
   *   actualfullcreen
   *   sticky
   ****************************************************************************************/


	{ MODKEY,                       XK_f,      togglefullscr,     {0} }, // dwm-actualfullscreen
	{ MODKEY,                       XK_s,      togglesticky,   {0} },
//	{ MODKEY,                       XK_m,      swapfocus,      {0} },


  /****************************************************************************************
   * vanitygaps
   ****************************************************************************************/



//	{ MODKEY,			                  XK_a,	     togglegaps,	   {0} },
//	{ MODKEY|ShiftMask,		          XK_a,		   defaultgaps,	   {0} },
	{ MODKEY,                 			XK_v,		   incrgaps,	     {.i = +3 } },
	{ MODKEY,			                  XK_z,		   incrgaps,	     {.i = -3 } },
/*	{ MODKEY|Mod4Mask,            XK_u,      incrgaps,       {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_u,      incrgaps,       {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_i,      incrigaps,      {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_i,      incrigaps,      {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_o,      incrogaps,      {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_o,      incrogaps,      {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_6,      incrihgaps,     {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_6,      incrihgaps,     {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_7,      incrivgaps,     {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_7,      incrivgaps,     {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_8,      incrohgaps,     {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_8,      incrohgaps,     {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_9,      incrovgaps,     {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_9,      incrovgaps,     {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_0,      togglegaps,     {0} },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_0,      defaultgaps,    {0} },*/


   /****************************************************************************************
   *   moveresize
   ****************************************************************************************/


	{ MODKEY,                       XK_Down,   moveresize,     {.v = "0x 5y 0w 0h" } },
	{ MODKEY,                       XK_Up,     moveresize,     {.v = "0x -5y 0w 0h" } },
	{ MODKEY,                       XK_Right,  moveresize,     {.v = "5x 0y 0w 0h" } },
	{ MODKEY,                       XK_Left,   moveresize,     {.v = "-5x 0y 0w 0h" } },
	{ MODKEY|ShiftMask,             XK_Down,   moveresize,     {.v = "0x 0y 0w 5h" } },
	{ MODKEY|ShiftMask,             XK_Up,     moveresize,     {.v = "0x 0y 0w -5h" } },
	{ MODKEY|ShiftMask,             XK_Right,  moveresize,     {.v = "0x 0y 5w 0h" } },
	{ MODKEY|ShiftMask,             XK_Left,   moveresize,     {.v = "0x 0y -5w 0h" } },
/*	{ MODKEY|ControlMask,           XK_Up,     moveresizeedge, {.v = "t"} },
	{ MODKEY|ControlMask,           XK_Down,   moveresizeedge, {.v = "b"} },
	{ MODKEY|ControlMask,           XK_Left,   moveresizeedge, {.v = "l"} },
	{ MODKEY|ControlMask,           XK_Right,  moveresizeedge, {.v = "r"} },
	{ MODKEY|ControlMask|ShiftMask, XK_Up,     moveresizeedge, {.v = "T"} },
  { MODKEY|ControlMask|ShiftMask, XK_Down,   moveresizeedge, {.v = "B"} },
	{ MODKEY|ControlMask|ShiftMask, XK_Left,   moveresizeedge, {.v = "L"} },
	{ MODKEY|ControlMask|ShiftMask, XK_Right,  moveresizeedge, {.v = "R"} },*/

  /****************************************************************************************
   * Create Window by resizing
   ***************************************************************************************/

	{ MODKEY,                  XK_apostrophe,     riospawn,       {.v = termcmd } },
//	{ ControlMask,                  XK_BackSpace,      rioresize,      {0} },

  /****************************************************************************************
   * Commands to be spawned by subshells
   ****************************************************************************************/

};


/****************************************************************************************
* Button definitions
*  click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin   
****************************************************************************************/


static Button buttons[] = {
	/* click                event mask      button          function        argument */
	/* placemouse options, choose which feels more natural:
	 *    0 - tiled position is relative to mouse cursor
	 *    1 - tiled postiion is relative to window center
	 *    2 - mouse pointer warps to window center
	 *
	 * The moveorplace uses movemouse or placemouse depending on the floating state
	 * of the selected client. Set up individual keybindings for the two if you want
	 * to control these separately (i.e. to retain the feature to move a tiled window
	 * into a floating position).
	 */
	{ ClkClientWin,         MODKEY,         Button1,        moveorplace,    {.i = 1} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkRootWin,						0,							Button3,			  spawn,   {.v = menuscript } },
///	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
//	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
//	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
//	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
//	{ ClkTagBar,            0,              Button1,        view,           {0} },
//	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
};


 /****************************************************************************************
* Sock for dwm-msg
****************************************************************************************/


static const char *ipcsockpath = "/tmp/dwm.sock";
static IPCCommand ipccommands[] = {
  IPCCOMMAND(  view,                1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  toggleview,          1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  tag,                 1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  toggletag,           1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  tagmon,              1,      {ARG_TYPE_UINT}   ),
  IPCCOMMAND(  focusmon,            1,      {ARG_TYPE_SINT}   ),
  IPCCOMMAND(  focusstack,          1,      {ARG_TYPE_SINT}   ),
  IPCCOMMAND(  zoom,                1,      {ARG_TYPE_NONE}   ),
  IPCCOMMAND(  incnmaster,          1,      {ARG_TYPE_SINT}   ),
  IPCCOMMAND(  killclient,          1,      {ARG_TYPE_SINT}   ),
  IPCCOMMAND(  togglefloating,      1,      {ARG_TYPE_NONE}   ),
  IPCCOMMAND(  setmfact,            1,      {ARG_TYPE_FLOAT}  ),
  IPCCOMMAND(  setlayoutsafe,       1,      {ARG_TYPE_PTR}    ),
  IPCCOMMAND(  quit,                1,      {ARG_TYPE_NONE}   )
};

