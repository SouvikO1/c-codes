//see if the output is vowel or not(15)
#include<stdio.h>
int main(){
	char ch;
	printf("enter the charecter:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
		printf("vowel");
	}
	else{
		printf("NOt vowel");
	}	
	return 0;
}
