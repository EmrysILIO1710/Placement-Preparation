#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    int secondMax = min, secondMin = max;
    for(int i=0; i<n; i++){
        if(arr[i] > secondMax && arr[i] < max){
            secondMax = arr[i];
        }
        if(arr[i] < secondMin && arr[i] > min){
            secondMin = arr[i];
        }
    }
    printf("Second Maximum: %d\n", secondMax);
    printf("Second Minimum: %d\n", secondMin);
    return 0;
}