// First class - Eng. Telecom. 
// Name: Cadore.AC

// ---------------------------------------------------

#include <stdio.h>  

int main(){  

    int sizeValue, shapesValue, processValue, processVariable1, processVariable2; 

    processValue = 1;

    char ch='C';

    printf("Entre com o tamanho do triângulo\n");

    scanf("%i", &sizeValue); 

    while(sizeValue >= 2){

        printf("Entre com o número de triângulos\n");

        scanf("%i", &shapesValue); 

        while(shapesValue >= 1){

            printf("Imprimindo os triâgulos...\n");

            while(processValue <= shapesValue){

                for(int processVariable1 = 0; processVariable1 < sizeValue; processVariable1++){

                    for(int processVariable2 = 0; processVariable2 <= processVariable1; processVariable2++){

                        printf("%c", ch);
                    }

                    printf("\n");
                }

                processValue++;   

            }

            return 0; 

        }

    }

}

