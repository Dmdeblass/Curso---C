#include <stdio.h>
int main(){
    int variable;
    printf("Digite un numero");
    fflush(stdin);
    scanf("%i", &variable);
    printf("el numero introducido es %i",variable);
    return 0;
}