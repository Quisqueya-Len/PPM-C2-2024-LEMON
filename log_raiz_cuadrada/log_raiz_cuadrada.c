#include <stdio.h>

int main ()
{
  float x = 0.0;
  float b = x;
  int cnt = 0;

  printf ("\nPrograma Calculo Raiz Cuadrada");

  printf ("\nIngresa Numero: ");

  scanf ("%f", &x);

  b = x;

  while (!(b == (x / b)))
	{
	  b = 0.5 * ((x / b) + b);
	  printf ("Raiz Cuadrada de %f = %f", x, b);
	  cnt++;
	  printf ("\nValor de cnt: %d\n", cnt);
	  printf ("-----------------------\n");
	  if (cnt > 10)
		break;
	}

  printf ("Raiz Cuadrada de %f = %f", x, b);

  }
