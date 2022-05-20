// Eddy Ji, 5/19/2022
#include <stdio.h>
int main(void){
	int num1, num2, result;
	char input;
	scanf("%d %d %c", &num1, &num2, &input);	//Here we allow users to type in the inputs
	if (input == '+'){			//The conditions here determine the arithmetic
		result = num1 + num2;		//operation that will be applied on the number
	} else if (input == '-'){
		result = num1 - num2;	
	} else if (input == '*'){
		result = num1 * num2;
	} else if (input == '/'){
		result = num1 / num2;
	}
	printf("%d", result);			//The result is going to be printed.

}
