#include "controlador_lista.h"

int main(int argc, const char * argv[]){
	TLista l;
	inicializaLista(&l);
	insereElemento(&l, 10);
	insereElemento(&l, 20);
	insereElemento(&l, 80);
	mostrarTodaLista(&l);
	return 0;	
}


