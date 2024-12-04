// Online C compiler to run C program online
#include <stdio.h>

float media_salarial(float salario, int totalTorcedor){
    float media;
    
    media = salario / totalTorcedor;
    
    return media;
}

int main() {
    int clubeFut, cidadeNatal, totalEntrevistados = 0, nascidoNiteroi = 0; 
    int quantTorcerFla = 0, quantTorcerVas = 0, quantTorcerFlu = 0, quantTorcerBot = 0, quantTorcerOutros = 0, tocerOutrosNaoNiteroi = 0;
    float salario;
    float salarioFla = 0, salarioVas = 0, salarioFlu = 0, salarioBot = 0, salarioOu = 0;
    float mediaSalFla, mediaSalVas, mediaSalFlu, mediaSalBot, mediaSalOu;
    
    do {
        printf("Qual o seu clube de futebol de preferência?\n");
        printf("1. Flamengo\n");
        printf("2. Vasco\n");
        printf("3. Fluminense\n");
        printf("4. Botafogo\n");
        printf("5. Outros\n");
        printf("0. Para finalizar\n");
        printf("Opção: ");
        scanf("%d", &clubeFut);
    
        if (clubeFut >= 1 && clubeFut <= 5){
            printf("\n\nQual seu salário?: ");
            scanf("%f", &salario);
            
            switch(clubeFut) {
                case 1:
                    quantTorcerFla++;
                    salarioFla = salarioFla + salario;
                    totalEntrevistados ++;
                    break;
                
                case 2:
                    quantTorcerVas = quantTorcerVas + 1;
                    salarioVas = salarioVas + salario;
                    totalEntrevistados++;
                    break;
                    
                case 3:
                    quantTorcerFlu++;
                    salarioFlu = salarioFlu + salario;
                    totalEntrevistados++;
                    break;
                
                case 4:
                    quantTorcerBot++;
                    salarioBot = salarioBot + salario;
                    totalEntrevistados++;                
                    break;
                    
                case 5:
                    printf("\n\nVocê nasceu em Niterói?\n");
                    printf("1. Sim\n");
                    printf("2. Não\n");
                    printf("Opção: ");
                    scanf("%d", &nascidoNiteroi);
                    
                    if (nascidoNiteroi == 1) {
                        tocerOutrosNaoNiteroi ++;    
                    }
                    
                    quantTorcerOutros ++;
                    salarioOu = salarioOu + salario;
                    totalEntrevistados ++;
                    break;
            }        
        } else if (clubeFut == 0) {
            printf("\nEntrevista finalizada!\n");
            break;
        } else {
            printf("Opção incorreta! Tente novamente...\n");
            continue;
        }
    
        
            
    } while(clubeFut != 0);
    
    mediaSalFla = media_salarial(salarioFla, quantTorcerFla);
    mediaSalVas = media_salarial(salarioVas, quantTorcerVas);
    mediaSalFlu = media_salarial(salarioFlu, quantTorcerFlu);
    mediaSalBot = media_salarial(salarioBot, quantTorcerBot);
    mediaSalOu = media_salarial(salarioOu, quantTorcerOutros); 

    printf("\nForam %d pessoas entrevistadas, sendo que:\n", totalEntrevistados);
    printf("%d torcem pro Flamengo e a média salarial é %.2f\n", quantTorcerFla, mediaSalFla);
    printf("%d torcem pro Vasco e a média salarial é %.2f\n", quantTorcerVas, mediaSalVas);
    printf("%d torcem pro Fluminense e a média salarial é %.2f\n", quantTorcerFlu, mediaSalFlu);
    printf("%d torcem para o Botafogo e a média salarial é %.2f\n", quantTorcerBot, mediaSalBot);
    printf("%d torcem para outros times e a média salarial é %.2f\n", quantTorcerOutros, mediaSalOu);
    printf("\nAlém disso, %d entrevistados nasceram em Niterói, mas não torcem para nenhum dos grandes times do Rio de Janeiro", tocerOutrosNaoNiteroi);

    return 0;
}
