#include <stdio.h>

int main(){

               //*** Carta A - SALVADOR ***;

    char Estado1;
    char Carta1[40];
    char Cidade[50];
    int Populacao1 = 2418.000;
    int Turismo1 = 20;
    unsigned Area1 = 693.442;
    unsigned PIB1 = 62954.000;
    unsigned Densidade1 = (float) Populacao1 / Area1;
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
    unsigned Densidade2 = (float) Populacao2 / Area2;
    float Percapita2 = (float) PIB2 / Populacao2;         
    float SuperPoder2 = (float) Populacao2 + Turismo2 + Area2 + PIB2 + Densidade2 + Percapita2;

    printf("Populacao1 > Populacao2: %d - CARTA A01 VENDEU\n", Populacao1 > Populacao2);
    printf("Turismo1 < Turismo2: %d - CARTA B01 VENCEU\n", Turismo1 < Turismo2);
    printf("Area1 >= Area2: %u - CARTA A01 VENCEU\n", Area1 >= Area2);
    printf("PIB1 <= PIB: %u - CARTA B01 VENCEU\n", PIB1 <= PIB2);
    printf("Densidade1 == Densidade2: %u - CARTA B02 VENCEU\n", Densidade1 == Densidade2);
    printf("Percapita1 != Percapita2: %u - CARTA A02 VENCEU\n", Percapita1 != Percapita2);
    printf("SuperPoder1 > SuperPoder2: %d - CARTA A01 VENCEU\n", SuperPoder1 > SuperPoder2);

    // COMPLEMENTAREI COM ESTRUTURA EM if - else, USANDO AS COMPARACÕES DAS DUAS CIDADES.

    // CONDIÇÃO if PARA POPULÇÃO VENCEU
    if (Populacao1 > Populacao2){
        printf("Salvador Venceu na População\n");}

    // CONDIÇÃO else PARA POPULAÇÃO NÃO VENCEU.
        else {
            printf("Salvador Não Venceu na População\n");}


                   // ** Turismo **
        if (Turismo1 < Turismo2){
        printf("Ilhéus Não Venceu em Turismo\n");}
        else{
            printf("Ilhéus  Venceu em Turismo\n");}

 
                 // ** Area por Km² **
        if (Area1 >= Area2){
            printf("Salvador Venceu em Area por Km²\n");}
        else{
            printf("Salvador Não Venceu em Area por km²\n");}


                        // ** PIB **
             if (PIB1 <= PIB2){
                printf("Ilhéus Não Venceu em PIB\n");}
             else{
                printf("Ilhéus Venceu em PIB\n");}


                      // ** Densidade Populacional **
            if (Densidade1 == Densidade2){
                printf("Ilhéus Não Venceu na Denssidade Poupulacional\n");}
            else{
                printf("Ilhéus Venceu na Densidade Populacional\n");}

                          // ** Percapita **
            if (Percapita1 != Percapita2){
                printf("Salvador Venceu no Percapita\n");}
            else{
                printf("Salvador Não Venceu no Percapita\n");}


                          // ** Super Poder **
            if (SuperPoder1 > SuperPoder2){
               printf("Salvador Venceu no Super Poder\n");}
            else{
                printf("Salvador Não Venceu no Super Poder\n");}   
                          
                  

             
            
            
        
    

    
    
    
    
    
    
    
    return 0;

    

}
