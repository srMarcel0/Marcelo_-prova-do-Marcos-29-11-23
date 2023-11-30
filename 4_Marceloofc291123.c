#include <stdio.h>
#include <string.h>
float calcularTamanhoMedio(char** vetorStrings) {
    int somaTamanho = 0;
    int numStrings = 0;
    for (int i = 0; vetorStrings[i] != NULL; i++) {
        somaTamanho += strlen(vetorStrings[i]);
        numStrings++;
    }
    float tamanhoMedio = (float)somaTamanho / numStrings;
    return tamanhoMedio;
}
int main() {
    char* vetorStrings[] = {"Hello", "World", "!", NULL};
    float tamanhoMedio = calcularTamanhoMedio(vetorStrings);
    printf("O tamanho medio das strings e: %.2f\n", tamanhoMedio);
    return 0;
}
