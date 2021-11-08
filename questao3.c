#include<stdio.h>

int main() {

printf("Defina uma nota de 1 a 5: \n");
int nota;
scanf("%d" , &nota);

if(nota == 1) {printf("Ruim\n");
}
else if(nota == 2) {printf("Insuficiente\n");
}
else if(nota == 3) {printf("Suficiente\n");
}
else if(nota == 4) {printf("Bom\n");
}
else if(nota == 5) {printf("Otimo\n");
}
else {printf("Nota invalida\n");
}


  return 0;
}



