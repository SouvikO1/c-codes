//check if a number is +ve or -ve(1)
#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n>0){
		printf("positive");
	}
	else if(n<0){
		printf("negative");
	}
	else{
		printf("input is equal to zero");
	}
	
	
	return 0;
}
