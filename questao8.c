#include <stdio.h>

int main(){

int x;
int r=1;
printf("Informe um numero: \n");
scanf("%d" , &x);

for(; x>=1; --x ) {
  r *= x;
}

printf("O fatorial eh: %i\n" , r );



  return 0;
}