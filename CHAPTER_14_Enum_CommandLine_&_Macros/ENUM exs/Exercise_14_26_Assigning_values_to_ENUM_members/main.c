/*
This program will define two ENUM variables, BOY and GIRL, whose members are as follows:

rightFoot 1
leftFoot 2
rightLeg 3
leftLeg 4
rightArm 5
leftArm 6
rightHand_hand 7
leftHand 8

We have decided to name the enum-type: BODY

IMPORTANT NOTE: 
				enumeration constants are automatically assigned equivalent integer values, beginning with 0 for the first constant,
				with each successive constant increasing by 1.
				it is why we have had to assign a value to each constant, even though they increase by 1 too.
				
OTHER NOTE: as with structures and unions, we have written both alternatives for this.

*/

#include <stdio.h>
#include <stdlib.h>

typedef enum {
	
	rightFoot = 1,
	leftFoot = 2,
	rightLeg = 3,
	leftLeg = 4,
	rightArm = 5,
	leftArm = 6,
	rightHand_hand = 7,
	leftHand = 8
	
} body;

int main(int argc, char *argv[]) {
	
	//first variable of enum-type BODY:
	body boy;
	
	//second variable of enum-type BODY:
	body girl;
	
	return 0;
}

/*
NOTE:

as with STRUCTURES and UNIONS, it is alos possible to write the whole thing in one go:

enum body{
	
	rightFoot = 1,
	leftFoot = 2,
	rightLeg = 3,
	leftLeg = 4,
	rightArm = 5,
	leftArm = 6,
	rightHand_hand = 7,
	leftHand = 8
	
} boy, girl;

*/
