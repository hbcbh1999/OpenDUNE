/* $Id$ */

/** @file src/tables/sound.h Sound file tables. */

/** Information about sound files. */
typedef struct SoundData {
	const char *string; /*!< Pointer to a string. */
	uint16 variable_04; /*!< ?? */
} SoundData;

/** Number of voices in the game. */
#define NUM_VOICES lengthof(g_voices)

/** Available voices. */
static const SoundData g_voices[] = {
	{"+VSCREAM1.VOC",  11}, /*   0 */
	{"+EXSAND.VOC",    10}, /*   1 */
	{"+ROCKET.VOC",    11}, /*   2 */
	{"+BUTTON.VOC",    10}, /*   3 */
	{"+VSCREAM5.VOC",  11}, /*   4 */
	{"+CRUMBLE.VOC",   15}, /*   5 */
	{"+EXSMALL.VOC",    9}, /*   6 */
	{"+EXMED.VOC",     10}, /*   7 */
	{"+EXLARGE.VOC",   14}, /*   8 */
	{"+EXCANNON.VOC",  11}, /*   9 */
	{"+GUNMULTI.VOC",   9}, /*  10 */
	{"+GUN.VOC",       10}, /*  11 */
	{"+EXGAS.VOC",     10}, /*  12 */
	{"+EXDUD.VOC",     10}, /*  13 */
	{"+VSCREAM2.VOC",  11}, /*  14 */
	{"+VSCREAM3.VOC",  11}, /*  15 */
	{"+VSCREAM4.VOC",  11}, /*  16 */
	{"+%cAFFIRM.VOC",  15}, /*  17 */
	{"+%cREPORT1.VOC", 15}, /*  18 */
	{"+%cREPORT2.VOC", 15}, /*  19 */
	{"+%cREPORT3.VOC", 15}, /*  20 */
	{"+%cOVEROUT.VOC", 15}, /*  21 */
	{"+%cMOVEOUT.VOC", 15}, /*  22 */
	{"?POPPA.VOC",     15}, /*  23 */
	{"?SANDBUG.VOC",   15}, /*  24 */
	{"+STATICP.VOC",   10}, /*  25 */
	{"+WORMET3P.VOC",  16}, /*  26 */
	{"+MISLTINP.VOC",  10}, /*  27 */
	{"+SQUISH2.VOC",   12}, /*  28 */
	{"%cENEMY.VOC",    20}, /*  29 */
	{"%cHARK.VOC",     20}, /*  30 */
	{"%cATRE.VOC",     20}, /*  31 */
	{"%cORDOS.VOC",    20}, /*  32 */
	{"%cFREMEN.VOC",   20}, /*  33 */
	{"%cSARD.VOC",     20}, /*  34 */
	{"FILLER.VOC",     20}, /*  35 */
	{"%cUNIT.VOC",     20}, /*  36 */
	{"%cSTRUCT.VOC",   20}, /*  37 */
	{"%cONE.VOC",      19}, /*  38 */
	{"%cTWO.VOC",      19}, /*  39 */
	{"%cTHREE.VOC",    19}, /*  40 */
	{"%cFOUR.VOC",     19}, /*  41 */
	{"%cFIVE.VOC",     19}, /*  42 */
	{"%cCONST.VOC",    20}, /*  43 */
	{"%cRADAR.VOC",    20}, /*  44 */
	{"%cOFF.VOC",      20}, /*  45 */
	{"%cON.VOC",       20}, /*  46 */
	{"%cFRIGATE.VOC",  20}, /*  47 */
	{"?%cARRIVE.VOC",  20}, /*  48 */
	{"%cWARNING.VOC",  20}, /*  49 */
	{"%cSABOT.VOC",    20}, /*  50 */
	{"%cMISSILE.VOC",  20}, /*  51 */
	{"%cBLOOM.VOC",    20}, /*  52 */
	{"%cDESTROY.VOC",  20}, /*  53 */
	{"%cDEPLOY.VOC",   20}, /*  54 */
	{"%cAPPRCH.VOC",   20}, /*  55 */
	{"%cLOCATED.VOC",  20}, /*  56 */
	{"%cNORTH.VOC",    20}, /*  57 */
	{"%cEAST.VOC",     20}, /*  58 */
	{"%cSOUTH.VOC",    20}, /*  59 */
	{"%cWEST.VOC",     20}, /*  60 */
	{"?%cWIN.VOC",     20}, /*  61 */
	{"?%cLOSE.VOC",    20}, /*  62 */
	{"%cLAUNCH.VOC",   20}, /*  63 */
	{"%cATTACK.VOC",   20}, /*  64 */
	{"%cVEHICLE.VOC",  20}, /*  65 */
	{"%cREPAIR.VOC",   20}, /*  66 */
	{"%cHARVEST.VOC",  20}, /*  67 */
	{"%cWORMY.VOC",    20}, /*  68 */
	{"%cCAPTURE.VOC",  20}, /*  69 */
	{"%cNEXT.VOC",     20}, /*  70 */
	{"%cNEXT2.VOC",    20}, /*  71 */
	{"/BLASTER.VOC",   10}, /*  72 */
	{"/GLASS6.VOC",    10}, /*  73 */
	{"/LIZARD1.VOC",   10}, /*  74 */
	{"/FLESH.VOC",     10}, /*  75 */
	{"/CLICK.VOC",     10}, /*  76 */
	{"-3HOUSES.VOC",   12}, /*  77 */
	{"-ANDNOW.VOC",    12}, /*  78 */
	{"-ARRIVED.VOC",   12}, /*  79 */
	{"-BATTLE.VOC",    12}, /*  80 */
	{"-BEGINS.VOC",    12}, /*  81 */
	{"-BLDING.VOC",    12}, /*  82 */
	{"-CONTROL2.VOC",  12}, /*  83 */
	{"-CONTROL3.VOC",  12}, /*  84 */
	{"-CONTROL4.VOC",  12}, /*  85 */
	{"-CONTROLS.VOC",  12}, /*  86 */
	{"-DUNE.VOC",      12}, /*  87 */
	{"-DYNASTY.VOC",   12}, /*  88 */
	{"-EACHHOME.VOC",  12}, /*  89 */
	{"-EANDNO.VOC",    12}, /*  90 */
	{"-ECONTROL.VOC",  12}, /*  91 */
	{"-EHOUSE.VOC",    12}, /*  92 */
	{"-EMPIRE.VOC",    12}, /*  93 */
	{"-EPRODUCE.VOC",  12}, /*  94 */
	{"-ERULES.VOC",    12}, /*  95 */
	{"-ETERRIT.VOC",   12}, /*  96 */
	{"-EMOST.VOC",     12}, /*  97 */
	{"-ENOSET.VOC",    12}, /*  98 */
	{"-EVIL.VOC",      12}, /*  99 */
	{"-HARK.VOC",      12}, /* 100 */
	{"-HOME.VOC",      12}, /* 101 */
	{"-HOUSE2.VOC",    12}, /* 102 */
	{"-INSID.VOC",     12}, /* 103 */
	{"-KING.VOC",      12}, /* 104 */
	{"-KNOWN.VOC",     12}, /* 105 */
	{"-MELANGE.VOC",   12}, /* 106 */
	{"-NOBLE.VOC",     12}, /* 107 */
	{"?NOW.VOC",       12}, /* 108 */
	{"-OFDUNE.VOC",    12}, /* 109 */
	{"-ORD.VOC",       12}, /* 110 */
	{"-PLANET.VOC",    12}, /* 111 */
	{"-PREVAIL.VOC",   12}, /* 112 */
	{"-PROPOSED.VOC",  12}, /* 113 */
	{"-SANDLAND.VOC",  12}, /* 114 */
	{"-SPICE.VOC",     12}, /* 115 */
	{"-SPICE2.VOC",    12}, /* 116 */
	{"-VAST.VOC",      12}, /* 117 */
	{"-WHOEVER.VOC",   12}, /* 118 */
	{"?YOUR.VOC",      12}, /* 119 */
	{"?FILLER.VOC",    12}, /* 120 */
	{"-DROPEQ2P.VOC",  10}, /* 121 */
	{"/EXTINY.VOC",    10}, /* 122 */
	{"-WIND2BP.VOC",   10}, /* 123 */
	{"-BRAKES2P.VOC",  11}, /* 124 */
	{"-GUNSHOT.VOC",   10}, /* 125 */
	{"-GLASS.VOC",     11}, /* 126 */
	{"-MISSLE8.VOC",   10}, /* 127 */
	{"-CLANK.VOC",     10}, /* 128 */
	{"-BLOWUP1.VOC",   10}, /* 129 */
	{"-BLOWUP2.VOC",   11}  /* 130 */
};

static const char _music_dune00[] = "dune0";
static const char _music_dune01[] = "dune1";
static const char _music_dune02[] = "dune2";
static const char _music_dune03[] = "dune3";
static const char _music_dune04[] = "dune4";
static const char _music_dune05[] = "dune5";
static const char _music_dune06[] = "dune6";
static const char _music_dune07[] = "dune7";
static const char _music_dune08[] = "dune8";
static const char _music_dune09[] = "dune9";
static const char _music_dune10[] = "dune10";
static const char _music_dune11[] = "dune11";
static const char _music_dune12[] = "dune12";
static const char _music_dune13[] = "dune13";
static const char _music_dune14[] = "dune14";
static const char _music_dune15[] = "dune15";
static const char _music_dune16[] = "dune16";
static const char _music_dune17[] = "dune17";
static const char _music_dune18[] = "dune18";
static const char _music_dune19[] = "dune19";
static const char _music_dune20[] = "dune20";

/**
 * Available music.
 * @note The code compares pointers rather than the text itself, thus strings must be unique.
 */
static SoundData g_musics[] = {
	{NULL,          0}, /*  0 */
	{_music_dune01, 2}, /*  1 */
	{_music_dune01, 3}, /*  2 */
	{_music_dune01, 4}, /*  3 */
	{_music_dune01, 5}, /*  4 */
	{_music_dune17, 4}, /*  5 */
	{_music_dune08, 3}, /*  6 */
	{_music_dune08, 2}, /*  7 */
	{_music_dune01, 6}, /*  8 */
	{_music_dune02, 6}, /*  9 */
	{_music_dune03, 6}, /* 10 */
	{_music_dune04, 6}, /* 11 */
	{_music_dune05, 6}, /* 12 */
	{_music_dune06, 6}, /* 13 */
	{_music_dune09, 4}, /* 14 */
	{_music_dune09, 5}, /* 15 */
	{_music_dune18, 6}, /* 16 */
	{_music_dune10, 7}, /* 17 */
	{_music_dune11, 7}, /* 18 */
	{_music_dune12, 7}, /* 19 */
	{_music_dune13, 7}, /* 20 */
	{_music_dune14, 7}, /* 21 */
	{_music_dune15, 7}, /* 22 */
	{_music_dune01, 8}, /* 23 */
	{_music_dune07, 2}, /* 24 */
	{_music_dune07, 3}, /* 25 */
	{_music_dune07, 4}, /* 26 */
	{_music_dune00, 2}, /* 27 */
	{_music_dune07, 6}, /* 28 */
	{_music_dune16, 7}, /* 29 */
	{_music_dune19, 4}, /* 30 */
	{_music_dune19, 2}, /* 31 */
	{_music_dune19, 3}, /* 32 */
	{_music_dune20, 2}, /* 33 */
	{_music_dune16, 8}, /* 34 */
	{_music_dune00, 3}, /* 35 */
	{_music_dune00, 4}, /* 36 */
	{_music_dune00, 5}, /* 37 */
};

/**
 * Mapping soundID -> voice.
 */
static uint16 g_voiceMapping[] = {
	0xFFFF, /*   0 */
	0xFFFF, /*   1 */
	0xFFFF, /*   2 */
	0xFFFF, /*   3 */
	0xFFFF, /*   4 */
	0xFFFF, /*   5 */
	0xFFFF, /*   6 */
	0xFFFF, /*   7 */
	0xFFFF, /*   8 */
	0xFFFF, /*   9 */
	0xFFFF, /*  10 */
	0xFFFF, /*  11 */
	0xFFFF, /*  12 */
	0xFFFF, /*  13 */
	0xFFFF, /*  14 */
	0xFFFF, /*  15 */
	0xFFFF, /*  16 */
	0xFFFF, /*  17 */
	0xFFFF, /*  18 */
	0xFFFF, /*  19 */
	13,     /*  20 */
	0xFFFF, /*  21 */
	0xFFFF, /*  22 */
	0xFFFF, /*  23 */
	121,    /*  24 */
	0xFFFF, /*  25 */
	0xFFFF, /*  26 */
	0xFFFF, /*  27 */
	0xFFFF, /*  28 */
	0xFFFF, /*  29 */
	0,      /*  30 */
	4,      /*  31 */
	14,     /*  32 */
	15,     /*  33 */
	16,     /*  34 */
	28,     /*  35 */
	0xFFFF, /*  36 */
	0xFFFF, /*  37 */
	3,      /*  38 */
	12,     /*  39 */
	1,      /*  40 */
	7,      /*  41 */
	2,      /*  42 */
	0xFFFF, /*  43 */
	5,      /*  44 */
	0xFFFF, /*  45 */
	0xFFFF, /*  46 */
	0xFFFF, /*  47 */
	0xFFFF, /*  48 */
	7,      /*  49 */
	6,      /*  50 */
	8,      /*  51 */
	0xFFFF, /*  52 */
	0xFFFF, /*  53 */
	122,    /*  54 */
	0xFFFF, /*  55 */
	9,      /*  56 */
	9,      /*  57 */
	11,     /*  58 */
	10,     /*  59 */
	43,     /*  60 */
	0xFFFF, /*  61 */
	25,     /*  62 */
	26,     /*  63 */
	27,     /*  64 */
	72,     /*  65 */
	73,     /*  66 */
	74,     /*  67 */
	75,     /*  68 */
	76,     /*  69 */
	0xFFFF, /*  70 */
	0xFFFF, /*  71 */
	0xFFFF, /*  72 */
	0xFFFF, /*  73 */
	0xFFFF, /*  74 */
	0xFFFF, /*  75 */
	0xFFFF, /*  76 */
	0xFFFF, /*  77 */
	0xFFFF, /*  78 */
	0xFFFF, /*  79 */
	0xFFFF, /*  80 */
	0xFFFF, /*  81 */
	0xFFFF, /*  82 */
	0xFFFF, /*  83 */
	0xFFFF, /*  84 */
	0xFFFF, /*  85 */
	0xFFFF, /*  86 */
	0xFFFF, /*  87 */
	0xFFFF, /*  88 */
	0xFFFF, /*  89 */
	0xFFFF, /*  90 */
	0xFFFF, /*  91 */
	0xFFFF, /*  92 */
	0xFFFF, /*  93 */
	0xFFFF, /*  94 */
	0xFFFF, /*  95 */
	0xFFFF, /*  96 */
	0xFFFF, /*  97 */
	0xFFFF, /*  98 */
	0xFFFF, /*  99 */
	0xFFFF, /* 100 */
	0xFFFF, /* 101 */
	0xFFFF, /* 102 */
	0xFFFF, /* 103 */
	0xFFFF, /* 104 */
	0xFFFF, /* 105 */
	0xFFFF, /* 106 */
	0xFFFF, /* 107 */
	123,    /* 108 */
	0xFFFF, /* 109 */
	124,    /* 110 */
	0xFFFF, /* 111 */
	125,    /* 112 */
	126,    /* 113 */
	127,    /* 114 */
	0xFFFF, /* 115 */
	0xFFFF, /* 116 */
	128,    /* 117 */
	129,    /* 118 */
	130     /* 119 */
};