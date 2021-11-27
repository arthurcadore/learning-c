// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: Print triangle shapes in terminal with custom size and number of
// triangles.

// ---------------------------------------------------

#include <stdio.h>
#include <math.h>

int main() {

    int inputValue, seriesTestingValue, sqrtValue = 1, testingValue;

    float outputValue; 

    printf("\n Please input the number series for validating!\n ");

    do{
        scanf("%d", &inputValue);
        printf("\n The number inputed correspond to = %d\n", inputValue);

    }while(inputValue < 0);

    do{

        outputValue = (float) sqrt(sqrtValue);

        testingValue = outputValue * outputValue;

         if((sqrtValue - testingValue) == 0){

         printf("\n The sqrt number of %d is intiger, and correspond to = %f\n", sqrtValue, outputValue);
        
        } /*else {

         printf("\n The sqrt number of %d isn't an intiger number, and it value correspond to = %f\n", sqrtValue, outputValue);

        };*/

        sqrtValue++;


    }while(inputValue >= sqrtValue);

    return 0; 

}