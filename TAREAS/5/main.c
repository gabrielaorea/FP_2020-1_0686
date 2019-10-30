#include <stdio.h>
#include <stdlib.h>
int valor (char n){ //funcion para mostrar el valor que toman los caracteres
	int x;
	switch(n){
		case 'J':
		x=10;
		break;
		case 'Q':
		x=10;
		break;
		case 'K':
		x=10;
		break;
		case 'A':
		x=11;
		break;
	}
	return x;
}
int main (int argc,char*argu[]){
	int imprimir, a;
	for(int i=1;i<argc;i++){ //estructura para recorrer la lista
		a=argu[i][0]=='J'|| argu[i][0]=='Q' || 
		argu[i][0]=='K' || argu[i][0]=='A';
		if (a==1){ //si es un caracter se usa la funcion valor
			imprimir=valor(argu[i][0]);
		}
		else{ // si no se usa atoi
			imprimir=atoi(argu[i]);
		}
		printf("%d\n", imprimir);
	} 
	return 0;
}