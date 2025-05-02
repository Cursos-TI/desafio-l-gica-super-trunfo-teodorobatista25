#include <stdio.h>

int main(){

               //*** Carta A - SALVADOR ***;
    int opcao;
    char Estado1;
    char Carta1[40];
    char Cidade[50];
    int Populacao1 = 2418.000;
    int Turismo1 = 20;
    unsigned Area1 = 693.442;
    unsigned PIB1 = 62954.000;
    unsigned Densidade1 = (float) 3486;
    float Percapita1 = (float) PIB1 / Populacao1;
    float SuperPoder1 = (float) Populacao1 + Turismo1 + Area1 + PIB1 + Densidade1 + Percapita1;



               //*** Carta B - ILHÉUS ***;

    
    char Estado2;
    char Carta2[40];
    char Cidade2[50];
    int Populacao2 = 178.649;
    int Turismo2 = 6;
    unsigned Area2 = 1.585;
    unsigned PIB2 = 5163.622;
    unsigned Densidade2 = (float) 112;
    float Percapita2 = (float) PIB2 / Populacao2;         
    float SuperPoder2 = (float) Populacao2 + Turismo2 + Area2 + PIB2 + Densidade2 + Percapita2;
     
                                // ** USO DO SWITCH **
    printf("Digite uma Opção:\n");
    printf("1.Verificar a População Vencedora\n");
    printf("2.Verificar Numeros Pontos Turisticos de Ilheus\n");
    printf("3.Vizualizar a menor Densidade Populacional\n");
    scanf("%d", &opcao);      
    
    switch (opcao)
    {
    case 1:
        printf("digite a População\n");
        scanf("%d", &Populacao1);
        if (Populacao1 > Populacao2)
        {
            printf("População de Salvador venceu!");
        }
        else{
            printf("Ilheus não Venceu!\n");
        }
        
        
        break;
    case 2:
        printf("ILheus Contém 6 Pontos Turisticos mais Visitados\n");
        
        break;
    case 3:
        printf("Digite a Densidade Populacional:\n");
        scanf("%u", &Densidade1);
        if (Densidade1 > Densidade2)
        {
            printf("Densidade Populacional de ilheus Venceu!!\n");
        }else{
            printf("Densidade Populacional de Salvador Perdeu!!\n");
        }
        
        
        break;
    
        
    
     default:
    printf(" Opção Invalida!\n");
        break;
    }
    return 0;


    
}

