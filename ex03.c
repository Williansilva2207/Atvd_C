#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int n2[10];
    printf("Digite de 1 até 10 para saber quantos quer:\n");
    scanf("%d", &n);
    for(int i = 0; i<n; ++i){
        printf("Digite o número:\n");
        scanf(" %d", &n2[i]);
        }
    printf("[");    
    for(int i = 0; i<n; ++i){
        if(i+1 == n){
            printf("%d", n2[i]);
        }
        else{

            printf("%d,", n2[i]);
        }
    }    
    printf("]\n");
    return 0; 
}