#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        int x = 1;
        for(int j=1;j<=n;j++){
            printf("%d ",x);
            x=x+2;
        }
        
        printf("\n");
    }
return 0;
}