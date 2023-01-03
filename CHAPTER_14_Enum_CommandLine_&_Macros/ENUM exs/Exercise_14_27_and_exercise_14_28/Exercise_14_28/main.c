/*
This program is the continuation of the previous program.

It will define an enumeration variable called COINS, of enum-type MONEY.

It will then assign the initial value DIME to the variable COINS.
*/

#include <stdio.h>
#include <stdlib.h>

typedef enum {

	penny = 1,
	nickel = 5,
	dime = 10,
	quarter = 25,
	half = 50,
	dollar = 100		
	
} money;

/*
NOTE: as with STRUCTURES and with UNIONS, it is also possible to write:

enum money {

	penny = 1,
	nickel = 5,
	dime = 10,
	quarter = 25,
	half = 50,
	dollar = 100		
	
} coins;
	|
	==> NOTE: notice how we declare our variable here instead of in MAIN()

*/

int main(int argc, char *argv[]) {
	
	//declaring our variable COINS of enum-type MONEY:
	money coins;
	
	//assigning the value DIME:
	coins = dime;
	
	return 0;
}
