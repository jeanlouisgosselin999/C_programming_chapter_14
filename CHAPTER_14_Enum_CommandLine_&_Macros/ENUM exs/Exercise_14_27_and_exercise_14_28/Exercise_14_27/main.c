/*
This program will define an enumeration type called MONEY, having the following members:

penny
nickel
dime
quarter
half
dollar

It then assigns the following values to these members:

penny 1
nickel 5
dime 10
quarter 25
half 50
dollar 100

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
NOTE:
as with STRUCTURES and UNIONS, we can also write:

enum money{

	penny = 1,
	nickel = 5,
	dime = 10,
	quarter = 25,
	half = 50,
	dollar = 100		
	
} ;

*/


int main(int argc, char *argv[]) {
	
	
	return 0;
}
