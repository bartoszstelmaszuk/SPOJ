#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //srand (time(0));

    int x;
    char y;
    int i=0;
    bool odpowiedz=true;

    while (odpowiedz==true)
    {


        odpowiedz= false;
        cout<< "Oto liczba calkowita: \t";
        x=rand()- RAND_MAX/2 ;
        cout << x << endl;
        cout<< "Czy ta liczba jest dodatnia (+), czy ujemna (-), czy zerowa 0?"<< endl;
        poczatek:
        cin>> y;

        if(x>0)
        {
            switch (y)
            {
                case '+':
                cout << "poprawna odpowiedz! \t"<< x<< endl;
                 odpowiedz=true;
                 i++;
                 break;
                case '-':
                    cout<< "nie poprawna odpowiedz." << endl;
                    break;
                case '0':
                    cout << "nie poprawna odpowiedz." << endl;
                    break;
                default:
                    cout << "wpisz znak +, -, 0 aby określić liczbe" << endl;
                    goto poczatek;
            }
        }
        else if (x<0)
        {
            switch (y)
            {
                case '-':
                    cout << "poprawna odpowiedz!"<< endl;
                    odpowiedz=true;
                    i++;
                    break;
                case '+':
                    cout<< "nie poprawna odpowiedz." << endl;
                    break;
                case '0':
                    cout << "nie poprawna odpowiedz." << endl;
                    break;
                default:
                    cout << "wpisz znak +, -, 0 aby określić liczbe" << endl;
                    goto poczatek;
            }
        }
        else if (x==0)
        {
            switch (y)
            {
                case '0':
                    cout << "poprawna odpowiedz!"<< endl;
                    odpowiedz=true;
                    i++;
                    break;
                case '+':
                    cout<< "nie poprawna odpowiedz." << endl;
                    break;
                case '-':
                    cout << "nie poprawna odpowiedz." << endl;
                    break;
            default:
                cout << "wpisz znak +, -, 0 aby określić liczbe" << endl;
                goto poczatek;
            }
        }
    }
    cout << "Zdobyles "<< i << "punktow" << endl;
}

