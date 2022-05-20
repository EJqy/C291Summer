// Eddy Ji, 5/19/2022
#include<stdio.h>
#include<stdbool.h> 
#include <string.h>
int main(void){
	bool morning = true, mom = true, sleep = true, af = true;
	char input;		//All conditions are set true here by default

	printf("Is it morning: ");		//Let the user input the options
	scanf("%c", &input);
	if(input  == 'n') {morning = false;}

	printf("Is it mom calling: ");
	scanf(" %c", &input);
	if(input  == 'n') {mom = false;}

	printf("Am I sleeping: ");
	scanf(" %c", &input);
	if(input  == 'n') {sleep = false;}

	if (morning){		//Determines whether answer the phone or not
 		if(sleep){	//morning sleeping then no
			af = false;
		}
	} else if(sleep){	//Sleeping then no, else true. Af is true by default.
		af = false;
	} 
 
	if(af) printf("Answer phone");
	else printf("Don't Answer phone");
}

