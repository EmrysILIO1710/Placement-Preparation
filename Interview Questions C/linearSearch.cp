#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    int n;
    scanf("%d", &n);
    int flag = 0, index;
    for(int i = 0; i < 5; i++){
        if(arr[i] == n){
            flag++;
            index = i;
            break;
        }
    }
    if(flag == 0){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index %d\n", index);
    }
}