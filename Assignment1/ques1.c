// Eddy Ji, 5/19/2022
#include <stdio.h>
int main(void){
	int phy, chem, bio, cs, math; //The input variables of scores for 5 courses.
	printf("Input marks of five courses \n"); //Here let users type in their scores.
	printf("Physics:");
	scanf("%d", &phy);
	printf("Chemistry:");
        scanf("%d", &chem);
        printf("Biology:");
        scanf("%d", &bio);
        printf("Mathmatics:");
        scanf("%d", &math);
        printf("Computer Science:");
        scanf("%d", &cs);
	int avg = (phy + chem + bio + cs +math) / 5; // Here we calculate the average score
	printf("Total marks = %d \n", avg);
	if(avg >= 90){		// Here we determine the mark of score.
		printf("Grade = A"); 
	} else if (avg >= 80){
		printf("Grade = B");
	} else if (avg >= 70){
		printf("Grade = C");
	} else if (avg >= 60){
		printf("Grade = D");
	} else if (avg >= 40){
		printf("Grade = E");
	} else printf("Grade = F");
}
