//check if someone is eligible for vote(13)
#include<stdio.h>
int main(){
	int num;
	printf("enter the number:");
	scanf("%d",&num);


	if( num>=18){
		printf("eligible to vote");
	}
	else{
		printf("not eligible to vote");
	}
		
		return 0;
}
