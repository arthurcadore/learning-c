/*
AUTOR: Arthur Cadore Matuella Barcella
DATA: 30/11/21
SINOPSE DO PROGRAMA: Imprimir forma variadas de objetos no terminal.
DADOS DE ENTRADA: InputA, InputB;
DADOS DE SAIDA: Output3.
*/

#include <stdio.h>

int main() {
    int input1 = 0, retangleValueL, retangleValueC, retangleValueL1,
        retangleValueC1, input3, testingvalue = 0, trianglesVariable1 = 0,
        sizeValue;

    do {
        printf("\nPlease, input the value of printing!");
        printf("\n(1) for retangles");
        printf("\n(2) for squared triangles");
        printf("\n(3) for finishing the program\n");

        scanf("%d", &input1);

        printf("\n The value inputed correspond to = %d", input1);

        switch (input1) {
            case 1:

                printf("\nPlease input the collum value = ");
                scanf("%d", &retangleValueL);

                printf("\nPlease input the lines value = ");
                scanf("%d", &retangleValueC);

                for (retangleValueC1 = 1; retangleValueC1 <= retangleValueC;
                     retangleValueC1++) {
                    for (retangleValueL1 = 1; retangleValueL1 <= retangleValueL;
                         retangleValueL1++) {
                        printf("*");
                    };

                    printf("\n");
                };

                break;

            case 2:

                printf("\nPlease input the size of the triangle = ");
                scanf("%d", &sizeValue);

                while (trianglesVariable1 < sizeValue) {
                    int trianglesVariable2 = 0;

                    while (trianglesVariable2 <= trianglesVariable1) {
                        printf("*");

                        trianglesVariable2++;
                    }

                    printf("\n");

                    trianglesVariable1++;
                }

                break;

            case 3:

                input1 = 4;
                break;
        };

    } while (input1 <= 3);

    printf("\n\nPrograma finalizado!\n\n");

    return 0;
}
