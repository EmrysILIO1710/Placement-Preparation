#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    //length of the string
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }
    printf("Length of the string: %d\n", len);

    //copying the string
    char copy[50];
    int i;
    for(i = 0; str[i] != '\0'; i++){
        copy[i] = str[i];
    }
    copy[i] = '\0';
    printf("Copied string: %s\n", copy);

    //convert to uppercase
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    printf("Uppercase string: %s\n", str);

    //convert to lowercase
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    printf("Lowercase string: %s\n", str);

    //reverse the string
    for(int i = 0; i < len / 2; i++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);

    //concatenate two strings
    char str2[50];
    printf("Enter the second string: ");
    scanf(" %[^\n]", str2);
    int j = 0;
    for(int i = len; str2[j] != '\0'; i++){
        str[i] = str2[j];
        j++;
    }
    str[len + j] = '\0';
    printf("Concatenated string: %s\n", str);
}