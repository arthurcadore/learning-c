// First class - Eng. Telecom.
// Name: Cadore.AC

// ---------------------------------------------------

#include <stdio.h>  // including library "stdio"

int main() {  // calling main fuction to code

    float media, num1, num2;  // creating 3 variables to use in math operation

    scanf("%f",
          &num1);  // importing values and including into the variable "num1"
    scanf("%f",
          &num2);  // importing values and including into the variable "num1"

    media = (num1 + num2) /
            2.0;  // including math operation into the variable "media"

    printf("media = %.0f",
           media);  // printing the value of "media" with a sentence before
}
