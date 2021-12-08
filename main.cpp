#include <iostream>
#include "listaligada.h"

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	listaligada<int> lista;
	
	lista.push_front(10);
	lista.push_front(0);
	lista.push_front(4);
	
	lista.push_back(7);
	lista.push_back(8);
	
	lista.print();
	
	cout << "Primer tamaño: " << lista.size() << endl;
	
	lista.pop_back();
	
	cout << "Segundo tamaño: "<< lista.size() << endl << endl;
	lista.print();
	
	lista.~listaligada();
	cout << endl << "Último tamaño: "<< lista.size() << endl;
	
	
	return 0;
}
