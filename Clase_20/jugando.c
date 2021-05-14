#define MIRA_ARRIBA 0
#define MIRA_IZQUIERDA 1
#define MIRA_DERECHA 2
#define MIRA_ABAJO 3

void jugando()
{
    dibujarPersonaje(2,2);
}

void dibujarPersonaje(int x, int y)
{
    /// cuerpo
    color(17);
    gotoxy(x,y);
    printf("%c%c",219,219);

    /// mira
    color(1);
    gotoxy(x, y - 1);
    printf("%c%c", 124,124);
}
