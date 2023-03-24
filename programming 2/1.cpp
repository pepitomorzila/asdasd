#include <iostream>

using namespace std;

float saltos(float x,float y,float d)
{
    float saltos_minimos;
    saltos_minimos = (y - x) / d;
    return saltos_minimos;
}

int main()
{
    float x, y, d;
    do
    {
        cout << "Ingrese la posicion x: " << endl;
        cin >> x;
        cout << "Ingrese la posicion Y: " << endl;
        cin >> y;
        cout << "Ingrese la distancia d (la distancia que salta fija): " << endl;
        cin >> d;

        if (y < x)
        {
            cout << "Y debe ser mayor a X, porfavor ingrese nuevamente los valores: " << endl;
        }
    } while (y < x);

    cout << "El numero de saltos minimos es: " << saltos(x, y, d) << endl;







    return 0;
}