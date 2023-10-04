//WAP to swap two numbers method 4(17)

#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter the first number:");
	scanf("%d",&num1);
	printf("enter the second number:");
	scanf("%d",&num2);
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	printf("the two numbers are:%d,%d",num1,num2);
	
	return 0;
}
