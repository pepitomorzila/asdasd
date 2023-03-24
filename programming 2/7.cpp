#include <iostream>

using namespace std;

void intercambiar (int x, int y)
{
    int x1, y1;
    x1 = x;
    y1 = y;
    x = y1;
    y = x1;
    cout << "Ahora el valor de 'x' es: " << x << ". Y el valor de 'y': " << y; 
}

int main()
{
    int x,y;
    cout << "Ingrese dos numeros, X e Y: " << endl;
    cin >> x >> y;
    intercambiar(x,y);


    return 0;
}