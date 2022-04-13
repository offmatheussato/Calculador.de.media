#include <iostream>

/*Programadores:Matheus Sato e Jennifer Albuquerque;*/

main() 
{
  //Declaração das variáveis
  float PI, TRAB1, TRAB2, P1, P2, media;
  
  //Entrada de dados
  printf("Digite a nota PI:");
  scanf("%f",&PI);

  printf("Digite a nota TRAB1:");
  scanf("%f",&TRAB1);
  
  printf("Digite a nota TRAB2:");
  scanf("%f",&TRAB2);
  
  printf("Digite a nota P1:");
  scanf("%f",&P1);
  
  printf("Digite a nota P2:");
  scanf("%f",&P2);
  
  //Processamento
  media = (PI*50)/100+(TRAB1*10)/100+(TRAB2*10)/100+(P1*15)/100+(P2*15)/100;
  
  //Saída
  printf("Media do aluno = %.1f\n",media);
  
		
}
