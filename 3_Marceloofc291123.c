#include <stdio.h>
#include <string.h>
float calcularTamanhoMedio(char str1[], char str2[]) {
    int tamanho1 = strlen(str1);
    int tamanho2 = strlen(str2);
    return (tamanho1 + tamanho2) / 2.0;
}
int main() {
    char string1[50], string2[50];
    printf("Digite a primeira string/\: ");
    fgets(string1, 50, stdin);
    string1[strcspn(string1, "\n")] = '\0'; 
    printf("Digite a segunda string: ");
    fgets(string2, 50, stdin);
    string2[strcspn(string2, "\n")] = '\0';
    float tamanhoMedio = calcularTamanhoMedio(string1, string2);
    printf("O tamanho medio entre as strings e: %.2f\n", tamanhoMedio);
    return 0;
}

