#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char *nome;
    char *dtNasc;
    char *cursoUfes;
    char *periodoIngresso;
    int percConclusao;
    float CRA;
};

Aluno** CriaVetorAlunos(int numeroAlunos)                                                                
{
    Aluno **vetorAlunos = (Aluno **)malloc(sizeof(Aluno) * numeroAlunos);

    for (int i = 0; i < numeroAlunos; i++)
    { 
        vetorAlunos[i] = CriaAluno(NULL,NULL,NULL,NULL,0,0);
    }

    return vetorAlunos;
}
Aluno* CriaAluno(char *nome, char *dtNasc, char *cursoUfes, char* periodoIngresso, int percConclusao, float CRA)
{
    Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));
    aluno->nome = (char *)malloc(sizeof(char) * 100);
    aluno->dtNasc = (char *)malloc(sizeof(char) * 100);
    aluno->cursoUfes = (char *)malloc(sizeof(char) * 100);
    aluno->periodoIngresso = (char *)malloc(sizeof(char) * 100);

    strcpy(aluno->nome, nome);
    strcpy(aluno->dtNasc, dtNasc);
    strcpy(aluno->cursoUfes, cursoUfes);
    strcpy(aluno->periodoIngresso, periodoIngresso);
    aluno->percConclusao = percConclusao;
    aluno->CRA = CRA;

    return aluno;
}   

void LeAlunos(Aluno** vetorAlunos, int numeroAlunos)
{
    for (int i =0; i < numeroAlunos; i++)
    {
        scanf("%[^\n]\n" ,vetorAlunos[i]->nome);
        scanf("%[^\n]\n" ,vetorAlunos[i]->dtNasc);
        scanf("%[^\n]\n" ,vetorAlunos[i]->cursoUfes);
        scanf("%[^\n]\n" ,vetorAlunos[i]->periodoIngresso);
        scanf("%f\n" ,vetorAlunos[i]->percConclusao);
        scanf("%d\n" ,vetorAlunos[i]->CRA);
    }

    
}

void LiberaAlunos(Aluno** alunos, int numeroAlunos);

void SalvaAlunosBinario(Aluno **alunos, char *fileName, int numeroAlunos);

void CarregaAlunosBinario(Aluno **alunos, char *fileName);

void ImprimeAlunos(Aluno** alunos, int numeroAlunos);

