// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: Make an C function to calculate the standard devitation of two values. 
// ----------------------------------------------------

#include <stdio.h>

int summationU(int summationSeries, float input){

    int i; 

    float summationOuput = 0, output1, output2, outputU; 

    for(i=1;i<=summationSeries;i++){

        output1 =(float) i*input;

        summationOuput =(float) output1 + output; 

    };
    
    output2 = 1/summationSeries;

    outputU = output2*output1;

    return = onutputU; 

}

int summationDevitation(int summationSeries, float input, float u){

    int i; 

    float summationOuput = 0, output1, output2, output3, output4; 

    output1 = (input - u);
    output2 = ()


    for(i=1;i<=summationSeries;i++){




        output1 =(float) i*input;

        summationOuput =(float) output1 + output; 

    };
    
    output2 = 1/summationSeries;

    outputU = output2*output1;

    return = onutputU; 

}



int main() {

    int summationSeries; 

    float input, u;

    do{
    
    printf("\nPlese input the summation series value = ");

    scanf("%d", &summationSeries);

    }while(summationSeries<=0);

    printf("\nPlease input the summation value = ");

    scanf("%f", &input);

    u = summationU(summationSeries, input);

    u = summationDevitation(summationSeries, input, u);





   return 0; 
}