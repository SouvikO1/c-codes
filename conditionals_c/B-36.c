// print a algebric and numeric trangle pattern (36)
// 1  
// A B  
// 1 2 3 
// A B C D 

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows you want to print:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ",64+j);
            }
            else{
                printf("%d ",j);
            }
            
        }
        printf("\n");
    }

    return 0;
}

