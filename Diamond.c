#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number Of Rows : ");
    scanf("%d", &n);
    int upper = n/2+1;
    int lower=n/2-1;
    // Printing Uppper Half
    for(int i = 1;i<=upper;i++){
        for(int j=1;j<=upper-i;j++){
            printf(" ");

        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }

    // Printing Lower Half
   for(int i = upper-1;i>=1;i--){
        for(int j=1;j<=upper-i ;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
   } 
return 0;
}