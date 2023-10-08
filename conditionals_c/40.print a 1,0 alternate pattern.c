// print a 1,0 alternate pattern (40)
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows you want to print:");
    scanf("%d",&n);
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int sum=i+j;
            if(sum%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}

