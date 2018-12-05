#include <iostream>

using namespace std;
void obtenerTablaMultiplicar(int valor_tabla,int limite){
    int contador = 1;
    while(contador <= limite){

        int operacion = valor_tabla * contador;
        cout << valor_tabla <<" * " <<contador <<" = " << operacion << endl;
        contador = contador + 1;
    }
}
void obtenerTablaSumar(int valor_tabla,int limite){
    for(int i = 1 ; i <= limite; i++){

        int operacion = valor_tabla + i;
        cout << valor_tabla <<" + " <<i <<" = " << operacion << endl;
    }
}
int main()
{
    int limite;
    int valor_tabla;
    int opcion;
    cout << "Ingrese el limite" << endl;
    cin >> limite;

    cout << "Ingrese el valor de la tabla" << endl;
    cin >> valor_tabla;

    cout << "Ingrese la opcion" << endl;
    cin >> opcion;

    if (opcion == 1){
            obtenerTablaMultiplicar(valor_tabla,limite);
    }else{
        if(opcion == 2){
                obtenerTablaSumar(valor_tabla,limite);
        }else{
            cout << "Opcion incorrecta" << endl;
    }
    }

    return 0;
}
