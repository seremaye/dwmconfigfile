//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "ram",5,0},
	{"", "nett_indirilen",30,0},
        {"", "nett_gönderilen",30,0},
	{"", "(date | awk '{print substr($0, 1, length-7)}')",20,0}


};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

