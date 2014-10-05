#include<iostream>

using namespace std;

int main (void)
{

	int n, l=1;
	char a,b;


	cin >> n;
	 
	for (int j=0; j<n; j++)
	{
		b=0;
		do
		{
			
			cin.get(a);
			//cout << (int)a << endl;
			
			if((int)a!=10)
			{
				if(b==a)
				{
					l++;
				}
				else
				{
					if (l!=1 && l!=2)
					{
						cout << l;
						l=1;
					}
					if (l==2)
					{
						cout << b;
					}
					cout << a;
				}

				b=a;
			}
		}
		while ((int)a != 10);

		cout << endl;

	}
	if (l!=1 && l!=2)
	{
		cout << l;
	}
	if (l==2)
	{
		cout << a;
	}
}