//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	{" ^C14^ ^d^", "get_cputmp", 5, 0},
	{" ^C11^ ^d^", "get_cpu", 5, 0},
	{" ^C12^ ^d^", "get_mem", 5, 0},
	{" ^C3^  ^d^", "get_conn",10, 0},
	{" ^C13^ ^d^", "get_vol", 0, 10},
	{" ^C1^ ^d^", "date '+%a %b %d, %Y  %H:%M'", 30, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
