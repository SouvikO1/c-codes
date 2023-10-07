//print the fibonacci series upto n (25)
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int num1=0;
        int num2=1;
    printf("%d\n",num1);
    printf("%d\n",num2);
    for(int i=3;i<=n;i++){
        
        int num3=num1+num2;
        printf("%d\n",num3);
        num1=num2;
        num2=num3;
    }

    return 0;
}

