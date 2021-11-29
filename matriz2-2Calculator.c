#include <stdio.h>

int main() {
    int input11, input12, input13, input21, input22, input23, validatingMatriz,
        detX, detX1, detX2;

    float outX1, outX2;

    do {
        printf("\n Please Input the value of 'X¹¹' !\n");
        scanf("%d", &input11);

        printf("\n Please Input the value of 'X¹²' !\n");
        scanf("%d", &input12);

        printf("\n Please Input the value of 'X¹³' !\n");
        scanf("%d", &input13);

        printf("\n Please Input the value of 'X²¹' !\n");
        scanf("%d", &input21);

        printf("\n Please Input the value of 'X²²' !\n");
        scanf("%d", &input22);

        printf("\n Please Input the value of 'X²³' !\n");
        scanf("%d", &input23);

        printf(
            "\n-----------------------------------------------------------"
            "\n");

        printf("\n Please verify if the matriz input are correct: \n\n");

        printf("| %d | %d | = %d |\n", input11, input12, input13);
        printf("| %d | %d | = %d |\n", input21, input22, input23);

        printf("\n If the matriz is correct input (1), else, input (2) = ");

        scanf("%d", &validatingMatriz);

    } while (validatingMatriz == 2);

    // Doing determinant operations.

    detX = (input11 * input22) - (input12 * input21);

    detX1 = (input13 * input22) - (input12 * input23);

    detX2 = (input11 * input23) - (input13 * input21);

    printf("\n-----------------------------------------------------------");

    printf("\n detx = %d \n", detX);

    printf("\n detx1 = %d \n", detX1);

    printf("\n detx2 = %d \n", detX2);

    printf("-----------------------------------------------------------");

    // Calculating and printing the outputs:

    outX1 = (float)detX1 / detX;

    outX2 = (float)detX2 / detX;

    printf("\n X1 = %f \n", outX1);

    printf("\n X2 = %f \n", outX2);

    printf("-----------------------------------------------------------");

    printf("\nOperation finished!\n");

    return 0;
}