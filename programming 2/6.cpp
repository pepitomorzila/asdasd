#include <iostream>
#include <math.h>
using namespace std;

bool semiprimo (int n)
{
    bool cheq = false;
    int cont = 0, primoN[100], x = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    cont++;
                }
            }
            if (cont == 2)
            {
                primoN[x] = i;
                x++;
            }
            cont = 0;
        }
    }
    if (x >= 2) cheq = true;
    else if (x == 1 && pow(primoN[0],2) == n)
    {
        cheq = true;
    }
    return cheq;
}

int main()
{
    int x;
    cout << "Ingrese un numero para saber si es un semi-primo: " << endl;
    cin >> x;
    cout << semiprimo(x);



    return 0;
}