//WAP to find the sum of digits of a given number(23)
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        int x=n%10;
        sum+=x;
        n/=10;
    }
    printf("the total number of digits are:%d",sum);

    return 0;
}

