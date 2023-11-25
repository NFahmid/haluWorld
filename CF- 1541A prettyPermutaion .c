#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        int a;
        scanf("%d", &a);
        int b[a];
        for (int j=0; j<a; j++){
            b[j] = j+1;
        }

        if(a%2==0){
            for(int j=0; j<a-1; j+=2){
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }

        if (a%2!=0){
            int temp1 = b[0];
            int temp2 = b[1];
            b[0] = b[2];
            b[1] = temp1;
            b[2] = temp2;

            for (int j=3; j<a-1; j+=2){
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }

        for (int j=0; j<a; j++){
            printf("%d ", b[j]);
        }
        printf("\n");
    }
}
