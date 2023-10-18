//check if they are true for a triangle(12)
#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("enter the first number:");
	scanf("%d",&num1);
	printf("enter the second number:");
	scanf("%d",&num2);
	printf("enter the third number:");
	scanf("%d",&num3);

	if(num1+num2>=num3 && num2+num3>=num1 && num3+num1>=num2 ){
		printf("the triangle is a perfect triangle");
	}
	else{
		printf("its not a perfect triangle");
	}
		
		return 0;
}
