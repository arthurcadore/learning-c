// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: Code to get all simple results for two variables.

// ----------------------------------------------------

#include <stdio.h>

int main()

{
    int input1, input2;
    char mathOperator;
    float expressionOutput;

    printf("\nPlease, input the first value to calculate...\n");
    scanf("%d", &input1);
    printf("\nThe firts value inputed is = %d\n", input1);

    printf("\nPlease, input the second value to calculate...\n");
    scanf("%d", &input2);
    printf("\nThe second value inputed is = %d\n", input2);

    printf("\nPlease, input the operator character (+ ; - ; * ; / )\n");
    scanf(" %c", &mathOperator);
    printf("\nThe operator value is = %c\n", mathOperator);

    printf("\n\n------------------------------------\n\n");

    if (mathOperator == '+') {
        expressionOutput = input1 + input2;
        printf("\nThe addition value of both variables correspond to = %.0f\n",
               expressionOutput);
    }

    else if (mathOperator == '-') {
        expressionOutput = input1 - input2;
        printf(
            "\nThe subtraction value of both variables correspond to = %.0f\n",
            expressionOutput);
    }

    else if (mathOperator == '*') {
        expressionOutput = input1 * input2;
        printf(
            "\nThe multiplication value of both variables correspond to = "
            "%.0f\n",
            expressionOutput);
    }

    else if (mathOperator == '/') {
        expressionOutput = input1 / input2;
        printf("\nThe division value of both variables correspond to = %.0f\n",
               expressionOutput);
    }

    else {
        printf("\nOperator is Invalid, please write it again!\n");
    }

    printf("\nOperation finished!\n");

    return 0;
}