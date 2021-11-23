// First class - Eng. Telecom. 
// Name: Cadore.AC

// ---------------------------------------------------

#include <stdio.h>  // including library "stdio"

int main(){  // calling main fuction to code 

    int sizeValue, shapesValue, processValue, i, j; // creating 3 variables to use in math operation 

    processValue = 1;

    char ch='A';

    printf("Entre com o tamanho do triângulo\n");

    scanf("%i", &sizeValue); // importing values and including into the variable "sizeValue"

    while(sizeValue >= 2){

        printf("Entre com o número de triângulos\n");

        scanf("%i", &shapesValue); // importing values and including into the variable "shapesValue"

            while(shapesValue >= 1){

                printf("Aqui estão os triâgulos:\n");

                    while(processValue > 2){

                          printf("(A)\n\n");

                            for(int i = 0; i <= 9;i++){

                                    for(int j = 0;j <= i;j++){

                                        printf("*");
                                    }

                                printf("\n");
                            }

                         processValue++;   

     
                    }

                


             return 0; 

            }

    }

}

