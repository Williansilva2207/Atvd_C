#include <stdio.h>
#define TAM_VETOR 5
int main(){
    int a[TAM_VETOR], b[TAM_VETOR], c[TAM_VETOR];
    int i;
    printf("Adicione 5 números:\n");
    for(i = 0; i < TAM_VETOR; ++i ){
        scanf("%d", &a[i]);
    }
    printf("Adicione +5 números:\n");
    for(i = 0; i < TAM_VETOR; ++i ){
        scanf("%d", &b[i]);
        c[i] = a[i] + b[i];
    }    
    printf("As somas:\n");
    for(i = 0; i < TAM_VETOR; ++i ){
        printf("%d\n", c[i]);
    }
    return 0;
}