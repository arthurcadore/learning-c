// Course: Telecom engineering 
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: Print triangle shapes in terminal with custom size and number of triangles. 

// ---------------------------------------------------

#include <stdio.h>

int main() {
    
    // creating variables for input values of terminal 
    int sizeValue, shapesValue;

    // Process value starts by 1, for starts the loop sequence after. 
    int processValue = 1;

    // Variables for determinate with character the triangle will have. 
    char charEven;
    char charOdd;

    // Validating if the input is bigger than 2 (triangle need to have al least 3 corners)
    do {
        printf("\nInput the size of individual shapes (Number)\n");

        scanf("%i", &sizeValue);
    } while (sizeValue < 2);
    printf("\nThe size inputed is = %d\n", sizeValue);

    // Validating the number of triangles that will be printed, need to be bigger than 0. 
    do {
        printf("\nInput the number of triangles that will be printed (Number)\n");

        scanf("%i", &shapesValue);
    } while (shapesValue < 0);
    printf("\nThe number of triagle(s) is = %d\n", shapesValue);

    // Importing the first character of printing (the even triangles)
	printf("\nInput the first character of printing (Number or Letter)\n");
    scanf(" %c", &charEven);
    printf("\nThe Even triagles will have this character = %c\n", charEven);

    // Importing the first character of printing (the odd triangles)
	printf("\nInput the second character of printing (Number or Letter)\n");
    scanf(" %c", &charOdd);
    printf("\nThe Odd triagles will have this character = %c\n", charOdd);

    

    //Validating the processvalue number and creating a print loop. 
    while (processValue <= shapesValue) {

        printf("\nPrinting triangle Number = %d\n", processValue);

        int processVariable1 = 0;

        char ch;

        if (processValue % 2 == 0) {
            ch = charEven;
        } else {
            ch = charOdd;
        }

        //Printing individual triangles. 
        while (processVariable1 < sizeValue) {
            int processVariable2 = 0;

            while (processVariable2 <= processVariable1) {
                printf("%c", ch);

                processVariable2++;
            }

            printf("\n");

            processVariable1++;
        }

        
        processValue++;
    }

	printf("\nOperationg Finished!\n");

    return 0;
}
