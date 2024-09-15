#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int temp = n, sum = 0;
    while(temp != 0){
        int fact = 1;
        for(int i=1; i<=temp%10; i++){
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if(sum == n){
        printf("Strong Number\n");
    }else{
        printf("Not Strong Number\n");
    }
}