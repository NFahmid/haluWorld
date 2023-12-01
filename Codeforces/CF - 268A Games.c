#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int a1[n];
    int a2[n];

    for (int i=0; i<n; i++){
        scanf("%d %d", &a1[i], &a2[i]);
    }

    int count = 0;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (a1[j]==a2[i]){
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
