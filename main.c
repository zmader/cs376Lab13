/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"
#include <ctype.h>

/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{
  if(argc != 2)
  {
    robotPrintAscii();
  }
  else if(isdigit(*argv[1]))
  {
    robotPrintAscii();
    dalekPrintAscii();
    robotPrintMessage();
  }
  else
  {
    printf("Invalid argument\n");
  }
  return 0;
}
