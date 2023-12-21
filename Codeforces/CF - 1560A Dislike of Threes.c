#include <stdio.h>


int check(int a){
        if (a%3==0)
            return 0;
        else if (a%10==3)
            return 0;

        return 1;
    }


int main() {
    int n;
    scanf("%d",&n);

    for (int j=0; j<n; j++){

        int b[1001];

        for (int i=0, j=1; i<1001; i++, j++){
            if (!check(j)){
                while (!check(j))
                    j++;
            }

            b[i] = j;
        }

        int x;
        scanf("%d", &x);
        x-=1;

        printf("%d\n",b[x]);
    }


    return 0;
}
