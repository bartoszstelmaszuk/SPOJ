#include <iostream>

using namespace std;

int main()
{
    int n;
    double a0=1, a1=2, an;
    bool pytanie = 0;

    do
    {
        cout << "Podaj liczbe n: ";
        cin >> n;
        cout << endl;
        if (n>=0)
        {
            pytanie = 1;
            if (n==0)
            {
                cout << "N-ty wyraz ciągu to: " << a0;
            }
            if (n==1)
            {
                cout << "N-ty wyraz ciągu to: " << a1;
            }
            else
            {
                for (int i=0; i<n-2; i++)
                {
                    an=a0/a1;
                    a0=a1;
                    a1=an;
                }

                cout << "N-ty wyraz ciagu to: " << an << endl;
            }
        }
        else
        {
            cout << "Wpisz liczbe dodatnia"<< endl;
        }
    } while (pytanie == 0);

    return 0;
}

