#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000

int main(){
    char a[MAX_SIZE];
    fgets(a, MAX_SIZE, stdin);

    int len = strlen(a);
    if (a[len - 1] == '\n') {
        a[--len] = '\0'; // remove newline character
    }

    int i;
    for (i = 0; i < len;){
        if (a[i] == '1' && a[i+1] == '4' && a[i+2] == '4'){
            i += 3;
        }
        else if (a[i] == '1' && a[i+1] == '4'){
            i += 2;
        }
        else if (a[i] == '1'){
            i += 1;
        }
        else {
            printf("NO\n");
            return 0;
        }
    }

    if (i == len) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}