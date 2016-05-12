#include<stdio.h> 

    int main ()
    {
    int idade; 
          //ler do teclado
    printf("\nQual sua idade?"); 
    scanf ("%d", &idade); 
    
    if(idade<16)
  { 
    printf("voce nao pode votar!\n"); 
  } 
    else if (idade==16 || idade==17 || idade>70)
  { 
    printf("\nVoto facultativo!"); 
  } 
    else
  {
    printf("\n Voto Obrigatorio\n");
  }
    return 0; 
} 
