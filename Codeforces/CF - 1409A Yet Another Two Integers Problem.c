#include <stdio.h>

int main() {
    int n;
    int a,b;
    scanf("%d",&n);

    for (int i=0; i<n; i++){
        scanf("%d %d",&a,&b);
        int j = a - b;
        if (j==0){
            printf("0\n");
            continue;
        }
        if (j<0)
            j = j - j - j;
        if (j%10==0){
            printf("%d",j/=10);
            continue;
        }
        j/=10;
        j++;
        printf("%d\n",j);
    }

    return 0;
}