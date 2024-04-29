#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM_VET 100
void palidromo(char palavra[], char palavra2[TAM_VET]);
int main()
{   
    char palavra[TAM_VET], palavra2[TAM_VET];
    printf("Digite;\n");
    fgets(palavra, TAM_VET, stdin);
    palidromo(palavra, palavra2);
    return 0;
}

void palidromo(char palavra[],char palavra2[]){
    int j;
    for(int i = 0; palavra[i] != '\0' && palavra[i]!='\n'; i++){
        if(palavra[i]==' '){
            
            palavra[i] = palavra[i+1];
            
            
        }
    }
    for(int i = 0, j = strlen(palavra)-2; i < j/2, j > j/2; i++, j-- ){
        printf("%c e %c\n", palavra[i], palavra[j]);
        if(palavra[i] != palavra[j]){
            printf("dont is palidromo\n");
            break;
        }else{
            printf("É palidromo man!\n");
        }
    }
    
}
