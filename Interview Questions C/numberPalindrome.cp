#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int temp = n, rev = 0;
    while(temp != 0){
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    if(rev == n){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    return 0;
}