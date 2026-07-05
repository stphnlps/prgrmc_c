#include <stdio.h>
// crie um programa em C que gerencia o cadastro de alunos em uma turma
int main() {
    int idade, matricula;
    float altura;
    char nome[50];
   
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Cadastro realizado com sucesso!\n");
    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %.2f\n", idade, altura);

    return 0;
}