#include <stdio.h>

struct Aluno {
    char nome[50];
    int  nota;
};


int main(void) {
    int n;
    scanf("%d", &n);

    struct Aluno alunos[n];
    struct Aluno *p = &alunos[0]; 

    for (int i = 0; i < n; i++) {
        scanf("%s %d", alunos[i].nome, &alunos[i].nota);
        if (alunos[i].nota > p->nota) {
            p = &alunos[i];
        }
    }

    printf("%s", p->nome);
}