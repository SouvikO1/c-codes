//tell if the area of the rectangle is greater than perimeter(7)
#include<stdio.h>
int main(){
	float length,width;
	printf("enter the length:");
	scanf("%f",&length);
	printf("enter the width:");
	scanf("%f",&width);
	float area=length*width;
	float peri=2*(length+width);
	if(area>peri){
		printf("area is greater than perimeter");
	}
	else{
		printf("area is NOT greater than perimeter");
	}
		
		return 0;
}
