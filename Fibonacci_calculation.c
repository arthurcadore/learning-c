// First class - Eng. Telecom. 
// Name: Cadore.AC

// ---------------------------------------------------

// Code for this expression: F = (N!*2)/(M!+1)

// ---------------------------------------------------

#include <stdio.h>  

    int main(){  

    int seriesVaule, outputValue;

    int firstValue, secondValue, processSeries = 1;

    do{

     printf("Input how many series the script will calculate\n");

     scanf("%d", &seriesVaule);

    }while(seriesVaule < 0);


    while(processSeries <= seriesVaule){

        if (processSeries % 2 == 0) {

            firstValue=firstValue+secondValue;

            outputValue=firstValue;

        } else {

            secondValue=firstValue+secondValue;

            outputValue=secondValue;

        }

        processSeries++;
    }

    printf("%d\n", outputValue);

}