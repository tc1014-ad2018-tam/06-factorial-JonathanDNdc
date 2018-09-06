/*
 * Este programa calcula el numero factorial del que ingrese el usuario.
 * Si el usuario ingresa 5, el programa imprimira a pantalla 120.
 * La entrada maxima que el programa calcula con precision es el 12.
 *
 * Autor: Jonathan Nuñez de Caceres.
 * Fecha: 6 de Septiembre del 2018
 * Correo: A01411277@itesm.mx
 */

#include <stdio.h>

int main() {
    // Declaracion de variables.
    unsigned int factorial = 1;
    unsigned int i = 1;
    int n;

    // Se le pide al usuario que ingrese un numeor positivo.
    printf("Enter a positive number to get its factorial:");
    scanf("%d", &n);


    if(n < 0){
        printf("There is only a factorial for positive numbers.");
    } else{
        // Aqui empieza el ciclo while
        // El numero que ingrese el usuario tiene que ser mayor a 1 para que
        // el loop empiece.
        while(i < n){
            factorial *= n;
            n--;
        }

        // Se imprime el resultado a pantalla.
        printf("The factorial number is: %d", factorial);
    }

    return 0;
}