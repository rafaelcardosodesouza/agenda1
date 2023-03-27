#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct agenda{
char nome[30], tel[20], email[100];
int cod;
}cadastro;

int main(){
    
    int menu, count = 1, lista;
    struct agenda cadastro[6];
    
    setlocale(LC_ALL, "Portuguese");
    
    do{
		printf("Digite a opção desejada\n\n");
	    printf("1 - Inserir Novo Cadastro\n");
	    printf("2 - Mostrar Todos os Cadastros\n");
	    printf("0 - Encerrar\n\n");
		scanf("%d", &menu, stdin);
		fflush(stdin);
		printf("\n");
		
		system("cls");
		
		switch(menu){
			case 1:
				if(count <= 5){
					printf("Novo Cadastro\n\n");
					printf("Cod.: %d\n", count);
				
					printf("Nome: ");
					fgets(cadastro[count].nome, 30, stdin);
					fflush(stdin);
				
					printf("Tel.: ");
					fgets(cadastro[count].tel, 20, stdin);
					fflush(stdin);
				
					printf("E-mail: ");
					fgets(cadastro[count].email, 100, stdin);
					fflush(stdin);
					
					printf("\n");
					printf("Cadastro Realizado!\n\n");
				
					count++;
					
					system("pause");
					system("cls");
						
				} else {
					printf("Agenda Lotada!\n\n");
				}					
			break;
			
			case 2:
				if(count == 1){
					printf("Agenda Vazia!\n");
				} else {
					printf("Lista de Cadastros\n\n");
					
					for(lista=1; lista<count; lista++){
						printf("Cod.: %d\n", lista);
						printf("Nome: %s", cadastro[lista].nome);
						printf("Tel.: %s", cadastro[lista].tel);
						printf("E-mail: %s\n", cadastro[lista].email);
					}
				}
				
				system("pause");
				system("cls");				
			break;
			
			case 0:
			break;
			
			default:
				printf("Opção Inválida!\n\n");	
		}
		
	}while(menu != 0);
	
	return (0);
}
