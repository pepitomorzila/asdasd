#include <iostream>
#include <math.h>
using namespace std;

int mult_array (int array[100], int x, int n)
{
    int result = 0, j = n;
    for (int i = 0; i < n+1; i++)
    {
        result += array[i] * pow(x,j);
        j--;
    }

    return result;
}

int main()
{
    int x ,n, array[100];
    cout  << "Ingrese el grado del polinomio: " << endl;
    cin >> n;
    cout << "Ingrese el valor de x: " << endl;
    cin >> x;

    for (int i = 0; i < n+1; i++)
    {
        cout << "Ingrese la componente " << i+1 << " del array: " << endl;
        cin >> array[i]; 
    }

    cout << "El resultado del polinomio evaluado en el valor " << x << " es: " << mult_array(array,x,n);


    return 0;
}