#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        char c[8][8];
        
        for (int j=0; j<8; j++){
            for (int k=0; k<8; k++){
                c[j][k] = getchar();
            }
        }

        char temp[101];
        int l=0;

        for (int j=0; j<8; j++){
            for (int k=0; k<8; k++){
                if (c[j][k] != '.'  &&  c[j][k] != '\n'){
                    temp[l] = c[j][k];
                    l++;
                }
            }
        }

        temp[l] = '\0';

        printf("%s\n", temp);
    }
    return 0;
}