/**
 * @file problema1.c
 * @author your name (you@domain.com)
 * @brief  obtiene el promedio de una cantidad de numeros
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright C
 * 
 */
#include <stdio.h>

int main()
{
    int num = 0, suma = 0;
    float prom = 0.0;
    for (int i = 1; i < 6; i++)
    {
        printf("escribe el %d numero: ", i);
        scanf("%d", &num);
        suma += num;
    }

    prom = (float)suma / 5.0;

    printf("el promedio es %10.2f\n", prom);
    return 0;
}
