#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char c[n + 1];  
    scanf("%s", c);

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (c[i] == c[i - 1]) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
