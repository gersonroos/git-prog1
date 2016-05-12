#include <stdio.h>

int main()
{
    int num;
    printf("entre com um num inteiro:");
    scanf("%d", &num);

    if(num%2==0)
    {
       printf("este numero eh par\n");
        
    }
    else
    {
       printf("este numero eh impar\n");
    }
    
    return 0;
    
}
