//check if a number is prime or not(21)
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("prime number");
    }
    else{
        printf("not prime number");
    }

    return 0;
}

