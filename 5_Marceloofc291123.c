#include<stdio.h>
#include<string.h>
int isPalindrome(char *str) {
    int length = strlen(str);
    int i;
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("A string e um palindromo.\n");
    } else {
        printf("A string NAO e um palindromo.\n");
    }
    return 0;
}
