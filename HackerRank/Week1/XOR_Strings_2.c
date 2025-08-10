#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* strings_xor(char* s, char* t) {
    int len = strlen(s);
    char* result = (char*)malloc(sizeof(char) * (len + 1));

    for (int i = 0; i < len; i++) {
        if (s[i] == t[i]) {
            result[i] = '0';
        } else {
            result[i] = '1';
        }
    }
    result[len] = '\0'; 
    return result;
}

int main() {
    char s[10001]; 
    char t[10001];

    scanf("%s", s);
    scanf("%s", t);

    char* xor_result = strings_xor(s, t);
    printf("%s\n", xor_result);

    free(xor_result); 
}