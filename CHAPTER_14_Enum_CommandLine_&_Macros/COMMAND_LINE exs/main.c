/*
The question asked for this exercise is to describe the purpose of the program below.

REMINDER:

the function MAIN() has two arguments:

- int argc: total number of arguments passed on to the program)
- char *argv[] (== array of char pointers): full list of all the these arguments

We can therefore say that the dual purpose of this program is:

1) in the first FOR loop:
	to enable the user to enter any text he wishes (character limit: 80, stopping when ENTER button (==\n) is pressed) using GETCHAR()

2) in the second FOR loop, it compares the name of the program with either "UPPER" or "LOWER":
	depending on each case, the text entered by the user will either be printed (using PUTCHAR())in upper case, or in lower case.
	
a DEFAULT/error message will be displayed if none of the cases apply.
	
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	
	char letter[80];
	
	int count, tag;
	//NOTE: tag will simply be assigned the final result of COUNT, and serve as the limit in the second FOR loop
	
	printf("Please enter our text:\n");
	for(count = 0; (letter[count] = getchar()) != '\n'; ++count)
		;
		
	tag = count;
	
	for(count = 0; count < tag; ++count) {
			
		if (strcmp(argv[1], "upper") == 0)
			putchar(toupper(letter[count]));
			
			else if (strcmp(argv[1], "lower") == 0)
				putchar(tolower(letter[count]));
				
				else {
					puts("ERROR IN COMMAND LINE - PLEASE TRY AGAIN");
					break;
				}
	}
						
	return 0;
}
