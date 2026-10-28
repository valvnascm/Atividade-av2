int cadastro_Produto(char produto[10][50], float preco[10], int quantidade[10])
{
    for(int i=0; i < 10; i++){
            printf("Cadastre os seus produtos: \n");
            scanf("%s", produto[i]);

            printf("Diga a quantidade: \n");
            scanf("%d", &quantidade[i]);

            printf("Diga o preco: \n");
            scanf("%f", &preco[i]);
    }
    return 0;
}

int consultar_Produto(char produto[10][50], float preco[10], int quantidade[10])
{
     for(int i = 0; i < 10; i++){
            printf("Codigo do produto: %d \n", i + 1);
            printf("Seus produtos sao: %s \n", produto[i]);
            printf("Quantidade: %d \n", quantidade[i]);
            printf("Preco: %.2f \n", preco[i]);
    }
    return 0;
}


int registrar_Entrada(char produto[10][50], int quantidade[10], int codigo, int qtd)
{
    int i;

    i = codigo - 1;

    if (codigo < 1 || codigo > 10) {
        printf("Codigo invalido\n");
    } else if (qtd <= 0) {
        printf("Quantidade invalida\n");
    } else {
        quantidade[i] = quantidade[i] + qtd;
        printf("Entrada registrada: %d unidade(s) de %s. Estoque atual: %d\n", qtd, produto[i], quantidade[i]);
    }

    return 0;

}

int registrar_Venda(char produto[10][50], int quantidade[10], int codigo, int qtd)
{
    int i;

    i = codigo - 1;

    if (codigo < 1 || codigo > 10) {
        printf("Codigo invalido\n");
    } else if (qtd <= 0) {
        printf("Quantidade invalida\n");
    } else if (quantidade[i] >= qtd) {
        quantidade[i] = quantidade[i] - qtd;
        printf("Venda registrada: %d unidades de %s\n", qtd, produto[i]);
    } else {
        printf("Sem estoque\n");
    }

    return 0;

}

int estoque_Baixo(char produto[10][50], int quantidade[10])
{
    for(int i = 0; i < 10; i++)
    {
        if(quantidade[i]<5)
        {
        printf("Produto %s, esta com quantidade baixa %d \n", produto[i], quantidade[i]);
        }
    }
    return 0;
}

float calcular_Faturamento(float preco, int qtd)
{
    return preco * qtd;
}