# include <stdio.h>
/* ESTA PARTE CUIDARÁ DE CADASTRO DE LIVROS!! */
struct st_cadastro
{
    int codigobarras, quantest, anopub;
    float valorvenda;
    char titulo[50], autor[50];
}cadastrar;




 cadastroitem(){
    int cadcod, cadano, cadquant, cadvenda;
    char cadtit, cadaut;
    printf("Digite o codigo de barras do produto\n");
    scanf("%d",&cadcod);
    printf("Digite o titulo do livro:\n");
    scanf("%s", &cadtit);
    printf("Digite o autor do livro:\n");
    scanf("%s", &cadaut);
    printf("Digite o ano de publicacao do livro:\n");
    scanf("%d", &cadano);
    printf("Digite a quantidade em estoque do produto:\n");
    scanf("%d", &cadquant);
    printf("Digite o preco de venda do(s) livro(s):\nR$");
    scanf("%d", &cadvenda);

    printf("O produto cadastrado foi: ");
    return menu();
}