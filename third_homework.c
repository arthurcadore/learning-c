// Third Homework - Eng. Telecom. 
// Name: Cadore-AC

#include <stdio.h>

int main(){

    float componentNumber, averageValue1, averageValue2, aditionValue, number, processValue, firstValue, lastValue;

    printf("Por Favor, importe a quantidade de componentes de N");

    scanf("%f", &componentNumber); 

    Adition();

}

void Adition(){

    if(processValue < componentNumber){

        scanf("%f", &number); 

        aditionValue = (aditionValue + number);

        processValue();

    } else {    

        averageValue1 = (aditionValue / componentNumber);

        averageValue2 = ((firstValue + lastValue) / 2);

        Printf("O valor da média geral é igual á %d" , averageValue1);

        Printf("O valor da média entre o maior e menor valor é igual á %d" , averageValue2);


        if(averageValue1 <= averageValue2){

            Printf("A média geral é menor ou igual a média do maior/menor componente");
            
        }else{

            Printf("A média geral é maior que a média do maior/menor componente");


        }
    }
}

void Process(){

    if(number < firstValue){

       number = firstValue;

        if(processValue = 0){

           number = lastValue; 

           processValue = (processValue + 1);

        }else{

           processValue = (processValue + 1);
        }

    }else{

        if(number > lastValue){

            number = lastValue;
        }else{

            if(processValue = 0){

             number = firstValue;

            }else{

             processValue = (processValue + 1);
            }
        }
    }
}
