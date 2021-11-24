// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: Code to get all simple results for two variables.

// ----------------------------------------------------

#include <stdio.h>

int main()

{
    int input1, input2, mathOperator;
    float expressionOutput;

    printf("\nPlease, input the first value to calculate...\n");
    scanf("%d", &input1);
    printf("\nThe firts value inputed is = %d\n", input1);

    printf("\nPlease, input the second value to calculate...\n");
    scanf("%d", &input2);
    printf("\nThe second value inputed is = %d\n", input2);

    printf("\nPlease, input the operator character \n");
    printf("(1) for addition \n");
    printf("(2) for subtraction \n");
    printf("(3) for multiplication \n");
    printf("(4) for division \n");

    scanf("%d", &mathOperator);
    printf("\nThe operator value is = %d\n", mathOperator);

    if (mathOperator == 1) {
        expressionOutput = input1 + input2;
        printf("\nThe addition value of both variables correspond to = %f\n",
               expressionOutput);
    }

    else if (mathOperator == 2) {
        expressionOutput = input1 - input2;
        printf("\nThe subtraction value of both variables correspond to = %f\n",
               expressionOutput);
    }

    else if (mathOperator == 3) {
        expressionOutput = input1 * input2;
        printf(
            "\nThe multiplication value of both variables correspond to = %f\n",
            expressionOutput);
    }

    else if (mathOperator == 4) {
        expressionOutput = input1 / input2;
        printf("\nThe division value of both variables correspond to = %f\n",
               expressionOutput);
    }

    else {
        printf("\nOperator is Invalid, please write it again!\n");
    }

    printf("\nOperation finished!\n");

    return 0;
}