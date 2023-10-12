//find the greatest of four input(11)
#include<stdio.h>
int main(){
	int num1,num2,num3,num4;
	printf("enter the first number:");
	scanf("%d",&num1);
	printf("enter the second number:");
	scanf("%d",&num2);
	printf("enter the third number:");
	scanf("%d",&num3);
	printf("enter the third number:");
	scanf("%d",&num4);
	if(num1>num2 && num1>num3 && num1>num4){
		printf("the greatest number is:%d  ",num1);
	}
	else if(num2>num1 && num2>num3 && num2>num4){
		printf("the greatest number is:%d  ",num2);
	}
	else if(num3>num1 && num3>num2 && num3>num4){
		printf("the greatest number is:%d  ",num3);
	}
	else if(num4>num1 && num4>num2 && num4>num3){
		printf("the greatest number is:%d  ",num4);
	}
		
		return 0;
}
