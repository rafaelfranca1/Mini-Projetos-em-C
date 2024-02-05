/*Calcular a média dos 50 alunos da turma de Introdução a
Programação*/
#include <stdio.h>

#define MAX 50

typedef struct {
    int num;
    char nome[30];
    float a, b, c;
} Taluno;

int main() {
    Taluno aluno[MAX];
    int i;
    float m = 0;

    printf("-Digite os dados do aluno-\n");

    for (i = 0; i < MAX; i++) {
        aluno[i].num = i + 1;
        printf("Aluno: %d\n", aluno[i].num);
        printf("Nome: "); fgets(aluno[i].nome,30,stdin);
        printf("Nota 1: "); scanf("%f", &aluno[i].a);
        printf("Nota 2: "); scanf("%f", &aluno[i].b);
        printf("Nota 3: "); scanf("%f", &aluno[i].c);
        m=(aluno[i].a + aluno[i].b + aluno[i].c)/3;
        printf("\nMEDIA = %.2f\n\n", m);
    }

    return 0;
}