#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    scanf("%s", &s);

    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }

    printf("%s", s);
}
