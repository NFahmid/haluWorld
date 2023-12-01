#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    getchar(); // Consume the newline character after reading n

    for (int i = 0; i < n; i++) {
        char a[8][8];

        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                scanf(" %c", &a[j][k]);  // Add a space before %c to skip whitespace
            }
        }

        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                if (a[j][k] == '#') {
                    if (j > 0 && k > 0 && j < 7 && k < 7 &&
                        a[j - 1][k - 1] == '#' && a[j - 1][k + 1] == '#' &&
                        a[j + 1][k - 1] == '#' && a[j + 1][k + 1] == '#') {
                        printf("%d %d\n", j + 1, k + 1);  
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
