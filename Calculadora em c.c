#include <stdio.h>

int main()
{
    int op = 0;
    float num1 = 0, num2 = 0,  total = 0;
    char sair = 'n';
    
    
    do{
        printf("\n----------------------\n");
    
        printf("Escolha uma função:\n\n");
        printf("1 - Soma\n");
        printf("2 - Suntração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Sair\n");
        
        printf("\n----------------------\n");
        
        scanf("%d", &op);
        
        switch(op)
        {
            case 1:
                printf("\nDigite o Primeiro Numero = ");
                scanf("%f", &num1);
                printf("\nDigite o Segundo Numero = ");
                scanf("%f", &num2);
                total = num1 + num2;
                printf("O resultado é = %f", total);
                break;
                
            case 2:
                printf("\nDigite o Primeiro Numero = ");
                scanf("%f", &num1);
                printf("\nDigite o Segundo Numero = ");
                scanf("%f", &num2);
                total = num1 - num2;
                printf("O resultado é = %f", total);
                break;
                
            case 3:
                printf("\nDigite o Primeiro Numero = ");
                scanf("%f", &num1);
                printf("\nDigite o Segundo Numero = ");
                scanf("%f", &num2);
                total = num1 * num2;
                printf("O resultado é = %f", total);
                break;
                
            case 4:
                printf("\nDigite o Primeiro Numero = ");
                scanf("%f", &num1);
                printf("\nDigite o Segundo Numero = ");
                scanf("%f", &num2);
                if(num2 == 0)
                {
                    printf("\nDivisão por zero");
                    break;
                }
                total = num1 / num2;
                printf("O resultado é = %f", total);
                break;
            case 5:
                sair = 'y';
                break;
            default:
                printf("Digite uma opção  valida");
                break;
        }
    }while(sair != 'y');
}
