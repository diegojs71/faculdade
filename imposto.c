#include<stdio.h>

int main()
{
    float salario, imposto;
    int mes;

    printf("Digite o salario: R$");
    scanf("%f", &salario);

    if (salario <= 1499.15)
    {
        printf("Nao pagara nenhum tributo.\n");
    }
    else if (salario <= 2246.75)
    {
        imposto = ((salario - 1499.15) * 0.075);
    }
    else if (salario <= 2995.7)
    {
        imposto = ((2246.76-1499.16) * 0.075) + ((salario - 2246.76) * 0.15);
    }
    else if (salario <= 3743.19)
    {
        imposto = ((2246.76-1499.16) * 0.075) + ((2995.7-2246.76) * 0.15) + ((salario - 2995.71) * 0.225);
    }
    else
    {
        imposto = ((2246.76-1499.16) * 0.075) + ((2995.7-2246.76) * 0.15) + ((3743.19 - 2995.71) * 0.225) + ((salario - 3743.19) * 0.275);
    }
    printf("O tributo que sera pago eh R$%.2f", imposto);

    return 0;

}

