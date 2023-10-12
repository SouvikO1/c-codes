// print a triangle pattern(41)
//          *
//        * *
//      * * *
//    * * * *
//  * * * * *
 
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
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

