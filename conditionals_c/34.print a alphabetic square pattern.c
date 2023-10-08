// print a alphabetic square pattern (34)
// A B C D 
// A B C D 
// A B C D 
// A B C D 

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows you want to print:");
    scanf("%d",&n);
    for(int i=65;i<=65+n;i++){
        for(int j=65;j<=65+n;j++){
            printf("%c ",j);
        }
        printf("\n");
    }

    return 0;
}

