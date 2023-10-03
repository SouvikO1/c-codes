//calculate the percentage of five subs(9)

#include<stdio.h>
int main(){
	int sub1,sub2,sub3,sub4,sub5;
	printf("enter the number got in all five subjects:");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	printf("percentage:%d",(sub1+sub2+sub3+sub4+sub5)/5);
	
	return 0;
}
