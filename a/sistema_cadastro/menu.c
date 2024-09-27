#include <stdio.h>
#include <stdlib.h>
#include "estoque.c"
#include "cadastro.c"
#include "consulta.c"
#include "venda.c"



int menu(){
    int acao;
    do{
        printf("\n\n\n--- Bem vindo a livraria do seu ze! ---");
        printf("\nQual acao deseja realizar?");
        printf("\n1- Cadastro\n2- Consulta\n3- Venda\n4- Estoque\nOpcao: ");
        scanf("%d", &acao);
        switch (acao){
        case 1:
            cadastroitem();
            break;
        case 2:
            consulta();
            break;
        case 3:
            venda();
            break;
        case 4:
            estoque();
            break;
        case 5:
            system("cls");
            printf("Acao invalida, selecione uma acao valida!\n");
            menu();
        break;
    } 
    }while (acao < 0 && acao > 4);
        
    return 0;
}
