// Eddy Ji, 5/19/2022
#include<stdio.h>
#include<stdbool.h> 
int main(void){
	bool valid = true, right = false, acute = false, obtuse = false;   //Properties are
	int a, b, c;						        //set false by default. 
	printf("Input first angle: ");	//Here are the instructions allow users to input values.
	scanf("%d", &a);
	printf("Input second angle: ");
	scanf("%d", &b);
	printf("Input third angle: ");
	scanf("%d", &c);

	if (a <= 0){		// Here we check if the triangle is valid or not.
		valid = false;
	} else if (b <= 0){ 
		valid = false;
	} else if (c <= 0){ 
		valid = false;
	} else if (a + b + c != 180){
		valid = false;
	}

	if (valid == false){	// Here we determine the property of triangle
		valid = false;	// We start by asking if it is valid or not.
	} else if(a == 90){	
		right = true;
	} else if (b == 90){ 
		right = true;
	} else if (c == 90){ 
		right = false;
	} else if (a > 90){
		obtuse = true;
	} else if (b > 90){
		obtuse = true;
	} else if (c > 90){
		obtuse = true;
	} else {
		acute = true;
	}

	if (valid){
		printf("The triangle is valid. \n");	//Here are the print statements of
	} else{						// the results
		printf("The triangle is invalid");
	}

	if (obtuse){
		printf("It is an obtuse angled triangle. ");
	} else if (right){
		printf("It is a right angled triangle.");
	} else if (acute){
		printf("It is an acute angled triangle. ");
	}
}
