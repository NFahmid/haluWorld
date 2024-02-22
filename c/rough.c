#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        int count1 = 0;
        int count2 = 0;

        char s[a];
        for (int j = 0; j < a; j++) {
            scanf(" %c", &s[j]); 
        }

        for (int j = 0; j < a; j++) {
            if (s[j] == 'B') {
                count1 = j;
                break;
            }
        }

        for (int j = 0; j < a; j++) {
            if (s[j] == 'B') {
                count2 = j;
            }
        }

        printf("%d\n", count2 - count1 + 1);
        
    }

    return 0;
}
