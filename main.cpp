#include <iostream>
#include "funciones.h"
using namespace std;
string nombre();
float IMC();
float capturaPeso();
float capturaEstatura();
int main()
{
    string name;
    float estatura, peso, imc;
    name = nombre();
    estatura = capturaEstatura();
    peso = capturaPeso();
    imc = IMC(estatura, peso);
    cout << "hola  " << name << " tu IMC es:  " << imc << endl;
    return 0;
}
