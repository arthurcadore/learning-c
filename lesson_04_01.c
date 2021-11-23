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
     printf("Input the value of variable 'N'\n");

        scanf("%i", &input1);

    }while(input1 < 0);

    do{
     printf("Input the value of variable 'M'\n");

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


    printf("Fatoration value of 'N' = %d\n\nFatoration value of 'M' = %d\n\n", fatIN1, fatIN2);

 
    printf("Output value of {F = (N!*2)/(M!+1)} expression is  = %f\n\n", output);
	
    printf("Operation finished \n");

}

