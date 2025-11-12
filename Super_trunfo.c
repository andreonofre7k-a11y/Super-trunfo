#include <stdio.h>

int main(){
    printf("Carta 1: \n");

   char estado = 'A';
   char codigo[] = "A01";
   char cidade[50] = "sao paulo";
   int populacao = 12325000;
   int pontos_turisticos = 50;
   float area = 1521.11;
   float pib = 699.28;

   printf("Estado: %c\n", estado);
   printf ("Código: %s\n", codigo);
   printf("Cidade: %s\n", cidade);
   printf("População: %d habitantes\n", populacao);
   printf("Pontos turísticos: %d\n", pontos_turisticos);
   printf("Área: %.2f km²\n", area);
   printf("PIB: %.2f bilhões de reais\n", pib);


   return 0;
}
