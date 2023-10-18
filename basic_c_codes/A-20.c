//calculate the area of a regular hexagon(20)
#include<stdio.h>
int main(){
	float side;
	printf("enter the value of the side:");
	scanf("%f",&side);
	float area=((3*1.73)/2)*side*side;
	printf("the area is:%f",area);
		
	return 0;
}
