#include <iostream>

using namespace std;
int obtener_edad(int anioActual, int anioNacimiento){
    int valor = anioActual - anioNacimiento;
    return valor;
}

int main()
{
    string nombre;
    string apellido;
    int anioNacimiento;
    int anioActual;
    int edad;
    cout << "Ingrese su nombre" << endl;
    cin >> nombre;

    cout << "Ingrese su apellido" << endl;
    cin >> apellido;

    cout << "Ingrese su año de nacimiento" << endl;
    cin >> anioNacimiento;

    cout << "Ingrese el año actual" << endl;
    cin >> anioActual;

    edad = obtener_edad(anioActual, anioNacimiento);


    cout << "Nombre " << nombre << endl;
    cout << "Apellido " << apellido << endl;
    cout << "Edad " << edad << endl;
    return 0;
}
