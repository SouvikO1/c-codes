// print a algebric trangle pattern (35)
// A  
// A B  
// A B C 
// A B C D 

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows you want to print:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=65;j<=64+i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }

    return 0;
}

