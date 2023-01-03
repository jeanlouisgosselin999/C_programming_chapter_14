/*
This program is the continuation of previous exercise 14_24, whereby we use the ENUM to define a variable called EVENT of ype FLAGS.
*/

#include <stdio.h>
#include <stdlib.h>

typedef enum {first, second, third, fourth, fifth} flags;


/*
NOTE: as with STRUCTURES and UNIONS, it is also possible to write: 

enum flags {first, second, third, fourth, fifth} event;

...with the variable EVENT written ath the end, instead of in MAIN()

*/

int main(int argc, char *argv[]) {
	
	//defining our variable EVENT of enum-type FLAGS:
	flags event;
	
	
	return 0;
}
