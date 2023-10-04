//make a mini calculator (13)

#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter the first number:");
	scanf("%d",&num1);
	printf("enter the second number:");
	scanf("%d",&num2);
	
	printf("addition:%d\n",num1+num2);
	printf("substractio:%d\n",num1-num2);
	printf("multiplication:%d\n",num1*num2);
	printf("division:%d",num1/num2);
	return 0;
}
