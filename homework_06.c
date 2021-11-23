// First class - Eng. Telecom. 
// Name: Cadore.AC

// ---------------------------------------------------

#include <stdio.h> 

int main(){  

    int sizeValue, shapesValue, processValue, i, j; 

    processValue = 1;

    char ch='A';

    printf("Entre com o tamanho do triângulo\n");

    scanf("%i", &sizeValue); 

    while(sizeValue >= 2){

        printf("Entre com o número de triângulos\n");

        scanf("%i", &shapesValue); 

            while(shapesValue >= 1){

                printf("Aqui estão os triâgulos:\n");

                    while(processValue <= shapesValue){

                            for(int i = 0; i < sizeValue; i++){

                                    for(int j = 0;j <= i;j++){

                                     printf("*");
                                 }

                             printf("%c", ch);
                        }

                     processValue++;   

                }

             return 0; 

         }

    }

}

