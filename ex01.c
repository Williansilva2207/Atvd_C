#include <stdio.h>
#include <math.h>


int main(){
    int a,i,e;
    double b = 0;
    int c = 0;
    int ar[100];
    double media, desvio;
    printf("Quantos números você quer somar?:\n");
    scanf("%d", &a);
    for(i=1;i <=a; i++){
        printf("Coloque %d número:\n", i);
        scanf("%d", &ar[i-1]);
        c += ar[i-1];
        
    }
    printf("Somatorio %d\n", c);
    media = c/a;
    printf("Media %.2lf\n", media);
    for(e = 0; e< a; e++){
        b += pow((ar[e]-media),2); 
        printf("%lf\n", b);    
    }
    
    desvio = sqrt(b/a);
    printf("%lf", desvio);
    
    

    return 0;
}