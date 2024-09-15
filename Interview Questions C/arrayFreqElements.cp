#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10];
    int freq[10] = {0};
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(int i = 0; i < 10; i++){
        if(freq[i] == 0){
            continue;
        }
        else{
            freq[i] = 1;
            for(int j = i + 1; j < 10; j++){
                if(arr[i] == arr[j]){
                    freq[i]++;
                    freq[j] = 0;
                }
            }
        }
    }
    for(int i = 0; i < 10; i++){
        if(freq[i] != 0){
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
}