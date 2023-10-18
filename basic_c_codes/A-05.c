//print the perimeter of a rectangle(5)
#include <stdio.h>

int main()
{
    float length,width;
    printf("enter the values of length and width:");
    scanf("%f%f",&length,&width);
    printf("the perimeter of the rectangle:%f",(2*(length+width)));

    return 0;
}

