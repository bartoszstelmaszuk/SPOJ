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
 /*   for (int i=0; i<4; i++) // selection sort
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
*/

 /*   for (int i=0; i<5;i++) // insertion sort
    {

        int j=i;
        temp=array[j];

        while (j>0 && temp.size() < array[j-1].size())
        {
            array[j]=array[j-1];
            j--;
        }

        array[j]=temp;
    }
*/

    for (int i=4; i>0; i--) //babelkowe
    {
        for (int j=0; j<i; j++)
        {
            if (array[j].size() > array[j+1].size())
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for (int i=0;i<5;i++)
    {
        cout << array[i] << endl;
    }

}

