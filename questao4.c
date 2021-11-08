#include<stdio.h>

int main() {

printf("Precione uma tecla: \n");
char c;
scanf("%c" , &c);

printf("A tecla precionada eh ");
if(c>=48 && c<= 57) {printf("um digito\n");
}
else if(c>=65 && c<=90 || c>=97 && c<=122) {printf("uma letra\n");
}
else {printf("um caractere especial");
}

  
  return 0;
}




