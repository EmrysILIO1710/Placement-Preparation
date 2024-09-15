#include <stdio.h>
#include <stdlib.h>

int main(){
    char arr[100];
    printf("Enter the string: ");
    scanf("%s", arr);
    int len = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        len++;
    }
    int freq[len];
    for(int i = 0; i < len; i++){
        freq[i] = -1;
    }
    for(int i = 0; i < len; i++){
        if(freq[i] == 0){
            continue;
        }
        else{
            freq[i] = 1;
            for(int j = i + 1; j < len; j++){
                if(arr[i] == arr[j]){
                    freq[i]++;
                    freq[j] = 0;
                }
            }
        }
    }
    for(int i = 0; i < len; i++){
        if(freq[i] != 0){
            printf("%c occurs %d times\n", arr[i], freq[i]);
        }
    }
}