#include <stdio.h>
#include <stdlib.h>

void desenhaTriangulo (int n)
{
    int i;
    if (n<1) return;
    desenhaTriangulo(n-1);
    for (i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");


}


int main()
{
    int lado;
    printf("Digite o tamanho do lado do triangulo: ");
    scanf("%d", &lado);

    desenhaTriangulo(lado);




    return 0;
}
