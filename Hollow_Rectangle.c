#include <stdio.h>

int main() {
    // Hollow Rectangle of 5x3

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || i == 2 || j == 0 || j == 4) {
                printf("* ");
            } else {
                printf("  "); // Print spaces for the hollow part
            }
        }
        printf("\n");
    }

    return 0;
}
