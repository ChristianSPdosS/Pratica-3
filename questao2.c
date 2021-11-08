#include<stdio.h>

int main() {

printf("Defina um valor: \n");
float valor;
scanf("%f" , &valor);

printf("O valor com desconto eh: ");
if (valor<=100) {printf("%f\n" , valor - valor * 0.01);
}
else if(valor>100 && valor<=500) {printf("%f\n" , valor - valor * 0.05);
}
else {printf("%f\n" , valor - valor * 0.1);
}


  return 0;
}