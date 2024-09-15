#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[3][3], arr2[3][3], mul[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            mul[i][j] = 0;
            for(int k = 0; k < 3; k++){
                mul[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}