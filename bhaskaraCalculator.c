#include <math.h>
#include <stdio.h>

int main() {
    int inputA, inputB, inputC, inputBExponation, deltaValue;

    long double sqrtDeltaValue;

    float outputA, outputB, outputA1, outputB1;

    printf("\nPlease input the value of 'A'!\n");
    scanf("%d", &inputA);
    printf("\nThe value inputed of 'A' is = %d\n", inputA);

    printf("\nPlease input the value of 'B'!\n");
    scanf("%d", &inputB);
    printf("\nThe value inputed of 'B' is = %d\n", inputB);

    printf("\nPlease input the value of 'C'!\n");
    scanf("%d", &inputC);
    printf("\nThe value inputed of 'C' is = %d\n", inputC);

    inputBExponation = (inputB * inputB);

    deltaValue = (inputBExponation - 4 * inputA * inputC);

    if (deltaValue > 0) {
        sqrtDeltaValue = (float)sqrt(deltaValue);

        printf(
            "\n-----------------------------------------------------------"
            "\n");

        printf("\n The value of Delta correspond to = %d\n", deltaValue);

        printf("\n The square root value of Delta correspond to = %Lf\n",
               sqrtDeltaValue);

        outputA1 = (float)(sqrtDeltaValue - inputB);

        outputB1 = (float)-(sqrtDeltaValue + inputB);

        outputA = (float)outputA1 / (2 * inputA);
        printf(
            "\n-----------------------------------------------------------"
            "\n");
        printf("\n The value of X' correspond to = %f\n", outputA);

        outputB = (float)outputB1 / (2 * inputA);

        printf("\n The value of X'' correspond to = %f\n", outputB);
        printf(
            "\n-----------------------------------------------------------"
            "\n");

    } else {
        printf(
            "\n-----------------------------------------------------------"
            "\n");
        printf(
            "\nThe value of delta is '%d', it's impossible get the square root "
            "of this number!\n",
            deltaValue);

        printf(
            "\n-----------------------------------------------------------"
            "\n");
    }

    printf("\nOperation finished!\n\n");

    return 0;
}
