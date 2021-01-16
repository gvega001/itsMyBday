/*
	Author: Gabriel Vega
	Purpose: This program prints out my kname to the screen

*/

#include<stdio.h>

int main()
{

	enum months { january, february, march, april, may, june, july, august, september, october, november, december};
	
	typedef enum {false, true} bool;
	
	enum months myBirthDay; 
	
	myBirthDay = march;
	
	enum months thisMonth;
	
	thisMonth = january; 
	
	bool isBday;
	
	if(myBirthDay == thisMonth){
	isBday = true;
	}
	
	if (isBday==true){
	printf("Happy Bday!");
	} else {
		printf("It is not your birthday!\n");
	}
	return 0; 
}
