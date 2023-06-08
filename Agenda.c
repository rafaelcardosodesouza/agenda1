#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct agenda {
    char nome[30], tel[20], email[100];
    int cod;
} cadastro;

void inserirCadastro(cadastro agenda[], int *count) {
    if (*count <= 5) {
        printf("Novo Cadastro\n\n");
        printf("Cod.: %d\n", *count);

        printf("Nome: ");
        fgets(agenda[*count].nome, sizeof(agenda[*count].nome), stdin);
        fflush(stdin);

        printf("Tel.: ");
        fgets(agenda[*count].tel, sizeof(agenda[*count].tel), stdin);
        fflush(stdin);

        printf("E-mail: ");
        fgets(agenda[*count].email, sizeof(agenda[*count].email), stdin);
        fflush(stdin);

        printf("\n");
        printf("Cadastro Realizado!\n\n");

        (*count)++;
    } else {
        printf("Agenda Lotada!\n\n");
    }
}

void mostrarCadastros(cadastro agenda[], int count) {
    if (count == 1) {
        printf("Agenda Vazia!\n");
    } else {
        printf("Lista de Cadastros\n\n");

        for (int lista = 1; lista < count; lista++) {
            printf("Cod.: %d\n", lista);
            printf("Nome: %s", agenda[lista].nome);
            printf("Tel.: %s", agenda[lista].tel);
            printf("E-mail: %s\n", agenda[lista].email);
        }
    }
}

int main() {
    int menu, count = 1;
    cadastro agenda[6];
    
    setlocale(LC_ALL, "Portuguese");

    do {
        printf("Digite a opção desejada\n\n");
        printf("1 - Inserir Novo Cadastro\n");
        printf("2 - Mostrar Todos os Cadastros\n");
        printf("0 - Encerrar\n\n");
        scanf("%d", &menu);
        fflush(stdin);
        printf("\n");

        switch (menu) {
            case 1:
                inserirCadastro(agenda, &count);
                break;

            case 2:
                mostrarCadastros(agenda, count);
                break;

            case 0:
                break;

            default:
                printf("Opção Inválida!\n\n");
        }

    } while (menu != 0);

    return 0;
}
