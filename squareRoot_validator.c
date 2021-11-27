// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: Print triangle shapes in terminal with custom size and number of
// triangles.

// ---------------------------------------------------

#include <stdio.h>

int main() {

    int InputValue, seriesTestingValue, sqrtValue = 1;

    float outputValue; 

    printf("\n Please input the number series for validating!\n ");

    do{
        scanf("%d", &inputValue);
        printf("\n The number inputed correspond to = %d\n", inputValue);

    }while(inputValue < 0)

    do{

        OutputValue = (float) sqrt(sqrtValue);

         if((sqrtValue - floor(sqrtValue)) == 0){

         printf("\n The sqrt number is intiger, and correspond to = %f", OutputValue);
        
        }else {

         printf("\n The sqrt number isn't an intiger number, 'cause it correspond to = %f", OutputValue);

        };

        sqrtValue++;


    }while(inputValue <= sqrtValue);






}