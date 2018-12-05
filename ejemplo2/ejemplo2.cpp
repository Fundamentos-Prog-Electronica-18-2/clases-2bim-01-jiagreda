#include <iostream>

using namespace std;


int suma(int a, int b){
    int c = a + b;
    // cout << "La suma es: " << c << "." << endl;
    return c;
}

int suma2(int a, int b=1){
    int c = a + b;
    // cout << "La suma es: " << c << "." << endl;
    return c;
}
string metodo2(){
    return "Mensaje";
}

int main()
{

    // suma(10, 2);
    // suma2(10, 10);
    int sumaTotal = suma(10, 20) + suma2(100);
    cout << "La suma total es: " << sumaTotal << endl;
    return 0;
}
