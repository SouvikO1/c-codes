//calculate the grade of a student(14)
#include<stdio.h>
int main(){
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	if(number>=90){
		printf("AA");
	}
	else if(number>=80 && number<90){
		printf("A");
	}
	else if(number>=70 && number<80){
		printf("B");
	}
	else if(number>=60 && number<70){
		printf("C");
	}
	else{
		printf("FAil");
	}
	
	
	
	
	return 0;
}
