#include "Integer.h"

int main(){
	Integer A1(2);
    cout << "A1 iniciado con parámetro: " << A1 << endl;
	Integer A2;
    cout << "A2 iniciado sin parámetro: " << A2 << endl;
	A2=A1;
    cout << "Operador = sobrecargado (A2=A1): " << A2 << endl;
    A2+4;
    cout << "Operador + sobrecargado (A2+4): "  << A2 << endl;
    int a = (int)A2;
    cout << "Typecast sobrecargado (a=(int)A2): " << a << endl;
    Integer A3;
    cout << "Ingrese un valor para A3: ";
    cin >> A3;
    cout << "Valor de A3: " << A3 << endl;
    A1=A1^2;
    cout << "A1 (2) al cuadrado (A^2): " << A1 << endl;
    A1=2;
    A1=A1^3;
    cout << "A1 (2) al cubo (A^3): " << A1 << endl;
    cout << "A2 a la 0: " << (A2^0) << endl;
	return 0;
}
