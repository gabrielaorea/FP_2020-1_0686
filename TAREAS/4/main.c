#include <stdio.h>
#include <stdlib.h>
int main (int argc, char* argu[])
{
	int lista [argc], suma=0;
	float promedio;

	for (int i=1;i<argc;i++){ //se copia argu a la lista
		lista[i]=atoi(argu[i]);
	}
	for (int i=1;i<argc;i++){ //se suman los elementos de la lista
		suma=suma+lista[i];
	}
	promedio=(float)suma/(argc-1); //para que solo cuenten los numeros que entran la suma se divide entre arc-1
	printf("%.2f\n", promedio);
	return 0;
}