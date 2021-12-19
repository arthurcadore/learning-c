// Course: Telecom engineering
// Name: Cadore-AC

// ---------------------------------------------------
// Challange: MTM2.2 
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

        };
    };

    soma_harmonica=(float)tamanho/soma;

    //printf("\nValor da soma harmônica = %f\n", soma_harmonica);

    return soma_harmonica;

};


int compara_vetores(int x[], int y[], int tamanhoVetor){

    int x1, x2;

    x1=media_vetor(x, tamanhoVetor);

    printf("\nValor do primeiro vetor = %d\n", x1);

    x2=media_vetor(y, tamanhoVetor);

    printf("\nValor do segundo vetor = %d\n", x2);

    if(x1==0){

        return -2;

    }else if(x2==0){

        return -2;

    }else if(x1==x2){

        return 0;

    }else if(x1 > x2){

        return 1;

    }else if(x1 < x2){

        return -1;
    };
};

int main(){

    int z[5]={2, 3, 5, 6, 9}, w[5]={4, 8, 8, 7, 2};

    printf("\nRetorno da comparação entre vetores = %d\n", compara_vetores(z, w, 5));

};


