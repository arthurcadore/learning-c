// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: Input an randon number, and verify if that is primary number or
// not.

// ----------------------------------------------------

#include <stdio.h>

int main() {
    int input, mathOperator = 2, Output;

    do {
        printf("Plese input the number value!\n");

        scanf("%d", &input);

        printf("\n\nThe number inputed correspond to = %d \n\n", input);

    } while (input < 0);

    do {
        printf("Starting test with = %d!\n", mathOperator);

        if (input % mathOperator == 0) {
            if (input == mathOperator) {
                printf(
                    "\n\nYes, your number is a primary number, it only can be "
                    "devided by 1 and %d!\n\n",
                    mathOperator);

            } else {
                printf(
                    "\n\nThe value inputed ins't a primary number, it can be "
                    "devided by %d!\n\n",
                    mathOperator);
            }

            return 0;

        } else {
            printf("Test Failed with = %d!\n", mathOperator);
        }

        mathOperator++;

    } while (mathOperator <= input);
}