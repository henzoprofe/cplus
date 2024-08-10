#include<iostream>
using namespace std;
int main()
{
    double edad;
    cout << "Ingrese su edad:" << endl;
    cin >> edad;
    if (edad >= 18)
    {
        cout << "Mayor de edad" << endl;
    }
    else
    {
        cout << "Menor de edad" << endl;
    }
    return 0;
}
