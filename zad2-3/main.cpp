#include <iostream>

using namespace std;

int main()
{
    string slowo="poczatek";
    int slowotab[3]={0,0,0};
    int max;
    int help;


    do
    {
        cout << "napisz slowo: \n";
        cin >> slowo;
        max=slowo.size();
        help=max;

        if (slowo=="koniec")
        {

        }
       /* else
        {
            for (int i=0; i<3;i++)
            {
                if (min<slowotab[i])
                {
                    help=slowotab[i];
                    slowotab[i]=min;
                    min=help;
                }
            }

        }*/
        else
        {
            for(int i=0; i<3 ; i++)
            {
                if(slowotab[i] <max)
                {
                    help=slowotab[i];
                    slowotab[i]=max;
                    max=help;
                }
            }
        }
    } while (slowo!="koniec");

    cout << "slowa napisane w kolejnosci od najdluzszego do  najkrotszego" << endl;

    for (int i=0;i<3; i++)
    {
        cout << slowotab[i] << endl;
    }
}

