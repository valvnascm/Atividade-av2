#include <stdio.h>
#include <funcoes.h>

int main()
{
    char produto[10][50];
    float preco[10];
    int quantidade[10];
    int opcao, qtd, codigo;

do {
    printf("Escolha a opcao: \n 1 - Cadastrar Produto \n 2 - Consultar Produto \n 3 - Regristar venda \n  4 - Estoque Baixo \n 5 - Registrar Entrada \n 6 - Calcular Faturamento \n 7 - ENCERRAR PROGRAMA \n");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1: cadastro_Produto( produto, preco, quantidade);
        break; 

        case 2: consultar_Produto( produto, preco, quantidade);
        break;

        case 3: registrar_Venda( produto, quantidade, codigo, qtd);
        break;

        case 4: estoque_Baixo( produto, quantidade);
        break; 
        
        case 5: registrar_Entrada(produto, quantidade, codigo, qtd);
        break;

        case 6: calcular_Faturamento(preco, qtd);
        break;

        case 7: printf("Programa Encerrado! \n");
        break;

        default: printf("Digite uma opcao valida! \n");
        break;
    }
    } while(opcao != 6);
return 0;
}