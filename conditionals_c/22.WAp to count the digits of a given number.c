//WAp to count the digits of a given number(22)
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int count=0;
    while(n>0){
        int x=n%10;
        count++;
        n/=10;
    }
    printf("the total number of digits are:%d",count);

    return 0;
}

