#include <stdio.h>

int main()
{
    int i, j;
    float notas[4][3]; //coluna 0,1,2 =av1, av2 e av3
    
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("\nEntre com a Av%d do aluno: %d", j+1, i+1);
            scanf("%f", &notas[i][j]);
        }
    }
    return 0;
}