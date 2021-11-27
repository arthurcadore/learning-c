// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: Verify all square roots in a randon gap, and output the integer ones. 

// ---------------------------------------------------

#include <stdio.h>
#include <math.h>

int main() {

    int inputValue, seriesTestingValue = 0, sqrtValue = 1;

    long double outputValue; 

    printf("\n Please input the number series for validating!\n ");

    do{
        scanf("%d", &inputValue);
        printf("\n The number inputed correspond to = %d\n\n ", inputValue);
        printf("-----------------------------------------------------------\n\n");

    }while(inputValue < 0);

    do{

        outputValue = (float) sqrt(sqrtValue);


     
             if(ceil(outputValue) == floor(outputValue)){

                printf("\n-----------------------------------------------------------\n");
                
                printf("\n The sqrt number of %d is integer, and correspond to = %Lf\n", sqrtValue, outputValue);

                printf("\n-----------------------------------------------------------\n");

                seriesTestingValue++;

             }else{

                printf("\n The sqrt number of %d isn't an intiger number, and it value correspond to = %Lf\n", sqrtValue, outputValue);
                
            };

        sqrtValue++;

    }while(inputValue >= sqrtValue);

    printf("\n\nWere founded totaty %d integer square roots between 1 and %d!\n", seriesTestingValue, inputValue);

    printf("\nOperation finished!\n");

    return 0; 

}