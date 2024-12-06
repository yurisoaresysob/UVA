#include <stdio.h>
#include <stdlib.h>

int indice_maior_valor(){
      for (i = 0; i < 50; i++){
        if (vetores_valores[i] == maior_valor)
    
}

int main() {
  int vetores_valores[50],quant_vezes_nove = 0, i;
  int maior_valor = 0;
  
  for (i = 0; i < 50; i++) {
    // Armazena no vetor valores aleatórios de 0 a 20
    vetores_valores[i] = rand() % 20;

    // Conta número de vezes que o 9 aparece
    if (vetores_valores[i] == 9) {
      quant_vezes_nove++;
      continue;
    }

    // Armazena o maior valor
    if (vetores_valores[i] > maior_valor)
      maior_valor = vetores_valores[i];
  }
 

  printf("O número 9 apareceu %d vezes\n", quant_vezes_nove);
  printf("O maior valor no vetor é %d", maior_valor);
  
  return 0;
}
