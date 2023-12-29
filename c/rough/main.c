#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);

    for (int i=0; i<n; i++){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);

        int j=1;

        while (c!=0){
            if (c%a==b){
                printf("%d\n", c);
                j = 0;
                break;
            }
            c--;
        }
        if (j)
            printf("0\n");
    }


    return 0;
}
