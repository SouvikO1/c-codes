//calculate simple interest(10)

#include<stdio.h>
int main(){
	int principal,rate,time;
	printf("enter principal:");
	scanf("%d",&principal);
	printf("enter rate of interst:");
	scanf("%d",&rate);
	printf("enter time:");
	scanf("%d",&time);
	printf("SI:%d",(principal*rate*time)/100);
	
	return 0;
}
