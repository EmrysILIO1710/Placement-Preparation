#include <stdio.h>
#include <stdlib.h>

int decToBin(int n){
    if(n == 0){
        return  0;
    }
    else{
        return (n % 2) + 10 * decToBin(n / 2);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", decToBin(n));
}