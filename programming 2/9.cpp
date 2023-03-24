#include <iostream>

using namespace  std;

bool permutacion (int x[100], int n)
{
    bool cheq = false;
    int j = 0, acum1 = 1, acum2 = 1;
    for (int i = 1; i < n; i++)
    {
        acum1 *= i;
        acum2 *= x[j];
        j++;
    }
    cout << acum1 << endl;
    cout << acum2 << endl;

    if (acum1 == acum2) cheq = true;

    return cheq;
}   

int main()
{
    int array[100], n;
    cout << "Cuantos numeros va a introducir?: " << endl;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cout << "Introduzca un numero en la posicion " << i+1 << ": " << endl;
        cin >> array[i];
    }
    cout << permutacion(array,n);




    return 0;
}