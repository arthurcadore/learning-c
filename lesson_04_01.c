// First class - Eng. Telecom. 
// Name: Cadore.AC

// ---------------------------------------------------

// Code for this expression: F = (N!*2)/(M!+1)

// ---------------------------------------------------

#include <stdio.h>  

int main(){  

    int input1, input2, fatIN1, fatIN2;

    float output, output1, output2;

    do{
     printf("Entre com o valor de 'N'\n");

        scanf("%i", &input1);

    }while(input1 < 0);

    do{
     printf("Entre com o valor de 'M'\n");

        scanf("%i", &input2);
        
    }while(input2 < 0);

    for(fatIN1 = 1; input1 > 1; input1 = input1 - 1){

        fatIN1 = fatIN1 * input1; 
    }

    for(fatIN2 = 1; input2 > 1; input2 = input2 - 1){

        fatIN2 = fatIN2 * input2;
    
    }

    output1=fatIN1*2;
    
    output2=fatIN2+1;

    output=(float)output1/output2; 


    printf("Valor da fatorial de 'N'\n%d\nValor da fatorial de 'M'\n%d\n", fatIN1, fatIN2);

 
    printf("Valor do resultado da operação\n%f\n", output);
	

    printf("Operação finalizada!\n");

}

