// print a + shape pattern (37)
//     *
//     *
// * * * * *  
//     *
//     *

#include <stdio.h>

int main()
{
    int n;
    printf("enter a odd number for better experience:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int mid=(n/2)+1;
            if(i==mid || j==mid){
                printf("* ");
            }
            else{
                printf("  ");
            }
            
        }
        printf("\n");
    }

    return 0;
}

