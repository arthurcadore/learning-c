// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: Caculating matriz 2x2 with sarrus rule.

// ---------------------------------------------------

#include <stdio.h>

int main() {
    // Creating variables for input values.
    int input11, input12, input13, input14;
    int input21, input22, input23, input24;
    int input31, input32, input33, input34;

    // Variables for math operation
    int validatingMatriz;
    int detX, detXA, detXB;
    int detX1, detX1A, detX1B;
    int detX2, detX2A, detX2B;
    int detX3, detX3A, detX3B;

    // Variables (type float) for output, need to be float for decimal numbers.
    float outX1, outX2, outX3;

    // Validating if the values inputed are correct
    do {
        // Scanning terminal values.
        printf("\n Please Input the value of 'X¹¹' !\n");
        scanf("%d", &input11);

        printf("\n Please Input the value of 'X¹²' !\n");
        scanf("%d", &input12);

        printf("\n Please Input the value of 'X¹³' !\n");
        scanf("%d", &input13);

        printf("\n Please Input the value of 'X¹⁴' !\n");
        scanf("%d", &input14);

        printf("\n Please Input the value of 'X²¹' !\n");
        scanf("%d", &input21);

        printf("\n Please Input the value of 'X²²' !\n");
        scanf("%d", &input22);

        printf("\n Please Input the value of 'X²³' !\n");
        scanf("%d", &input23);

        printf("\n Please Input the value of 'X²⁴' !\n");
        scanf("%d", &input24);

        printf("\n Please Input the value of 'X³¹' !\n");
        scanf("%d", &input31);

        printf("\n Please Input the value of 'X³²' !\n");
        scanf("%d", &input32);

        printf("\n Please Input the value of 'X³³' !\n");
        scanf("%d", &input33);

        printf("\n Please Input the value of 'X³⁴' !\n");
        scanf("%d", &input34);

        printf(
            "\n-----------------------------------------------------------"
            "\n");

        printf("\n Please verify if the matriz input are correct: \n\n");

        // Printing matriz in terminal to verify if the input is correct.

        printf("| %d | %d | %d | = %d |\n", input11, input12, input13, input14);
        printf("| %d | %d | %d | = %d |\n", input21, input22, input23, input24);
        printf("| %d | %d | %d | = %d |\n", input31, input32, input33, input34);

        printf("\n If the matriz is correct input (1), else, input (2) = ");

        scanf("%d", &validatingMatriz);

    } while (validatingMatriz == 2);

    // Doing determinant operations.

    detXA = (input11 * input22 * input33) + (input12 * input23 * input31) +
            (input13 * input21 * input32);

    detXB = -(input13 * input22 * input31) - (input11 * input23 * input32) -
            (input12 * input21 * input33);

    // detX1 = (input13 * input22) - (input12 * input23);

    // detX2 = (input11 * input23) - (input13 * input21);

    // detX2 = (input11 * input23) - (input13 * input21);

    detX = (detXA + detXB);
    detX1 = (detX1A + detX1B);
    detX2 = (detX2A + detX2B);
    detX3 = (detX3A + detX3B);

    printf("\n-----------------------------------------------------------");

    printf("\n detx = %d \n", detX);

    // printf("\n detx1 = %d \n", detX1);

    // printf("\n detx2 = %d \n", detX2);

    printf("-----------------------------------------------------------");

    // Calculating x1 and x2 and printing the outputs:

    // outX1 = (float)detX1 / detX;

    //  outX2 = (float)detX2 / detX;

    // printf("\n X1 = %f \n", outX1);

    // printf("\n X2 = %f \n", outX2);

    // printf("-----------------------------------------------------------");

    // printf("\nOperation finished!\n");

    return 0;
}