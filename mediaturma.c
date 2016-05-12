#include <stdio.h> 

    int main()
{ 
    int i, maior=10;
    float av1[10], soma=0, media;
    
    for(i=0; i<=9;i++)
{ 
    printf("\nEntre com a Av1 do Aluno:%d:", i+1); 
    scanf("%f",&av1[i]);
    soma+=av1[i];   
} 
     media= soma/i;
     printf("\nMedia da Turma= %.2f\n", media);
     
     for(i=0;i<=9;i++)
     {
         if(av1[i] >= media)
         {
             printf("\nNota Maior que Média - %.2f\n", av1[i]);
         }
     }
     
     return 0; 
}