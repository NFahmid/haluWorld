#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int k=0; k<n; k++){
        char c1[11];
        char c2[11];

        strcpy(c1, "codeforces");

        int j=0;
        scanf("%s", c2);

        for (int i=0; i<10; i++){
            if (c2[i]!=c1[i])
                j++;
            }

        printf("%d\n", j);
    }
}
