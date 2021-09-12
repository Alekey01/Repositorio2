#include <stdio.h>

void cicloFor(int x, int y);
void cicloWhile(int a, int b);
void cicloDoWhile(int w, int z);

int main()
{
    int num1, num2;

    printf("Dame un numero: ");
    scanf("%d", &num1);

    printf("Dame otro numero: ");
    scanf("%d", &num2);
    
    cicloFor(num1, num2);
    cicloWhile(num1, num2);
    cicloDoWhile(num1, num2);

    return 0;
}

void cicloFor(int x, int y)
{
    printf("Cliclo For\n");
    for(int i = x; i <= y; i++)
    {
        printf("%d\n", i);
    }
}

void cicloWhile(int a, int b)
{
    printf("Cliclo While\n");
    int i = a;
    while(i <= b)
    {
        printf("%d\n", i);
        i++;
    }
}

void cicloDoWhile(int w, int z)
{
    printf("Cliclo Do While\n");

    int i = w;
    do
    {
        printf("%d\n", i);
        i++;

    }while(i <= z);
}