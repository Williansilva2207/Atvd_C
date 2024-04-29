#include <stdio.h>
#define TAM_VETOR 5
void reversoVetor(int v[], int qtd);

int main()
{
    int v[TAM_VETOR];
    int qtd;
    printf("Quanto vetores vai querer?:\n");
    scanf("%d", &qtd);
    
    while(qtd<1 || qtd > 5){
        printf("Digite a quantidade de digitos:\n");
        scanf("%d", &qtd);
    }
    
    reversoVetor(v,qtd);
    
    return 0;
}

void reversoVetor(int v[], int qtd){
    for(int i=1; i <= qtd; ++i){
        printf("Digite:\n");
        scanf("%d", &v[i-1]);
    }
    printf("[");
    for(int i = qtd; i>0; --i){
        if(i-1 == 0){
            printf("%d", v[i-1]);
        }
        else{
            printf("%d,", v[i-1]);
        }
    }
    printf("]");
}
