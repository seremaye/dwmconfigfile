//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "wifiımvar",5,0},
	{"", "saaatfalan",20,0},
	{"", "ram",5,0},
	{"", "nett_indirilen2",30,0},
        {"", "nett_gönderilen",30,0},
	//{"", "sıcaklık",10,0},
	//{"", "kur2.py",10000,0},
	{"", "bataryacım",20,0},
	{"", "uptime2",20,0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

