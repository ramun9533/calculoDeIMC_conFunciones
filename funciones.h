#include <iostream>
using namespace std;
string nombre()
{
    char name[20];
    cout << "Dame tu nombre" << endl;
    cin >> name;
    return name;
}
float capturaPeso()
{
    float weight;
    cout << "Dame tu peso en kilogramos" << endl;
    cin >> weight;
    return weight;
}
float capturaEstatura()
{
    float stature;
    cout << "Dame tu estatura en metros" << endl;
    cin >> stature;
    return stature;
}
float IMC(float estatura, float peso)
{
    float  imc;
    imc = peso / (estatura * estatura);
    return imc;
}