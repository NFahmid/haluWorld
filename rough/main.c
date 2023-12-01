#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n];

    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    int x,y;
    int sre = 0;
    int dim = 0;

    for (int i=0; i<n/2; i++){
        x = 0;
        y = n-1;

        if (i%2==0){
            if (a[x]>a[y]){
                sre+=a[x];
                dim+=a[y];
            }
            else {
                sre+=a[x];
                dim+=a[y];
            }
        }
        else if (i%2!=0){
            if (a[x]>a[y]){
                dim+=a[x];
                sre+=a[y];
            }
            else {
                sre+=a[x];
                dim+=a[y];
            }
        }

        x++;
        y--;
    }

    printf("%d %d", sre, dim);

    return 0;
}
