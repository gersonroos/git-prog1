#include <stdio.h>
   
int main()
{
    //declara variaveis
    int hora;
    
    //obter valor do teclado
    printf("\n Entre com a hora");
    scanf("%d",&hora);
    
    if (hora<12)
    {
        printf("\nBom dia!!\n");
    }
    else if (hora < 18)
    {
        printf("\nBoa Tarde!!\n");
    }
    else if (hora < 24)
    {
        printf("\nBoa Noite!!\n");
    }
    else
    {
    printf("\nNumero invalido, tente novamente\n");
    }
    
    return 0;
}