// Eddy Ji, 5/19/2022
#include<stdio.h>
#include <string.h>
int main(void){
	char month[] = "";
	int year, days;
	printf("Enter month name:");   // Here are the instructions allowing users to input values.
	scanf("%s", month);
	printf("Enter year:");
	scanf("%d", &year);
	if (strcmp(month, "January") == 0){ //Here we check if the month is one of the 31 days month
		days= 31;
	} else if (strcmp(month, "February") == 0){
		if (year % 4 == 0){  // February is a special month. We determines it by check if
		days = 29;	    // the year is leap year.
		} else days = 28;    
	} else if (strcmp(month, "March") == 0){
		days= 31;
	} else if (strcmp(month, "May") == 0){
		days= 31;
	} else if (strcmp(month, "July") == 0){
		days= 31;
	} else if (strcmp(month, "August") == 0){
		days= 31;
	} else if (strcmp(month, "October") == 0){
		days= 31;
	} else if (strcmp(month, "December") == 0){
		days= 31;
	} else days = 30;  	// else it is 30 days.
	printf("It contains %d", days);
}
