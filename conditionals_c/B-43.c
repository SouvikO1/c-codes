// print a triangle alphabetical pattern(43)
//          A
//        A B
//      A B C
//    A B C D
//  A B C D E
 
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows you want to print:");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int j=65;j<=64+i;j++){
            char ch=j;
            printf("%c ",ch);
        }
        printf("\n");
    }

    return 0;
}

