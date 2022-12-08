#include <stdio.h>
#define PI 3.1416
int main()
{
    // Guarda numeros mas pequeños dentro de rango de -128 a 128
    short corto=7;
    printf("short=%i\n",corto);
    //Guarda numeros mas grandes que un entero 
    long largo=323456;
    printf("long=%li\n",largo);
    //Guarda un unico caracter
    char caracter='C';
    printf("Caracter=%c\n",caracter);
    //Guarda una cadena de caracteres delimitada
    char palabra[10]="Hola";
    printf("Char=%s\n",palabra);
    //Guarda numeros con decimales 
    float flotante=12.654;
    printf("Flotante=%f\n",flotante);
    //Guarda numeros similares a float, pero mas grande
    double doble=545454.545454;
    printf("Doble=%lf\n\n",doble);
    
    float variable1 = 6;
    float suma;
    suma = variable1 + PI;
    printf("El resultado de 6+Pi es %f",suma); 
    return 0;

    
}