#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a,b,c,discrim,x,x1,x2;

    cout << "Ingrese A: ";
    cin >> a;
    cout << "Ingrese B: ";
    cin >> b;
    cout << "Ingrese C: ";
    cin >> c;

    discrim = pow(b,2) - 4 * a * c;

    if (discrim < 0)
    {
        cout << "No existe solución real" << endl;
    }
    else if (discrim == 0)
    {
        x = -b/(2*a);
        cout << "Existe única solución, la solución es x = " << x << endl;
    }
    else
    {
        x1 = (-b-sqrt(discrim))/(2*a);
        x2 = (-b+sqrt(discrim))/(2*a);
        cout << "Existen dos soluciones reales, x1 = "<< x1 <<" y x2 = " << x2 << endl;
    }
    return 0;
}
