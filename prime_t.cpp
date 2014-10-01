#include <iostream>

using namespace std;

const int TAB_COUNT = 10001;

int main (void)
{
	int a;
	int b;
	bool c;
	bool tab[TAB_COUNT];

	for (int i=1; i<TAB_COUNT; i++)
	{
		c = false;

		for (int j=2; j<i; j++)
		{
			if (i%j == 0)
			{
				c=true;
			}
		}

		tab[i] = (c == false && i != 1);		
	}

	cin >> a;

	for (int i=0; i<a; i++)
	{
		cin >> b;

		if (tab[b])
		{
			cout << "TAK";
		}
		else
		{
			cout << "NIE";
		}

		cout << endl;
	}

	return 0;
}