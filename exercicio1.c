 /*
AUTOR: Arthur Cadore Matuella Barcella
DATA: 30/11/21
SINOPSE DO PROGRAMA: Computar valores de F(x) dado um intervalo.
DADOS DE ENTRADA: InputA, InputB;
DADOS DE SAIDA: Output3
*/

#include <stdio.h>

int main(){

	int inputA, inputB,variableA, integerOutput, output2 = 0, variableSeries=0; 

	float output3; 

	

	printf("\nPlease input the first input =");

	scanf("%d", &inputA);
	printf("\nInputA = %d\n", inputA);

	

	do{

	printf("\nPlease input the second input =");

	scanf("%d", &inputB);
	printf("\nInputB = %d\n", inputB);

	}while(inputB <= inputA);


	for(variableA = inputA; variableA <= inputB; variableA++){

	integerOutput = (7 * variableA) - 9;

	output2 = output2 + integerOutput;

	variableSeries++;

};

	output3 = (float)output2/variableSeries;

	printf("\n The media value output is = %f\n", output3);



return 0;

}
