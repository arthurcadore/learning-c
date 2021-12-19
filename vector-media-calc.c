// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------
// Challange: 
// ----------------------------------------------------

#include <stdio.h>

float media_vetor(int x[], int tamanho){

    int i=0;
    
    float soma=0, soma_harmonica=0;

    for(i==0;i<tamanho;i++){

        if (x[i]==0){
            
            return 0;

        }else{

            soma=(float)1/x[i]+soma;

            printf("valor soma = %f\n", soma);

        };
    };

    soma_harmonica=(float)tamanho/soma;

    printf("Valor Soma Harmonica = %f\n", soma_harmonica);

    //return soma_harmonica;

};


//int compara_vetores(int x[], int y[], int tamanho)

int main(){

    int y[3]={3, 3, 3}, w[3]={5, 7 ,1};

    media_vetor(y, 3);
    media_vetor(w, 3);

    //printf("retorno %d\n", compara_vetores(y,w,3));

};


