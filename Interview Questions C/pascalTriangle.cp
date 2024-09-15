#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            printf(" ");
        }
        int val = 1;
        for(int j=0; j<=i; j++){
            printf("%d ", val);
            val = val * (i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}