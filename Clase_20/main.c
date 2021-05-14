/**
    UTN
    Tecnicatura Universitaria en Programacion
    Programacion 1 y Laboratorio de computacion 1
    Comision 10
    Prof. Matias Pascual
*/

/**
    CLASE 20:
        * Organizacion del Trabajo Practico Final
        * Utilizacion de funciones gotoxy() y color()
*/

#include <stdio.h>
#include <stdlib.h>
#include "utiles.h"
#include <windows.h>

/// codigo de ejemplo
void cuadrado(int x, int y, char texto[])
{
    gotoxy(x,y);

    printf("--------------%c--------%c----%c",205, 205, 1);

    gotoxy(x + 3,y + 1);
    printf("%s", texto);

    gotoxy(x,y + 2);
    printf("|                         |");

    gotoxy(x,y + 3);
    printf("---------------------------");
}

int main()
{
    getColors();

    Beep(440, 1000);

    int pantalla[3][3] =
    {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    int margenX = 30;
    int margenY = 5;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(pantalla[i][j] == 1)
            {
                cuadrado(i * margenX, j * margenY, "buenos dias");
            }
        }
    }

    getColors();

    color(7);

    return 0;
}


