#include <stdio.h>
#define TAM_VETOR 5
void reversoVetor(int v[], int v2[], int qtd);
int main()
{
    int v[TAM_VETOR], v2[TAM_VETOR];
    int qtd;
    
    printf("Digite a quantidade de digitos:\n");
    scanf("%d", &qtd);
    
    while(qtd<1 || qtd > 5){
        printf("Digite a quantidade de digitos:\n");
        scanf("%d", &qtd);
    }
    
    reversoVetor(v,v2, qtd);
    
    

    return 0;
}

void reversoVetor(int v[], int v2[], int qtd){
    for(int i = 1; i<=qtd; ++i){
        printf("Vetor a:\n");
        scanf("%d", &v[i-1]);
        v2[qtd-i] = v[i-1];
    }
    printf("[");
    for(int i=0; i<qtd; ++i){
        if(i==0){
            printf("%d ", v2[i]);
        }
        else{
            printf(",%d ", v2[i]);    
        }    
    }
    printf("]");
}
