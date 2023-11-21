#include <stdio.h>

int main() {
    int n;
    printf("Enter Number Of Rows: ");
    scanf("%d", &n);

    int nst = n - 1;
    int nsp = 1;
    int o = 65;

    for (int i = 1; i <= n; i++) {
        int a = o;
        for (int j = 1; j <= nst; j++) {
            printf("%c", a++);
        }
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        a--; // To maintain the correct character for the middle column
        for (int j = 1; j <= nst; j++) {
            if (j == n) {
                a--;
                continue;
            }
            printf("%c", a--);
        }

        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}
