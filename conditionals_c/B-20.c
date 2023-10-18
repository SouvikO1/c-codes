//print all even nmber from 1-n(20)
#include<stdio.h>
int main(){
	int n;
	printf("enter any number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			printf("%d",i);
		}
		printf("\n");
	}	
	return 0;
}
