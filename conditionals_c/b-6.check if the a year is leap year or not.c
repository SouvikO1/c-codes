//check if the a year is leap year or not(6)
#include<stdio.h>
int main(){
	int  n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n%4==0  && n%100!=0 || (n%100==0 && n%400==0)){
		printf("LEAP YEAR");
	}
	else{
		printf("not a leap year");
	}
		
		return 0;
}
