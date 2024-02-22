#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int replace_with_sum(int n) {
    if (n < 10) {
        return n;
    } else {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int k;
        scanf("%d", &k);
        int sum = 0;

        for (int j = 1; j <= k; j++) {
            sum += replace_with_sum(j);
        }

        printf("%d\n", sum);
    }
    return 0;
}
