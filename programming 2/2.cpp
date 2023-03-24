#include <iostream>

using namespace std;

int cant_num_div (int x, int y, int z)
{
    int acum = 0;
    for (int i = x; i <=y; i++)
    {
        if ((i % z) == 0)
        {
            acum++;
        }
    }
    return acum;
}

int main()
{
    int a,b,k;
    cout << "Ingrese los numeros A, B y K respectivamente: " << endl;
    cin >> a >> b >> k;

    cout << "La cantidad de numeros divisibles por k entre A y B es: " << cant_num_div(a,b,k);

    return 0;
}