#include<stdio.h>
#define number2 100
int number1;
float result;
main()
{
	printf("enter first number:");//shows the output read on screen
	scanf("%d", &number1);//%dis aformat specifier"group of two characters that take input and output and format it as specifieed"
//	printf("enter second number:");//shows the output read on screen
//	scanf("%d", &number2);
	result= number1 + number2;
	printf("%d plus %d gives %.2f", number1, number2,result);
	
	return 0;
}
