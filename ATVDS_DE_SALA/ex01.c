#include <stdio.h>
#include <math.h>


int main(){
    int a,i,e, min, max;
    double b = 0;
    int c = 0;
    int ar[100];
    double media, desvio;
    int posicao_vetorM,posicao_vetormen ;
    printf("Quantos números você quer somar?:\n");
    scanf("%d", &a);
    for(i=0;i <a; ++i){
        printf("Coloque %d número:\n", i);
        scanf("%d", &ar[i-1]);
        c += ar[i-1];
        
    }
    printf("Somatorio %d\n", c);
    media = (double)c/(double)a;
    printf("Media %.2lf\n", media);
    for(i = 0; i< a; ++i){
        b += pow((ar[i]-media),2); 
          
    }
    
    desvio = sqrt(b/a);
    printf("Desvio %lf", desvio);
    
    min = 0;
    max = 0;
    for (int i = 0; i < a; ++i) {
        if (ar[i] < ar[min]) {
            min = i;
        } else if (ar[i] > ar[max]) {
            max = i;
        }
    }
            
    printf("O menor número no vetor é %d\n", ar[min]);
    printf("O maior número no vetor é %d\n", ar[max]);
    printf("A posição do menor número é %d\n", min);
    printf("A posição do maior número é %d\n", max);
            
    return 0;
}
