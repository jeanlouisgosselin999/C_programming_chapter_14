/*
This program will comprise various MACROS asked in the book.
*/

#include <stdio.h>
#include <stdlib.h>

// (1) define the symbolic constant PI to represent the value 3.1415927:
#define PI 3.1415927

// (2) define a macro called AREA, which will calculate the area of a circle in terms of its radius; use the constant PI above:
#define AREA PI*radius*radius
					
// (3) redefinine the macro above, this time with the variable of the radius as its argument:
#define AREA(radius) PI*radius*radius

// (4) define a macro called CIRCUMFERENCE which will calculate the circumference of a circle in terms of its radius; use constant PI above:
#define CIRCUMFERENCE 2*PI*radius

// (5) rewriting the above macro, this time with the radius expressend as an argument:
#define CIRCUMFERENCE(radius) 2*PI*radius

// (6) define a macro called MAX which utilizes the conditional operator (? : ) to detrmine the maximum of A and B (A and B being both integers):
#define MAX (a < b) ? a : b

// (7) same as above, but with A and B as arguments:
#define MAX(a, b) (a < b) ? a : b





int main(int argc, char *argv[]) {
	return 0;
}
