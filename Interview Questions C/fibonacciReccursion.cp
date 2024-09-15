#include <stdio.h>
#include <stdlib.h>

void fibo(int a, int b, int n){
    if(n == 1){
        printf("%d ", a);
    }
    else{
        printf("%d ", a);
        fibo(b, a + b, n - 1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    fibo(0, 1, n);
}