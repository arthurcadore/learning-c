// Course: Telecom engineering 
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: Doing math operations to get fibonacci sequence with "N" series. 

// ---------------------------------------------------

#include <stdio.h>

int main() {
    /* User inputs*/
    int sizeValue, shapesValue;
    int processValue = 1;
    char charEven;
    char charOdd;

    do {
        printf("Entre com o tamanho do triângulo (Número Inteiro)\n");

        scanf("%i", &sizeValue);
    } while (sizeValue < 2);

    do {
        printf("Entre com o número de triângulos (Número Inteiro)\n");

        scanf("%i", &shapesValue);
    } while (shapesValue < 0);

	printf("Entre com o primeiro caractere de impressão (Caractere AlfaNumérico)\n");

        scanf(" %c", &charEven);

	printf("Entre com o segundo caractere de impressão (Caractere AlfaNumérico)\n");

        scanf(" %c", &charOdd);

    printf("Imprimindo os triâgulos...\n");

    while (processValue <= shapesValue) {
        int processVariable1 = 0;

        char ch;

        if (processValue % 2 == 0) {
            ch = charEven;
        } else {
            ch = charOdd;
        }

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

	printf("Operação finalizada!\n");

    return 0;
}
