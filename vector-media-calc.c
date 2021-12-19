// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------

// Challange: 
// ----------------------------------------------------

#include <stdio.h>

float media_vetor(int x[], int tamanho){

    int i=0;
    
    float soma=0;

    for(i==0;i<tamanho;i++){

        soma=(float)1/x[i]+soma;

        printf("valor soma = %f\n", soma);
    };

};


//int compara_vetores(int x[], int y[], int tamanho)

int main(){

    int y[3]={3, 3, 3}, w[3]={5, 9 ,1};

    media_vetor(y, 3);

    //printf("retorno %d\n", compara_vetores(y,w,3));

};


