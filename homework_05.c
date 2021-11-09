#include <stdio.h>

int main ()

{
    int x;
    int z;
    int operador;
    int media; 

    scanf("%c",&x);
    scanf("%c",&y);
    scanf("%c",&operador);

    if (operador == '+'){
        media = (x+z);
        printf("media = %.0f", media);
    }

    else if (operador == '-'){
        media = (x-z);
        printf("media = %.0f", media);
    }

    else if (operador == '*'){
        media = (x*z);
        printf("media = %.0f", media);
    }

    else if (operador == '/'){
        media = (x/z);
        printf("media = %.0f", media);
    }
    
    else {
        printf("Operação não definida");
    }
    
  return 0;
}