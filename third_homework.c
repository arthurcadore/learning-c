// Third Homework - Eng. Telecom. 
// Name: Cadore-AC

#include <stdio.h>

int main(){

    float ComponentNumber, AverageValue1, AverageValue2, AditionValue, Number, ProcessValue, FirstValue, LastValue;

    printf("Por Favor, importe a quantidade de componentes de N");

    scanf("%f", &ComponentNumber); 

    Adition();

}

void Adition(){

    if(ProcessValue < ComponentNumber){

        scanf("%f", &Number); 

        AditionValue = (AditionValue + Number);

        ProcessValue();

    } else {    

        AverageValue1 = (AditionValue / ComponentNumber);

        AverageValue2 = ((FirstValue + LastValue) / 2);

        Printf("O valor da média geral é igual á %d" , AverageValue1);

        Printf("O valor da média entre o maior e menor valor é igual á %d" , AverageValue2);


        if(AverageValue1 <= AverageValue2){

            Printf("A média geral é menor ou igual a média do maior/menor componente");
            
        }else{

            Printf("A média geral é maior que a média do maior/menor componente");


        }
    }
}

void Process(){

    if(Number < FirstValue){

       Number = FirstValue;

        if(ProcessValue = 0){

           Number = LastValue; 

           ProcessValue = (ProcessValue + 1);

        }else{

           ProcessValue = (ProcessValue + 1);
        }

    }else{

        if(Number > LastValue){

            Number = LastValue;
        }else{

            if(ProcessValue = 0){

             Number = FirstValue;

            }else{

             ProcessValue = (ProcessValue + 1);
            }
        }
    }
}
