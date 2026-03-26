#include <stdio.h>
#define MAX_TAM 100

typedef struct 
{
    int tag;
}tDados;

typedef struct 
{
    int n;
    tDados dados[MAX_TAM];
}tDadosVetor;

tDadosVetor defineVetor(){
    int i;
    tDadosVetor vetor;
    scanf("%d" ,&vetor.n);
    for (i = 0; i < vetor.n; i++){
        scanf("%d" ,&vetor.dados[i].tag);
    }
    return vetor;
}

int jaApareceu(tDadosVetor vetor, int num, int j){
    int i;
    for (i = 0; i < vetor.n; i++){
        if (vetor.dados[i].tag == num && i != j){
            return 1;
        }
    }
    return 0;
}

void imprimeSeNaoApareceu(tDadosVetor vetor){
    int i,
        flag;
    for (i = 0; i < vetor.n; i++){
        if (!jaApareceu(vetor, vetor.dados[i].tag, i)){
            flag = 1;
            printf("%d " ,vetor.dados[i].tag);
        }
    }
    if (!flag) printf("NENHUM\n");
}

int main(){
    tDadosVetor vetor;
    vetor = defineVetor();
    imprimeSeNaoApareceu(vetor);
}





