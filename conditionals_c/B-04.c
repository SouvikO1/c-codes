//check if the input is upper case or lower case(4)
#include<stdio.h>
int main(){
	int n;
	printf("enter a charecter:");
	scanf("%c",&n);
	if(n>='A' && n<='Z'){
		printf("upper case");
	}
	else if(n>='a' && n<='z'){
		printf("lower case");
	}
	else{
		printf("enter a charecter");
	}
	
	
	return 0;
}
