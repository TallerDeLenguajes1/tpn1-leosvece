#include <stdio.h>

int main(){
    int x = 1, *p_x;
    p_x = &x;

    printf("contenido del puntero: %d\n", *p_x);
    printf("direccion de memoria del puntero: %d \n", p_x);
    printf("direccion de la variable: %d \n", &x);
    printf("direccion de memoria del puntero: %d \n", &p_x); 
   	printf("%d", sizeof(x));

    return 0;
}
/*
a) El contenido del puntero
b) La dirección de memoria almacenada por el puntero.
c) la dirección de memoria de la variable.
d) la dirección de de memoria del puntero.
e) el tamaño de memoria utilizado por esa variable usando la función sizeof()*/