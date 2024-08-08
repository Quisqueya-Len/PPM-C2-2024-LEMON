#include <stdio.h>
/* En el libro utiliza ::K para la variable global en la función
 f1 pero debido a que :: solo esta disponible en C++ la sustituí por k */
/* Conflicto de variables con el mismo nombre. */

void f1(void);              /* Prototipo de función. */
int K = 5;                  /* Variable global. */

void main (void)
{
    int I;
    for (I = 1; I <= 3; I++)
        f1();
}
void f1(void)
/* La función utiliza tanto la variable local I como la variable
global I. */
{
    int k = 2;              /* Variable local. */
    k += k;
    printf("\n\nEl valor de la variable local es: %d", k);
    K = K + k;          /* Uso de ambas variables. */
    printf("\nEl valor de la variable global es: %d", K);
}



