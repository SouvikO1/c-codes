//print a y-axis inverted triangle pattern (30)
// * * * * *
// * * * *
// * * *
// * *
// *
#include <stdio.h>

int main()
{
    int n;
    printf("enter how many rows you want to print:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}

