#include <stdio.h>
int operacaoNumeros(int num1, int num2) {
    int resultado;
    if(num1 < num2) {
        resultado = num1 + num2;
    }
    else if(num1 == num2) {
        resultado = num1 * num2;
    }
    else {
        resultado = num1 - num2;
    }
    return resultado;
}
int main() {
    int numero1, numero2, resultado;

    printf("Digite o primeiro ¨numero¨: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    resultado = operacaoNumeros(numero1, numero2);

    printf("O resultado da operacao e: %d\n", resultado);

    return 0;
}

