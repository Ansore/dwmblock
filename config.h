//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"nettraf",	1,	16},
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"music",	0,	11},
	{"",	"news",		0,	6},
	/* {"",	"crypto",	0,	13}, */
	/* {"",	"price bat \"Basic Attention Token\" 🦁",	0,	20}, */
	{"",	"price btc Bitcoin 💰",				0,	21},
	/* {"",	"price lbc \"LBRY Token\" 📚",			0,	22}, */
	/* {"",	"torrent",	20,	7}, */
	{"",	"mailbox",	180,	12},
	{"",	"memory",	10,	14},
	{"",	"cpu",		10,	18},
	/* {"",	"disk",		10,	24}, */
	{"",	"volume",	0,	10},
	{"",	"bright",	0,	23},
	{"",	"weather",	18000,	5},
	{"",	"battery",	5,	3},
	{"",	"internet",	5,	4},
	{"",	"clock",	60,	1},
	{"",	"moonphase",	18000,	17},
	{"",	"pacpackages",	0,	8},
	/* {"",	"help-icon",	0,	15}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
