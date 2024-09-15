#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int sum = 0, temp = n;
    int count = 0;
    while(temp != 0){
        count++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0){
        int t = 1;
        for(int i = 1; i <= count; i++){
            t *= (temp % 10);
        }
        sum += t;
        temp /= 10;
    }
    if(sum == n){
        printf("Armstrong Number\n");
    }else{
        printf("Not Armstrong Number\n");
    }
}