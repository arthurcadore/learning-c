// First class - Eng. Telecom. 
// Name: Cadore.AC

// ---------------------------------------------------

// Code for this expression: F = (N!*2)/(M!+1)

// ---------------------------------------------------

#include <stdio.h>  

    int main(){  

    int seriesVaule, outputValue, firstValue = 1, secondValue = 1, processSeries = 2;

    do{

     printf("Input how many series the script will calculate\n");

     scanf("%d", &seriesVaule);
     printf("\n\nInputed value of = %d series\n\n", seriesVaule);

    }while(seriesVaule < 0);

    while(processSeries <= seriesVaule){

        if (processSeries % 2 == 0) {

            firstValue=firstValue+secondValue;

            outputValue=firstValue;

        } else {

            secondValue=firstValue+secondValue;

            outputValue=secondValue;

        }

         printf("Serie N°%d - Fibonacci value = %d\n", processSeries, outputValue);
        processSeries++;
    }

   printf("Fibonacci Series finished!");

}