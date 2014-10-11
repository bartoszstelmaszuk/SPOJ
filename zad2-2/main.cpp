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
        bool condition=true;
        cout<< "Oto liczba calkowita: \t";
        x=rand()- RAND_MAX/2 ;
        cout << x << endl;
        cout<< "Czy ta liczba jest dodatnia (+), czy ujemna (-), czy zerowa 0?"<< endl;
        while (condition==true)
        {
            cin>> y;
            condition=false;
            if (y!='0' && y!='+' && y!='-')
            {
                cout << "wpisz znak +, -, 0" << endl;
                condition=true;
            }
            else
            {

                if(x>0 && y=='+')
                {
                        cout << "Poprawna odpowiedz!" << endl;
                        odpowiedz=true;
                        i++;
                        break;
                }
                else if (x<0 && y=='-')
                {
                        cout << "Poprawna odpowiedz!" << endl;
                        odpowiedz=true;
                        i++;
                        break;

                }
                else if (x==0 && y=='0')
                {
                        cout << "Poprawna odpowiedz!" << endl;
                        odpowiedz=true;
                        i++;
                        break;
                }

                cout << "Nie poprawna odpowiedz." << endl;
            }
        }
    }
    cout << "Zdobyles "<< i << "punktow" << endl;
}

