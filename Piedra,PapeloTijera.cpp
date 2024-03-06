#include <iostream>
using namespace std;

class jugador {
private:
	int puntaje;	
public:
	int opcion;
	jugador() : opcion(), puntaje(0) {}
	int getpuntaje() {
		return puntaje;
	}
	void setpuntaje(int nuevopuntaje) {
		puntaje = nuevopuntaje;
	}
	void seleccionar() {
		cout << "Introd. su opcion: "<<endl;
		cout << "1.Piedra"<<endl;
		cout << "2.Papel"<<endl;
		cout <<"3.Tijera"<<endl;
		cin >> opcion;
	}
	int evaluar() {
		int opcionjugador;
		if (opcion == 1)
			opcionjugador = opcion;
		else if (opcion == 2)
			opcionjugador = opcion;
		else if (opcion == 3)
			opcionjugador = opcion;
		else {
			cout << "No valido"<<endl;
			return 0; 
		}
		int opciones[] = {1,2,3};
		cout << "Seleccionaste: " << opcionjugador <<endl;
		int jugador2 = 2; 
		cout << "El segundo jugador selecciono: "<< opciones[jugador2 - 1] <<endl;
		if (opcionjugador == jugador2) {
			cout << "Empate"<<endl;
			return -1;
		} else if ((opcionjugador == 1 && jugador2 == 3) || 
			(opcionjugador == 2 && jugador2 == 1) || 
			(opcionjugador == 3 && jugador2 == 2)) {
			cout << "perdiste"<<endl;
			return 0;
		} else {
				cout << "ganaste"<<endl;
				puntaje++;
				return -1;
			}
	}
	void sumarpuntaje() {
		puntaje++;
	}
};
int main() {
	jugador jugador;
	int continuar;
	do {
		int resultado = jugador.evaluar();
		jugador.seleccionar();
		jugador.evaluar();
		if (resultado == 1) {
			jugador.sumarpuntaje();
		}
		cout << "Tu puntaje: " << jugador.getpuntaje() <<endl;
		cout << "¿Jugar de nuevo?: "<<endl;
		cout << "Si = 1    No=0"<<endl;
		cin >> continuar;
	} while (continuar == 1);
	return 0;
}
