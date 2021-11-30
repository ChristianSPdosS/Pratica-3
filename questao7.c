#include <stdio.h>

int main() {

int i;
int n=10;
int t1=0;
int t2=1;
int prox;

printf("\nSerie de Fibonacci \n");

for (i=1; i<=n; i++){
  printf("%i, " , t1);
  prox= t1 + t2;
  t1= t2;
  t2= prox;
}



  return 0;
}