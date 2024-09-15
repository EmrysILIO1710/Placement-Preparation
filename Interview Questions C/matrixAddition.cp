#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[3][3], arr2[3][3], sum[3][3];
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
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}