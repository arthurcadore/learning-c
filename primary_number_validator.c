// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: Input an randon number, and verify if that is primary number or
// not.

// ----------------------------------------------------

#include <stdio.h>

int main() {
    int input, mathOperator = 13, Output;

    printf("Plese input the number value!\n");
    scanf("%d", &input);

    if (input % 2 == 0) {
        printf(
            "The value inputed ins't a primary number, it can be devided by "
            "2!\n");

    }

    else if (input % 3 == 0) {
        printf(
            "The value inputed ins't a primary number, it can be devided by "
            "3!\n");
    }

    else if (input % 5 == 0) {
        printf(
            "The value inputed ins't a primary number, it can be devided by "
            "5!\n");
    }

    else if (input % 7 == 0) {
        printf(
            "The value inputed ins't a primary number, it can be devided by "
            "7!\n");
    }

    else if (input % 11 == 0) {
        printf(
            "The value inputed ins't a primary number, it can be devided by "
            "11!\n");
    }

    else {
        do {
            if (input % mathOperator == 0) {
                printf(
                    "The value inputed ins't a primary number, it can be "
                    "devided by %d!\n",
                    mathOperator);

            } else {
                mathOperator++;
            }

        } while (mathOperator <= input);
    }

    return 0;
}