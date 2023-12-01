#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int initial[n];
    int target[n];

    for (int i = 0; i < n; i++) {
        scanf("%1d", &initial[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%1d", &target[i]);
    }

    int moves = 0;
    for (int i = 0; i < n; i++) {
        int diff = abs(target[i] - initial[i]);
        moves += diff > 5 ? 10 - diff : diff;
    }

    printf("%d\n", moves);

    return 0;
}