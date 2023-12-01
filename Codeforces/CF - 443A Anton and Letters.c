#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int n;
    scanf("%d\n", &n);

    char s[1001];
    fgets(s, 1001, stdin);

    int length = strlen(s);

    bool letters[26] = {false};
    int count = 0;

    for (int i=0; i<length; i++){
        int x = s[i] - 'a';

        if (letters[x] == false && s[i] >= 'a' && s[i] <= 'z'){
            count++;
            letters[s[i] - 'a'] = true;
        }
    }

    printf("%d", count);
    return 0;
}
