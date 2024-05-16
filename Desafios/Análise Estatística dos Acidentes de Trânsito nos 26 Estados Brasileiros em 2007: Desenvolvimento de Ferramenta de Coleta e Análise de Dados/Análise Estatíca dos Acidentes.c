//if (exemplo[i].nome[tam - 1] == '\n') {
//           exemplo[i].nome[tam - 1] = '\0';
//        }
#include <stdio.h>
#include <string.h>

#define TAM_VET 26
#define TAM_NAME 15

typedef struct{
    
    char nome[TAM_NAME];
    int carros;
    int acidentes;
    
    
}estados;

void escreverNome(estados estado[]);
void digitarNumeroDeCarros(estados estado[]);
void digitarNumeroDeAcidentes(estados estado[]);
void localizarMaiorMenor(estados estado[]);
void percentualAcidentesCarros(estados estado[]);
int calcularMedia(estados estado[]);
void acimaDaMedia(estados estado[], int media_P);

int main()
{
    estados estado[TAM_VET];
    escreverNome(estado);
    digitarNumeroDeCarros(estado);
    digitarNumeroDeAcidentes(estado);
    localizarMaiorMenor(estado);
    percentualAcidentesCarros(estado);
    int media_P = calcularMedia(estado);
    printf("A media de acidentes no país é %d.\n", media_P);
    acimaDaMedia(estado, media_P);
    return 0;
}

void escreverNome(estados estado[]){
    for(int i = 0; i < TAM_VET; i++){
        printf("Digite o nome do %d° Estado:\n", (i+1));
        fgets(estado[i].nome, TAM_NAME, stdin);
        int tam = strlen(estado[i].nome);
        if (estado[i].nome[tam - 1] == '\n') {
            estado[i].nome[tam - 1] = '\0';
        }
    }
}
void digitarNumeroDeCarros(estados estado[]){
    for(int i = 0; i<TAM_VET; i++){
        printf("Digite a quantidade de Carros que circulam no %d° Estado:\n", (i+1));
        scanf("%d", &estado[i].carros);
    }
}
void digitarNumeroDeAcidentes(estados estado[]){
    for(int i = 0; i<TAM_VET; i++){
        printf("Digite o número de acidentes no trânsito do %d° Estado:\n", (i+1));
        scanf("%d", &estado[i].acidentes);
    }
}
void localizarMaiorMenor(estados estado[]){
    int acidenteMaior=0;
    int acidenteMenor = estado[0].acidentes;
    int indiceRegistoMa = 0;
    int indiceRegistoMe = 0;

    for(int i = 0; i<TAM_VET; i++){
        if(estado[i].acidentes > acidenteMaior){
            acidenteMaior = estado[i].acidentes;
            indiceRegistoMa = i;
        }
        if(acidenteMenor > estado[i].acidentes){
            acidenteMenor = estado[i].acidentes;
            indiceRegistoMe = i;
        }
        
    }

    printf("O estado de maior numero de acidentes é %s tendo %d acidentes.\n ", estado[indiceRegistoMa].nome, acidenteMaior);
    printf("O estado de menor numero de acidentes é %s tendo %d acidentes.\n ", estado[indiceRegistoMe].nome, acidenteMenor);
    
}

void percentualAcidentesCarros(estados estado[]){
    int percentual;
    for(int i = 0; i < TAM_VET; i++){
       percentual = (estado[i].acidentes * 100)/estado[i].carros;
       printf("O Estado da %s possui um percentual de %d%% carros, os quais sofreram acidentes.\n", estado[i].nome, percentual);  
    }
    
}

int calcularMedia(estados estado[]){
    int somador = 0;
    for(int i = 0; i<TAM_VET; i++){
        somador += estado[i].acidentes;
    }
    int media = somador/TAM_VET;
    
    return media;
}
void acimaDaMedia(estados estado[], int media_P){

    for(int i = 0; i<TAM_VET; i++){
        if(estado[i].acidentes > media_P){
            printf("O estado %s está acima da média de acidentes no país.\n", estado[i].nome);
        }
    }

}