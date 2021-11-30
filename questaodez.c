#include <stdio.h>

#define TAM 41

int main(){

  int num, bin[TAM], aux;

  printf("Digite um numero: \n");
  scanf("%d" , &num);

  for(aux= TAM -1; aux>=0; aux--){
    bin[aux]= (num % 2)==0 ? 0 : 1;
    num= num/2;
  }

  printf("\n\t");
  for(aux=0; aux < TAM; aux++){
    printf("%d\n" , bin[aux]);
  
  }



  return 0;
}