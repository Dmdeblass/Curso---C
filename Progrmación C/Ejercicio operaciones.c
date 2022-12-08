#include<stdio.h>
int main ()
{
    int valor1;
    int valor2;
    printf("Introducir valor 1\n");
    scanf("%i",&valor1);
    printf("Introducir valor 2\n");
    scanf("%i",&valor2);
    int suma=valor1+valor2;
    int resta=valor1-valor2;
    float multi=valor1*valor2;
    float division=valor1/valor2;
    int modul=valor1%valor2;
    printf("%i + %i = %i",valor1,valor2,suma);
    printf("%i - %i = %i",valor1,valor2,resta);
    printf("%i * %i = %f",valor1,valor2,multi);
    printf("%i / %i = %f",valor1,valor2,division);
    printf("%i modulo %i = %i",valor1,valor2,modul);
}