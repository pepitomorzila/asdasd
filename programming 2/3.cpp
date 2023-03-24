#include <iostream>

using namespace std;

int mcd (int m, int n)
{
    int max, mcdivisor;

    if (m >= n) max = m;
    else if (n > m) max = n;

    for (int i = 1; i <= max; i++)
    {
        if (m % i == 0 && n % i == 0) mcdivisor = i;
    }

    return mcdivisor;
}


int main()
{
    int m,n;
    cout << "Ingrese el valor de M y N para calcular el MCD: " << endl;
    cin >> m >> n;

    cout << "El maximo comun divisor entre " << m << " y " << n << " es: " << mcd(m,n);



    return 0;
}