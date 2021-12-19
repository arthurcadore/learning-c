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

    return soma_harmonica;

};


int compara_vetores(int x[], int y[]){

    if(x[1]==0){

        return -2;

    }else if(y[1]==0){

        return -2;

    }else if(x[1]==y[1]){

        return 0;

    }else if(x[1] > y[1]){

        return 1;

    }else if(x[1] < y[1]){

        return -1;
    };
};

int main(){

    int output; 

    int z[3]={16, 56, 8}, w[3]={4, 8, 8}, x[1], y[1];

    x[1]=media_vetor(z, 3);
    printf("\n\nValor do primeiro vetor = %d\n", x[1]);

    y[1]=media_vetor(w, 3);
    printf("Valor do segundo vetor = %d\n\n", y[1]);

    output = compara_vetores(x,y);

    printf("Retorno da comparação entre vetores = %d\n", output);

};


