// Write a C Program - using if else statements, to find the largest number among the given two integer numbers. -
// Enter the values for x and y Input: 250 350 Output: Y is large number - 350

#include <stdio.h>

int main(){
	int a, b; //define variable 
	printf("Enter value for a =\n");
	scanf("%d",&a); 
	printf("Enter value for b =\n");
	scanf("%d",&b);
	if (a>b)  
		{
			printf(" a = %d is Largest number \n", a);
		}
		else if (b> a)
		{
			printf("b = %d is Largest number \n", b);
		}
		else
		{
			printf("Both number are equal \n");
		}
    return 0;
}
