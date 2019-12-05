/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
<<<<<<< HEAD
 * @author Tanya L. Crenshaw, Nathan Schmedake, Zack Mader
=======
 * @author Tanya L. Crenshaw, Nathan Schmedake, Ryan Hunter
>>>>>>> af5d4c439664c35cacc829cecabc25e8f138cec6
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robotPrintMessage
 *
 * This function prints the message, "I really love robots!"
 *
 * @returns none 
 */
void robotPrintMessage(void)
{
  printf("\n\nI really love robots!\n\n");
  return;
}

/**
 * robotPrintAscii
 *
 */

char* blank(int n) {
char* ret;
	if (n == 0) {
		ret = "         ";
	}
	if (n == 1) {
		ret = "                   ";
	}
	else {
		ret = "                              ";
	}
return ret;
}



void robotPrintAscii(void)
{
  int i;

for (int i = 0; i < 3; i++) {
 
  //char* blank = "                             ";
  //blank = blank +30;
	printf("\n\n"
	 "UWR: Unidentified Wheeled Robot\n"
	 "%s    i_i    \n"
	 "%s   [?_?]   \n"
	 "%s   [!_!]   \n"
	 "%s  /|___|\\ \n"
<<<<<<< HEAD
	 "%s   d   b   \n",blank(i), blank(i), blank(i), blank(i));
	
  //blank = blank - 10;
}
=======
	 "%s   d   b   \n",blank, blank, blank, blank, blank);

  blank = blank - 10;
>>>>>>> f333c9fc228309f3d069088327ff02e74d6980e3
}

/**
 * dalekPrintAscii
 *
 */
void dalekPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "I am Dalek, from Dr. Who\n"
	 "%s      <----->      \n" 
         "%s     <  (?)  >     \n"        
         "%s     <  (!)  >     \n"        
         "%s     |       |     \n"
         "%s    < ------- >    \n"
         "%s    o         o    \n"
         "%s    o  0  ()  o    \n"
	 "%s   o           o   \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n", blank, blank, blank, blank, blank, blank, 
	 blank, blank, blank, blank, blank);
  blank = blank - 10;
}
