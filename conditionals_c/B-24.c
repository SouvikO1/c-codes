//WAP to find the reverse of a number(24)
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int reverse=0;
    while(n>0){
        int x=n%10;
        reverse=reverse*10+x;
        n/=10;
    }
    printf("the total number of digits are:%d",reverse);

    return 0;
}

