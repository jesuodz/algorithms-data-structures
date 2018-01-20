#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class Hora {
	private:
		int hora;
		int minut;
		int segund;
		
	public:
		Hora(){ inicializar( 0, 0, 0 ); }
		Hora( int h );
		Hora( int h, int m );
		Hora( int h, int m, int s );
		void inicializar( int h, int m, int s);
		void cargar_hora();
		void mostrar_hora();
};

Hora::Hora( int h ) {
	inicializar( h, 0, 0);
}


Hora::Hora( int h, int m ) {
	inicializar( h, m, 0 );
}

Hora::Hora( int h, int m, int s ) {
	inicializar( h, m, s );
}


void Hora::inicializar( int h, int m, int s) {
	if ( s >= 60 ) {
		segund = s % 60;
		m = m + s / 60;
	} else {
		segund = s;
	}

	if ( m > 60 ) {
		minut = m % 60;
		h = h + m / 60;
	} else {
		minut = m;
	}
	hora = h;
}

void Hora::cargar_hora() {
	cout << "Ingrese la hora: " << endl;
	cin >> hora;

	do {
		cout << " Ingrese el minuto " << endl;
		cin >> minut;

		if ( minut<0 || minut>59 ) {
		    cout << " Valor invalido: " << endl;
        }

	} while (minut < 0 || minut > 60 );
	
	do {
		cout << " Ingrese el segundon " << endl;
		cin >> segund;
		
		if ( segund < 0 || segund > 59 ) {
            cout << " Valor invalido: " << endl;
        }
        
	} while( segund < 0 || segund > 59 );
}

void Hora::mostrar_hora() {
	cout << " La hora es: " << hora << endl;
	cout << " Los minutos son: " << minut << endl;
	cout << " Los segundos son: " << segund << endl;
}

int main() {
    Hora h1, h2 ( 5 ), h3( 4, 20 ), h4( 4, 20, 50 ), h5( 4, 70, 80 );
    //h1.cargar hora ();
    cout << endl<<"h1: " << endl;
    h1 .mostrar_hora();
    cout << endl<<"h2: " << endl;
    h2.mostrar_hora();
    cout << endl<<"h3: " << endl;
    h3.mostrar_hora();
    cout << endl<<"h4: " << endl;
    h4.mostrar_hora();
    cout << endl<<"h5: " << endl;
    h5.mostrar_hora();
    
    system("PAUSE");
}
