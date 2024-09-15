#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int decimal = 0, p = 1;
    for(int i = n; i > 0; i /= 10){
        decimal = decimal + ((i % 10) * p);
        p *= 2;
    }
    printf("%d", decimal);
}