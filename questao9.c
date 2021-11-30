#include<stdio.h>

int main() {

int v[10], maior, menor;

for (int i=0; i<10; i++){
  printf("\nDigite um valor: \n");
  scanf("%i" , &v[i]);
}
maior= v[0];

for (int j=1; j<10; j++){
if(v[j]>maior){
  maior= v[j];
}
menor= v[0];

for (int x=1; x<10; x++){
  if(v[x]<menor){
    menor=v[x];
}
}
}
printf("O maior valor digitado foi: %i\n" , maior);
printf("O menor valor digitado foi: %i\n" , menor);

  return 0;
}