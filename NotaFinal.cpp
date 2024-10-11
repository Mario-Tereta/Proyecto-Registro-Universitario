#include <iostream>
using namespace std;
int main () {
	int parcial1, parcial2, examen, zona, nota;
	
	cout << "Ingrese la nota de su primer parcial: ";
	cin >> parcial1;
	cout << "Ingrese la nota de su segundo parcial: ";
	cin >> parcial2;
	cout << "Ingrese la nota de su examen: ";
	cin >> examen;
	cout <<"Ingrese el punteo de su zona: ";
	cin >> zona;
	nota= parcial1 + parcial2 + examen + zona;
	cout << "Su nota final es: " << nota << endl;
	
	
	if (nota >= 60) {
		cout << "Aprobado" << endl;
	} else {
	 cout << "Reprobado" << endl;
	}
	
	return 0;
	
}
