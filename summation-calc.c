// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: Make an C function to calculate the standard devitation of two values. 
// ----------------------------------------------------

#include <stdio.h>


int main() {

    int nValue, xValue, i=0;

    float vectorValue[10];

    do {
        printf("\nPlese input the 'N' series value = ");

        scanf("%d", &nValue);

        printf("\nThe number inputed correspond to = %d \n", nValue);

    } while (nValue < 0);

    do {
        printf("\nPlese input the 'X' value = ");

        scanf("%d", &xValue);

        printf("\nThe number inputed correspond to = %d \n", xValue);

    } while (nValue < 0);

    for(i=0;i<=nValue;i++){

        i=vectorValue[i];

        vectorValue[i]*xValue;

        printf("Serie sommation value [%d] correspond to = %d", i, vectorValue[i]);

        i++;
    };


   return 0; 
}