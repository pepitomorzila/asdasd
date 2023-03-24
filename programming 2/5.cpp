
#include <iostream>

using namespace std;

bool num_primo(int n, int m)
{
    int primoN[100], primoM[100], x = 0, cont=0, y = 0;
    bool cheq = false;
    for (int i = 1; i <= n; i++)
    {
        //BUSCO LOS DIVISORES DE N
        if (n % i == 0)
        {
            //COMPRUEBO SI EL DIVISOR DE N, QUE ES i, ES PRIMO 
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    //CADA VEZ QUE I ES PRIMO EL CONTADOR INCREMENTA
                    cont++;
                }
            }
            //ANALIZO SI i ES PRIMO
            if (cont == 2)
            {
                //SI LO ES, ME GUARDA EN LA POSICION X = 0, EL VALOR DE i, E i SE VA INCREMENTANDO
                primoN[x] = i;
                x++;
            }
            cont = 0;
        }
    }
    //LO MISMO AHORA CON M
    for (int i = 1; i <= m; i++)
    {
        if (m % i == 0)
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
                primoM[y] = i;
                y++;
            }
            cont = 0;
        }
    }
    //VEO SI TIENEN LA MISMA CANTIDAD DE DIVISORES PRIMOS
    if (x == y)
    {
        for (int i = 0; i <= x; i++)
        {
            if (primoN[i] == primoM[i]){
                //SI TIENEN LOS MISMOS NUMEROS PRIMOS, ENTONCES CHEQ = TRUE
                cheq = true;
            }
        }
    }

    return cheq;
}

int main()
{
    int n, m;
    cout << "Ingrese dos numeros para comprobar si tienen los mismos divisores primos: " << endl;
    cin >> n >> m;
    if (num_primo(n,m) == true) cout << "Los dos numeros tienen los mismos divisores primos.";
    else cout << "Los dos numeros no tienen los mismos divisores primos.";


    return 0;
}