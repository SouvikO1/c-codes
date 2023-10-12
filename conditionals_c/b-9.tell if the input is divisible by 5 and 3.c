//tell if the input is divisible by 5 and 3(9)
#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n%5==0 && n%3==0){
		printf("the input is divisible by both");
	}
	else{
		printf("the input is NOT divisible  by both");
	}
		
		return 0;
}
