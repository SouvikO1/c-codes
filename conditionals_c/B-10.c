//find the greatest of three input(10)
#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("enter the first number:");
	scanf("%d",&num1);
	printf("enter the second number:");
	scanf("%d",&num2);
	printf("enter the third number:");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3){
		printf("the greatest number is:%d  ",num1);
	}
	else if(num2>num1 && num2>num3){
		printf("the greatest number is:%d  ",num2);
	}
	else if(num3>num1 && num3>num2){
		printf("the greatest number is:%d  ",num3);
	}
		
		return 0;
}
