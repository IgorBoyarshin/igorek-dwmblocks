// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    // {"", "cat ~/.pacupdate | sed /📦0/d",					0,		9},

    { "\x08 ♥♥ Love my Anka ♥♥             ", "",   0, 0 },
    { "\x07♫ ", "cat ~/scripts/variables/volume",   0, 10 },
    { "\x05", "free -h | awk '/^Mem/ { print \"RAM=\" $3 }' | sed s/i//g", 30, 0},
    { "\x06", "~/.get_battery.zsh", 10, 0},

    // {"", "~/bin/statusbar/volume",						0,		10},

    // {"☀", "xbacklight | sed 's/\\..*//'",					0,		11},

    // {"", "~/bin/statusbar/battery",						5,		0},

    // {"S", "sensors | awk '/^temp1:/{print $2}'",				5,		0},
    { "\x04Lang=", "xkb-switch | tr a-z A-Z",   1, 0 },
    { "\x03", "date +\"%d.%m.%Y %a %H:%M:%S\"", 1, 0 },

    // {"", "~/bin/statusbar/clock",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
