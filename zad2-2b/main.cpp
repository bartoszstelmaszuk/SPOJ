#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string word;
    string array[5];
    string temp;
    int i_min;

    for (int i=0; i<5; i++)
    {
        cout << "Write a word: " << endl;
        cin >> word;
        array[i]=word;
    }
    for (int i=0; i<4; i++)
    {
        i_min=i;

        for (int j=i+1; j<5; j++)
        {
            if( array[j].size() > array[i_min].size() )
            {
                i_min=j;
            }
        }
            temp=array[i];
            array[i]=array[i_min];
            array[i_min]=temp;



    }

    for (int i=0;i<5;i++)
    {
        cout << array[i] << endl;
    }

}

