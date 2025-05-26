#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Nome:Gustavo Henrique da Silva


//****Desafio super trunfo, nível mestre****


//informações dos dois estados.
int main() {
  
  char estado1[3],estado2[3] ;
  char codigo_da_carta1[10],codigo_da_carta2[10] ;
  char nome_da_cidade1[50], nome_da_cidade2[50] ;
  int populacao1, populacao2;
  float area_em_km1, area_em_km2;
  float pontos_turisticos1, pontos_turisticos2 ;
  float PIB1, PIB2;
  float densidade1, densidade2;
  float PIB_per_capta1, PIB_per_capta2;

  float super_poder1, super_poder2;

  //Boas vindas ao jogo
     printf("-------------------------------------------------\n");
     printf("            Seja bem vindo ao jogo               \n");
     printf("-------------------------------------------------\n");



  //cadastro da primeira carta.

  printf("Super trunfo:\n");
  printf("\n cadrastro_da_carta1: \n");
  
  printf("sigla_do_estado:");
  scanf("%s", estado1);

  printf("codigo da carta:  ");
  scanf("%s", codigo_da_carta1);

  printf("nome da cidade:");
  scanf("%s", nome_da_cidade1);

  printf("populacao: ");
  scanf("%d", &populacao1);

  printf("area em km: ");
  scanf("%f", &area_em_km1);
 
  printf("pontos turisticos: ");
  scanf("%f", &pontos_turisticos1);

  printf("PIB: ");
  scanf("%f" ,&PIB1);
  //primeira carta feita com sucesso

     printf("\n-------------------------------------------------\n");
     printf("        primeira carta feita com sucesso           \n");
     printf("\n-------------------------------------------------\n");


  //cadastro da segunda carta.
  printf("super trunfo:\n");
  printf("\n cadrastro_da_carta2: \n");
  
  printf("sigla_do_estado:");
  scanf("%s", estado2);

  printf("codigo da carta:  ");
  scanf("%s", codigo_da_carta2);

  printf("nome da cidade:");
  scanf("%s", nome_da_cidade2);

  printf("populacao: ");
  scanf("%d", &populacao2);

  printf("area em km: ");
  scanf("%f", &area_em_km2);
 
  printf("pontos turisticos: ");
  scanf("%f", &pontos_turisticos2);

  printf("PIB: ");
  scanf("%f" ,&PIB2);

 //segunda carta feita com sucesso


     printf("\n-------------------------------------------------\n");
     printf("         segunda carta feita com sucesso           ");
     printf("\n-------------------------------------------------\n");

   
  
  // Cálculo da densidade populacional e PIB per capta
   densidade1= populacao1 / area_em_km1;
   densidade2= populacao2 / area_em_km2;
   PIB_per_capta1= PIB1 / populacao1;
   PIB_per_capta2= PIB2 / populacao2;


   //"super poder" resultado da soma dos fatores.

   super_poder1 = populacao1 + area_em_km1 + PIB1 + pontos_turisticos1 + PIB_per_capta1 + densidade1;

   super_poder2= populacao2 + area_em_km2 + PIB2 + pontos_turisticos2 + PIB_per_capta2 + densidade2;

   

  //exibição de resultados da primeira carta.

     printf("\n-------------------------------------------------\n");
     printf("        primeira carta primeira carta informações  ");
     printf("\n-------------------------------------------------\n");


  printf("estado: %s\n", estado1);
  printf("codigo da carta: %s\n", codigo_da_carta1);
  printf("nome da cidade: %s\n", nome_da_cidade1);
  printf(" populacao: %d\n",populacao1);
  printf("area em km: %.2f\n", area_em_km1);
  printf("prontos turisticos:%.2f\n", pontos_turisticos1);
  printf("PIB: %.2f\n", PIB1);
  printf("densidade1: %.2f\n", densidade1);
  printf("PIB_per_capta1: %.2f\n",PIB_per_capta1 );
  printf("super poder1: %.2f\n", super_poder1);

  


  //exibição de resultados da segunda carta.

     printf("\n-------------------------------------------------\n");
     printf("        segunda carta primeira carta informações   ");
     printf("\n-------------------------------------------------\n");

  printf("estado: %s\n", estado2);
  printf("codigo da carta: %s\n", codigo_da_carta2);
  printf("nome da cidade: %s\n", nome_da_cidade2);
  printf(" populacao: %d\n",populacao2);
  printf("area em km: %.2f\n", area_em_km2);
  printf("prontos turisticos:%.2f\n", pontos_turisticos2);
  printf("PIB: %.2f\n", PIB2);
  printf("densidade2: %.2f\n", densidade2);
  printf("PIB_per_capta2: %.2f\n", PIB_per_capta2);
  printf("Super Poder 2: %.2f\n", super_poder2);

  //super poder comparação
  printf("super poder 1: %.2f\n", super_poder1);
  printf("super poder 2: %.2f\n", super_poder2);

  if(super_poder1 > super_poder2){
    printf("Resultado: super poder 1 é maior!\n");
  }else if(super_poder2 > super_poder1) {
    printf("Resultado: super poder 2 é maior!\n");
  } else {
    printf("Resultado:empate!\n");
  }
 
 //Menu

  int opcao;
     printf("\n-------------------------------------------------\n");
     printf("        escolha um atributo para comparar          ");
     printf("\n-------------------------------------------------\n");

  printf("1. população\n");
  printf("2.área\n");
  printf("3. PIB\n");
  printf("4. pontos turisticos\n");
  printf("5. densidade demográfica (menor vence)\n");
  printf("6. PIB per capta\n");
  printf("7. Comparar atributos diferentes.\n");
  printf("\ndigite a opção: ");
  scanf("%d", &opcao);

  printf("\ncomparando %s vs %s\n", nome_da_cidade1, nome_da_cidade2);
  
  switch(opcao){

    case 1:
        printf("população: %d vs %d\n", populacao1, populacao2);
      if(populacao1 > populacao2)
        printf("%s venceu!\n", nome_da_cidade1);
      else if ( populacao2 > populacao2)
        printf ("%s venceu!\n", nome_da_cidade2);
      else
      printf("empate!\n");
      break;

      case 2:
          printf("Área: %.2f vs %.2f\n",area_em_km1, area_em_km2);
        if(area_em_km1 > area_em_km2)
          printf("%s venceu!!\n", nome_da_cidade1);
        else if(area_em_km2 > area_em_km1)
          printf("%s venceu!!\n", nome_da_cidade2);
        else
          printf("empate!!!\n");
        break;

      case 3:
        printf("PIB: %.2f vs %.2f\n", PIB1, PIB2);
       if(PIB1 > PIB2)
        printf("%s venceu!!\n", nome_da_cidade1);
       else if(PIB2 > PIB1)
        printf("%s venceu!!\n", nome_da_cidade2);
       else
        printf("empate!!\n");
       break;

      case 4:
        printf("pontos turisticos: %.2f vs %.2f\n", pontos_turisticos1, pontos_turisticos2);
      if (pontos_turisticos1 > pontos_turisticos2)
         printf("%s venceu!\n", nome_da_cidade1);
      else if (pontos_turisticos2 > pontos_turisticos1)
         printf("%s venceu!\n", nome_da_cidade2);
      else
         printf("empate!!\n");
      break;
      
      case 5:
         printf("densidade demográfica: %.2f vs %.2f\n", densidade1, densidade2);
       if (densidade1 < densidade2)
         printf("%s venceu!! (menor densidade)\n", nome_da_cidade1);
       else if(densidade2 < densidade1)
         printf("%s venceu!!( menor densidade)\n", nome_da_cidade2);
       else
         printf("empate!!\n");
       break;
       
       case 6:
         printf("PIB per capita: %.6f vs %.6f\n", PIB_per_capta1, PIB_per_capta2);
       if (PIB_per_capta1 > PIB_per_capta2)
         printf ("%s venceu!\n", nome_da_cidade1);
       else if ( PIB_per_capta2 > PIB_per_capta1)
         printf("%s venceu!\n", nome_da_cidade2);
       else
         printf("empate!!\n");
       break;





       //escolha um atributo
       case 7:{
        char atributo1, atributo2;
        float valor1_attr1, valor2_attr1;
        float valor1_attr2, valor2_attr2;
        int resultado1 = 0, resultado2 = 0;
        

        
         printf("\n-------------------------------------------------\n");
         printf("       ESCOLHA DOIS ATRIBUTOS DIFERENTES             ");
         printf("\n-------------------------------------------------\n");
       
         printf("escolha o primeiro atributo: \n");
         printf("A - Populacao\n");
         printf("B - Area\n");
         printf("C - PIB\n");
         printf("D - Pontos Turisticos\n");
         printf("E - Densidade\n");
         printf("F - PIB per capita\n");


         printf("\nEscolha a letra referente ao primeiro atributo: ");
         scanf(" %c", &atributo1);

         
         printf("\nEscolha a letra referente ao segundo atributo: ");
         scanf(" %c", &atributo2);

         if (atributo1 == atributo2){
              printf("ERRO: OS DOIS ATRIBUTOS DEVEM SER DIFERENTES!!!\n");
              break;
         }
         switch (atributo1)
         {
         case 'A':
         case 'a':
          valor1_attr1 = populacao1;
          valor2_attr1= populacao2;
          resultado1 = valor1_attr1 > valor2_attr1;
          break;

          case 'B':
          case 'b':
          valor1_attr1 = area_em_km1;
          valor2_attr1 = area_em_km2;
          resultado1 = valor1_attr1 > valor2_attr1;
          break;

          case 'C':
          case 'c':
          valor1_attr1 = PIB1;
          valor2_attr1 = PIB2;
          resultado1 = valor1_attr1 > valor2_attr1;
          break;

          case 'D':
          case 'd':
          valor1_attr1 = pontos_turisticos1;
          valor2_attr1 = pontos_turisticos2;
          resultado1 = valor1_attr1 > valor2_attr1;
          break;

          case 'E':
          case 'e':
          valor1_attr1 = densidade1;
          valor2_attr1 = densidade2;
          resultado1 = valor1_attr1 < valor2_attr1;
          break;

          case 'F':
          case 'f':
          valor1_attr1 = PIB_per_capta1;
          valor2_attr1 = PIB_per_capta2;
          resultado1 = valor1_attr1 > valor2_attr1;
          break;
         
          default:
          printf("ATRIBUTO 1 INVALIDO\n");
          break;
         }
         
         switch (atributo2)
         {
         case 'A':
         case 'a':
          valor1_attr2 = populacao1;
          valor2_attr2 = populacao2;
          resultado2 = valor1_attr1 > valor2_attr1;
          break;

          case 'B':
          case 'b':
          valor1_attr2 = area_em_km1;
          valor2_attr2 = area_em_km2;
          resultado2 = valor1_attr1 > valor2_attr1;
          break;

          case 'C':
          case 'c':
          valor1_attr2 = PIB1;
          valor2_attr2 = PIB2;
          resultado2 = valor1_attr1 > valor2_attr1;
          break;

          case 'D':
          case 'd':
          valor1_attr2 = pontos_turisticos1;
          valor2_attr2 = pontos_turisticos2;
          resultado2 = valor1_attr1 > valor2_attr1;
          break;

          case 'E':
          case 'e':
          valor1_attr2 = densidade1;
          valor2_attr2 = densidade2;
          resultado2 = valor1_attr1 < valor2_attr1;
          break;

          case 'F':
          case 'f':
          valor1_attr2 = PIB_per_capta1;
          valor2_attr2 = PIB_per_capta2;
          resultado2 = valor1_attr1 > valor2_attr1;
          break;
         
          default:
          printf("ATRIBUTO 2 INVALIDO\n");
          break;
         }

         printf("\n-------------------------------------------------\n");
         printf("                  RESULTADO FINAL                    ");
         printf("\n-------------------------------------------------\n");
         
         if (resultado1 && resultado2){
          printf("VITÓRIA! sua cidade venceu nos dois atributos.\n");
         } else if (!resultado1 && !resultado2){
            printf("Derrota! A outra cidade venceu nos dois atributos.\n"); 
         }else {
            printf("Empate! Cada cidade venceu em um atributo.\n");
         }
         break;


       }








 
}

return 0;


}






