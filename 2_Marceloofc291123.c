#include <stdio.h>
unsigned long long int calcularFatorial(int numero) {
   unsigned long long int resultado = 1;
   if (numero < 0) {
      printf("Erro: Fatorial de um numero negativo nao e definido.\n");
      return 0;
   }
   for (int i = 1; i <= numero; i++) {
      resultado *= i;
   }
   return resultado;
}
int main() {
   int num;
   printf("Digite um numero inteiro positivo(+_+)): ");
   scanf("%d", &num);
   unsigned long long int fatorial = calcularFatorial(num);
   printf("O fatorial de %d e %llu.\n", num, fatorial);
   return 0;
}

