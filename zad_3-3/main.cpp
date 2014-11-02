#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    typedef double wynik;

    cout << "podaj dokaladnosc: ";
    cin >> n;

    wynik power1 = pow(1641.0,(1/2.0));
    wynik power2 = pow((2.0/(137.0-3.0*power1)),(1/3.0));
    wynik power3 = pow(1641.0,(1/2.0));
    wynik power4 = pow((1/2.0)*(137.0-3.0*power3),(1/3.0));
    wynik x0 = (1/3.0)*(-4.0-10.0*power2-power4);

    cout << "Miejsce zerowe wynosi: " << fixed << setprecision(n) << x0;

    return 0;
}

