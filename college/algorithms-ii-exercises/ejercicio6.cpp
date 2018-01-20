/*  EJERCICIO N�6 DE HERENCIA
    DES-COMENTAR LOS OBJETOS CREADOS EN MAIN() PARA PROBAR.
*/

# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

const int n = 100;
using namespace std;

class Vivienda {
    protected:
        char direccion[ n ];
        int nPortal;
        int telf;
    public:
        Vivienda() {}
        Vivienda( int nP, char d[ n ], int t );
        void printAttrViv();
        void actTelf();
};

Vivienda::Vivienda( int nP, char d[ n ], int t ) {
    nPortal = nP;
    strcpy( direccion, d );
    telf = t;
}

void Vivienda::printAttrViv() {
    cout << "Numero de portal: " << nPortal << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Numero de telefono: " << telf << endl;
}

void Vivienda::actTelf() {
    cout << "Actual numero de telefono: " << telf << endl;
    cout << "Nuevo numero de telefono: "; cin >> telf;
    cout << "El numero de telefono ha sido actualizado correctamente!" << endl;
}

class Residencia:public Vivienda {
    protected:
        int mt2;
        int numHab;
    public:
        Residencia() {}
        Residencia( int nP, char d[ n ], int t, int m2, int nH );
        void printAttrRes();
        void actDim();
};

Residencia::Residencia( int nP, char d[ n ], int t, int m2, int nH )
        :   Vivienda( nP, d, t ) {
            mt2 = m2;
            numHab = nH;
}

void Residencia::printAttrRes() {
    printAttrViv();
    cout << "Numero de habitantes: " << endl;
    cout << "Dimensiones: " << mt2 << "m2" << endl;
}

void Residencia::actDim() {
    cout << "Actual dimension: " << mt2 << endl;
    cout << "Nueva dimension: "; cin >> mt2;
    cout << "Las dimensiones ha sido actualizado correctamente!" << endl;
}
class Departamento: public Residencia {
    protected:
        int nBloque;
    public:
        Departamento() {}
        Departamento( int nP, char d[n], int t, int m2, int nH, int nB );
        void printAttrDep();
};

Departamento::Departamento(int nP, char d[n], int t, int m2, int nH, int nB)
        : Residencia( nP, d, t, m2, nH ) {
            nBloque = nB;
        }

void Departamento::printAttrDep() {
    printAttrRes();
    cout << "Numero de bloque: " << nBloque << endl;
}

class Casa: public Residencia {
    protected:
        char sector[ n ];
    public:
        Casa() {}
        Casa(int nP, char d[ n ], int t, int m2, int nH, char s[ n ]);
        void printAttrCa();
};

Casa::Casa(int nP, char d[ n ], int t, int m2, int nH, char s[ n ])
    : Residencia( nP, d, t, m2, nH ) {
        strcpy( sector, s );
    }

void Casa::printAttrCa() {
    printAttrRes();
    cout << "Sector: " << sector << endl;
}

// Desde aqui, edificios comerciales
class Comercial: public Vivienda {
    protected:
        char tipo[ n ];
public:
    Comercial() {}
    Comercial( int nP, char d[ n ], int t, char tp[ n ] );
    void printAttrCom();
};

Comercial::Comercial( int nP, char d[ n ], int t, char tp[ n ] )
        : Vivienda( nP, d, t ) {
        strcpy( tipo, tp );
        }

void Comercial::printAttrCom() {
    printAttrViv();
    cout << "Tipo de edificio: " << tipo << endl;
}

class Industrial: public Comercial {
    protected:
        char actividad[ n ];
    public:
        Industrial() {}
        Industrial( int nP, char d[ n ], int t, char tp[ n ], char act[ n ]);
        void printAttrInd();
        void newAct();
};

Industrial::Industrial( int nP, char d[ n ], int t, char tp[ n ], char act[ n ])
        : Comercial( nP, d, t, tp ) {
        strcpy(actividad, act);
        }

void Industrial::printAttrInd() {
    printAttrCom();
    cout << "Actividad: " << actividad << endl;
}

void Industrial::newAct() {
    cout << "Actividad realizada en el edificio actualmente: " << actividad << endl;
    cout << "Nueva actividad: "; cin >> actividad;
    cout << "La actividad ha sido actualizado correctamente!" << endl;
}

class Oficina:public Comercial {
    protected:
        char name[ n ];
public:
    Oficina() {}
    Oficina( int nP, char d[ n ], int t, char tp[ n ], char tS[ n ]);
    void printAttrOfi();
};

Oficina::Oficina( int nP, char d[ n ], int t, char tp[ n ], char tS[ n ])
    : Comercial( nP, d, t, tp ) {
        strcpy(name, tS);
    }

void Oficina::printAttrOfi() {
    printAttrCom();
    cout << "Tipo de servicio: " << name << endl;
}

main() {
    /*
    // PARA VIVIENDA
    Vivienda vivienda( 2, "Carupano", 0 );
    vivienda.printAttrViv();
    cout << endl;

    // PARA RESIDENCIA
    Residencia residencia( 4, "Cumana", 0, 5, 120 );
    residencia.printAttrRes();
    cout << endl;

    // PARA DEPARTAMENTO
    Departamento departamento( 10, "Carupano", 3335689, 7, 70, 2 );
    departamento.printAttrDep();

    cout << endl;
    // PARA CASA
    Casa casa( 10, "Carupano", 3335689, 7, 70, "El Muco" );
    casa.printAttrCa();
    casa.actDim();

    cout << endl;
    // PARA EDIFICIO COMERCIAL
    Comercial EdifCom( 55, "Carupano", 0, "Privado" );
    EdifCom.printAttrCom();

    cout << endl;
    // PARA EDIFICIO INDUSTRIAL
    Industrial EdifIndus( 30, "Yaguaraparo", 87945885, "Privado", "Procesadora de cacao" );
    EdifIndus.printAttrInd();
    EdifIndus.actTelf();
    EdifIndus.newAct();

    cout << endl;
    // PARA EDIFICIO DE OFICINAS
    Oficina EdifOfi( 1, "Caracas", 412589635, "Publica", "Palacio de Miraflores" );
    EdifOfi.printAttrOfi();
    */

    system( "PAUSE" );
}
