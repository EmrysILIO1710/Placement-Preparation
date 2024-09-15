#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #define res[100]

char res[100];

char* findFreq(char *s) {
    int len = strlen(s);
    char viewed[len + 1];
    // char res[len];
    int resindex = 0;
    int viewedIndex = 0;

    for (int i = 0; i < len; i++) {
        // checking if s[i] is in viewed or not
        int flag = 1;
        for (int j = 0; j < viewedIndex; j++) {
            if (viewed[j] == s[i]) {
                flag = 0;
                break;
            }
        }
        if (!flag) {
            continue; // if s[i] is present in viewed, move on to next iteration
        } else {
            viewed[viewedIndex++] = s[i];
        }
        // counting the frequency of occurrence of s[i] in s
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }
        res[resindex++] = s[i];
        res[resindex++] = count + '0';
    }
    res[resindex] = '\0';
    viewed[viewedIndex] = '\0'; // null-terminate the viewed array
    // printf("%s", res);
    return res;
}

int main(){
    char s[50];
    scanf("%[^\n]", s);
    // printf("%s", s);
    printf("%s", findFreq(s));
}