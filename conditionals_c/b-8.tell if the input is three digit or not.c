//tell if the input is three digit or not(8)
#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n>=100 && n<1000){
		printf("the input is a three digit number");
	}
	else{
		printf("the input digit is not a three digit nimber");
	}
		
		return 0;
}
