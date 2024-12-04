#include <stdio.h>

void soma(float a, float b) {
    
    // Soma valores
    float soma = a + b;
    
    printf("\nA soma %.2f + %.2f é %.2f\n", a, b, soma);

}

void subtrai(float a, float b) {
    
    // Subtrai valores
    float sub = a - b;
    printf("\nA subtração %.2f - %.2f é %.2f\n", a, b, sub);

}

void multiplica(float a, float b) {
    
    // Multiplica valores
    float multi = a * b;
    printf("\nA multiplicação %.2f x %.2f é %.2f\n", a, b, multi);
    
}

void divide(float a, float b) {
    
    // Divide valores
    float divisao = a / b;
    printf("\nA divisão %.2f / %.2f é %.2f\n", a, b, divisao);
    
}

int main() {
    float a, b;
    int choice;
    
    do {
        printf("1. Somar\n2. Subtrair\n3. Dividir\n4. Multiplicar\n5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);
        
        // Verifica se entrada do usuário é válida
        if (choice >= 1 && choice <= 4){
            printf("Digite o primeiro número: ");
            scanf("%f", &a);
            printf("\nDigite o segundo número: ");
            scanf("%f", &b);
        } else if (choice == 5) {
            printf("Programa encerrado!");
            break;
        } else {
            printf("Opção inválida!\n");
            continue;
        }
        
        // Realiza operação, conforme entrada do usuário
        switch (choice) {
            case 1:
                soma(a, b);
                break;
            
            case 2:
                subtrai(a, b);
                break;
                
            case 3:
                divide(a, b);
                break;
                
            case 4:
                multiplica(a, b);
                break;
            
        }
                
                
        } while(choice != 5);
    
    return 0;
}
