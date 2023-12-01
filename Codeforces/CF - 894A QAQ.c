#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int len = strlen(s);

    int countQ = 0;
    int countA = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == 'Q') {
            countQ++;
        } else if (s[i] == 'A') {
            countA++;
        }
    }

    int countQAQ = 0;

    for (int i = 0; i < len - 2; i++) {
        if (s[i] == 'Q') {
            for (int j = i + 1; j < len - 1; j++) {
                if (s[j] == 'A') {
                    for (int k = j + 1; k < len; k++) {
                        if (s[k] == 'Q') {
                            countQAQ++;
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", countQAQ);

    return 0;
}
