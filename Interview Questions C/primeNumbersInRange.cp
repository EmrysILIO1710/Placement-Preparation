#include <stdio.h>
#include <stdlib.h>

int main(){
    int start, end;
    printf("Enter the range: ");
    scanf("%d %d", &start, &end);
    for(int i = start; i <= end; i++){
        int flag = 0;
        for(int j = 2; j <= i / 2; j++){
            if(i % j == 0){
                flag++;
                break;
            }
        }
        if(flag == 0 && i != 1){
            printf("%d ", i);
        }
    }
}