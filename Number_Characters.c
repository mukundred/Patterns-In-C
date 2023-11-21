#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number Of Rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int c = 65;
        int x = 1;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ", c);
                c++;
            }

            else
            {
                printf("%d ", x);
                x++;
            }
        }
        printf("\n");
    }
    return 0;
}