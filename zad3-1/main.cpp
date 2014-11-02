#include <iostream>

using namespace std;

int main()
{
    char a,b;
    int i=0;


    do
    {
        cout << "Podaj znak:\t";
        cin >> a;


        if (a!='*')
        {
            cout << endl << "Wartosc logiczna:\t" << int(a) << "\tOdleglosc od znkau \"a\": " << int(a-'a') << endl;

            if (i>0)
            {

                if ( int(b) > int(a))
                {
                    cout << "Blizej" << endl;
                }
                else if ( int(b) < int(a))
                {
                    cout << "Dalej" << endl;
                }
                else
                {
                    cout << "Wpisales drugi raz ten sam znak" << endl;
                }
            }
        }

        b=a;
        i++;
    } while (a!='*');
}

