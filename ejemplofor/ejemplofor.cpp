#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i <= 20; i++){
            if ((i%2)==0){
    cout << i << endl;
            }
    }
    cout << "**********" << endl;
    int contador = 0;
    while (contador <= 20){
            if((contador%2) == 0){
            cout << contador << endl;
            }
            contador = contador + 1;
    }
    return 0;
}
