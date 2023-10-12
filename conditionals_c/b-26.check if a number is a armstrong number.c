//check if a number is a armstrong number (26)
#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int ori=n;
    int sum=0;
    while(n>0){
    	int x=n%10;
    	sum=sum+pow(x,3);
    	n/=10;
    	
	}
	if(ori==sum){
	    printf("armstrong number");
	}
	else{
	    printf("NOT A ARMSTRONG NUMBER");
	}

    return 0;
}

