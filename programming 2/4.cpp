#include <iostream>

using namespace std;

int factorial(int x)
{
    int result = 1;
    
    for (int i = 1; i <= x; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    cout << "Ingrese un numero para obtener su factorial: " << endl;
    cin >> n;

    cout << "El factorial de " << n << " es: " << factorial(n);



    return 0;
}