//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"󱛟 ", "disk.sh",							5,			0},
	{" ", "ram.sh",							5,			0},
	{"", "battery.sh",						5,			0},
	{"", "date.sh",							1,			0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
