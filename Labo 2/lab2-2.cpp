#include <iostream>
using namespace std;

float h = 1;
float r;

float raiz(int n)
{
    float aux;

    r = ((n / h) + h) / 2;
    h = ((n / r) + r) / 2;
    if ((r - h) < 0)
    {
        aux = (r - h) - (2 * (r - h));
    }
    else
    {
        aux = r - h;
    }

    if (aux < 0.0001)
    {
        return h;
    }
    else
    {
        return raiz(n);
    }

    return h;
}

int main(void)
{
    int a;
    cin >> a;
    if (a < 0)
    {
        cout << "Ingrese un valor positivo.";
    }
    else
    {
        cout << raiz(a);
    }

    return 0;
}