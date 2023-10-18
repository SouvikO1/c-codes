// print a pyramid number pattern(45)
//          1
//        1 2 3 
//      1 2 3 4 5  
//    1 2 3 4 5 6 7
//  1 2 3 4 5 6 7 8 9 
 
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
        for(int j=1;j<=2*i-1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}

