#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char c1[101];
    char c2[101];
    char c3[101];

    scanf("%s", c1);
    scanf("%s", c2);
    scanf("%s", c3);

    int length1 = strlen(c1);
    int length2 = strlen(c2);
    int length3 = strlen(c3);

    if ((length1+length2) != length3){
        printf("NO\n");
        return 0;
    }

    int a1[26] = {0};
    int a2[26] = {0};

    int x;

    for (int i=0; i<length1; i++){
        x = c1[i] - 'A';
        a1[x]++;
    }

    for (int i=0; i<length2; i++){
        x = c2[i] - 'A';
        a1[x]++;
    }

    for (int i=0; i<length3; i++){
        x = c3[i] - 'A';
        a2[x]++;
    }

    for (int i=0; i<26; i++){
        if (a1[i] != a2[i]){
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");


    return 0;
}
