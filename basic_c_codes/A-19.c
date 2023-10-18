//convert celcius to farhenheit(19)

#include<stdio.h>
int main(){
	float celcius,farhenheit;
	printf("enter the degree in celcius:");
	scanf("%f",&celcius);
	farhenheit=((9*celcius)/5)+32;
	printf("farhenheit:%f",farhenheit);
	return 0;
}
