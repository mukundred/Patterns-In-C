#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number Of Rows(ODD Only) : ");
    scanf("%d", &n);
 
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=n;j++){
        if(n%2==0){
            printf("You Entered Even Numbr !!");
            return -1;
        }
        int a=n/2+1;
        if(i== a|| j==a){
            printf("*");

        }

        else{
            printf(" ");
        }
        }
        printf("\n");
    }
return 0;
}