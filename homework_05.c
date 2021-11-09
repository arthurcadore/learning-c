#include <stdio.h>

int main ()

{
    int x;
    int z;
    int A;
    int media; 

    scanf("%c",&x);
    scanf("%c",&y);
    scanf("%c",&A);

    if (A == +){

        media = (x+z);
        printf("media = %.0f", media);
    }

    else if (A == -){

        media = (x-z);
        printf("media = %.0f", media);
    }

    else if (A == *){

        media = (x*z);
        printf("media = %.0f", media);
    }

    else if (A == /){

        media = (x/z);
        printf("media = %.0f", media);
    }
    
    else {

        printf("Operação não definida");
    }

  return 0;
}