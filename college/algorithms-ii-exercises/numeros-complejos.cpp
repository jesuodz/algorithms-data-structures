# include <iostream>

using namespace std;

class NumeroComplejo {
    private:
        int pReal;
        int pImagi;
    public:
        friend ostream& operator << ( ostream &o, const NumeroComplejo &z );
        friend istream& operator >> ( istream &i, NumeroComplejo &z );
        NumeroComplejo operator+();
};

ostream& operator << ( ostream &o, const NumeroComplejo &z ) {
    o << "( " << z.pReal << ", " << z.pImagi << "i )" << endl;
    return o;
}

istream& operator >> ( istream &i, NumeroComplejo &z ) {
    cout << "Ingrese la parte real: "; i >> z.pReal;
    cout << "Ingrese la parte imaginaria: "; i >> z.pImagi;
    return i;
}

NumeroComplejo NumeroComplejo::operator+( NumeroComplejo n ) {
    NumeroComplejo result;
    result.pReal = pReal + n.pReal;
    result.pImagi = pImagi + n.pImagi;
    return result;
}

main() {
    NumeroComplejo z1, z2;

    cout << "Cargar Z1" << endl; cin >> z1;
    cout << "Cargar Z2" << endl; cin >> z2;

    cout << "Z1: " << z1;
    cout << "Z2: " << z2;
}
