//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", "sensors | grep 'Package id 0' | awk '{print $4}'",	        15,		0},

	{"", "date '+%a %d %b %H:%M'", 5, 0},

    {"", "upower -i /org/freedesktop/UPower/devices/battery_BAT0 | grep \"percentage\" | awk '{print $2}'", 60, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
