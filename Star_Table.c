#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number Of Rows : ");
    scanf("%d", &n);
    int nst = n-1;
    int nsp = 1;
    for(int i =1;i<=2*n-1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    
return 0;
}