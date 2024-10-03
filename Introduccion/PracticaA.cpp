
// enteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;

int main() {

    locale loc("");
    cout.imbue(loc);
    // 1. Entero (int)
    int numeroEntero = 42;
    cout << "Entero: " << numeroEntero << endl;
    cout << "Rango Entero : " << numeric_limits<int>::min() << " a " << numeric_limits<int>::max() << endl;

    // 2. Entero corto (short int)
    short int numeroCorto = 32000;
    cout << "Entero corto: " << numeroCorto << endl;
    cout << "Rango Entero corto : " << numeric_limits<short int>::min() << " a " << numeric_limits<short int>::max() << endl;

    // 3. Entero largo (long long)
    long long numeroLargo = 1234567890L;
    cout << "Entero largo: " << numeroLargo << endl;
    cout << "Rango Entero Largo: " << numeric_limits<long long>::min() << " a " << numeric_limits<long long>::max() << endl;

    // 4. Entero sin signo (unsigned int)
    unsigned int numeroSinSigno = 4000000000U;
    cout << "Entero sin signo: " << numeroSinSigno << endl;
    cout << "Rango Entero sin signo : " << numeric_limits<unsigned int>::min() << " a " << numeric_limits<unsigned int>::max() << endl;

    // 5. Entero corto sin signo (unsigned short int)
    unsigned short int numeroCortoSinSigno = 65000;
    cout << "Entero corto sin signo: " << numeroCortoSinSigno << endl;
    cout << "Rango Entero corto sin signo : " << numeric_limits<unsigned short int>::min() << " a " << numeric_limits<unsigned short int>::max() << endl;

    // 6. Entero largo sin signo (unsigned long long)
    unsigned long long numeroLargoSinSigno = 4000000000UL;
    cout << "Entero largo sin signo: " << numeroLargoSinSigno << endl;
    cout << "Rango Entero largo sin signo : " << numeric_limits<unsigned long long>::min() << " a " << numeric_limits<unsigned long long>::max() << endl;

    // 7. Entero con signo explícito (signed int)
    signed int numeroConSigno = -42;
    cout << "Entero con signo: " << numeroConSigno << endl;
    cout << "Rango Entero con signo : " << numeric_limits<signed int>::min() << " a " << numeric_limits<signed int>::max() << endl;

    // 8. Entero corto con signo explícito (signed short int)
    signed short int numeroCortoConSigno = -32000;
    cout << "Entero corto con signo: " << numeroCortoConSigno << endl;
    cout << "Rango Entero corto con signo : " << numeric_limits<signed short int>::min() << " a " << numeric_limits<signed short int>::max() << endl;

    // 9. Entero largo con signo explícito (signed long int)
    signed long int numeroLargoConSigno = -1234567890L;
    cout << "Entero largo con signo: " << numeroLargoConSigno << endl;
    cout << "Rango Entero largo con signo: " << numeric_limits<signed long int>::min() << " a " << numeric_limits<signed long int>::max() << endl;

    // 10. Entero largo largo (long long int)
    long long int numeroLargoLargo = 123456789012345LL;
    cout << "Entero largo largo: " << numeroLargoLargo << endl;
    cout << "Rango Entero : " << numeric_limits<long long int>::min() << " a " << numeric_limits<long long int>::max() << endl;



    int edad;
    cout << "Dame tu edad : ";
    cin >> edad;
    cout << endl;
    cout << "tu edad es : " << edad << endl;

    double numeroPI = 3.141632;
    cout << fixed;
    cout << setprecision(4);
    cout << "Numero PI : " << numeroPI << endl;

    float kilos;
    cout << "Dame tu peso : ";
    cin >> kilos;
    cout << "Tu peso es : " << kilos << endl;

    const int velocidadLuz = 300000;
    const float gravedad = 9.81;

    string nombre = "fer";
    string apellidoPaterno = "Ortiz " "Gil";

    cout << "Nombre Completo:" << " " << apellidoPaterno << " " << nombre << endl;

    return 0;
}
