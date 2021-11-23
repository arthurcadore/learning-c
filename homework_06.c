// First class - Eng. Telecom. 
// Name: Cadore.AC

// ---------------------------------------------------

#include <stdio.h>  // including library "stdio"

int main(){  // calling main fuction to code 

    int sizeValue, shapesValue, processValue, processVariable1, processVariable2; // creating 3 variables to use in math operation 

    processValue = 1;

    char ch='B';

    printf("Entre com o tamanho do triângulo\n");

    scanf("%i", &sizeValue); // importing values and including into the variable "sizeValue"

    while(sizeValue >= 2){

        printf("Entre com o número de triângulos\n");

        scanf("%i", &shapesValue); // importing values and including into the variable "shapesValue"

            while(shapesValue >= 1){

                printf("Aqui estão os triâgulos:\n");

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

