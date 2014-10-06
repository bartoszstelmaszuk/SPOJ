#include<iostream>

using namespace std;

int main (void)
{
	int a, b;
	int n;

	cin >> n;

	for(int i=0;i<n;i++)
	{
		cin >> a;
		cin >> b;

		int c=a;
		int d=b;

		int j=2;
		int e=1;

		do
		{
			if (c%j==0)
			{
				c/=j;
				if (e<j)
				{
					e=j;
				}

				j=1;
				//cout << c << "-";
				cout << e << "-";
			}
			j++;
		} while (c!=1);

		cout << endl;

		int k=2;
		int f=1;

		do
		{
			if (d%k==0)
			{
				d/=k;
				if (f<k)
				{
					f=k;
				}

				k=1;
				//cout << c << "-";
				cout << f << "-";
			}
			k++;
		} while (d!=1);
	}

/*	for (int i=0; i<n; i++)
	{
		cin >> a;
		cin >> b;
		
		if(a>=b)
		{
			int* tab = (int*)malloc(sizeof(a));
			int* tab2 = (int*)malloc(sizeof(a));

			d=a;
			e=b;
					
			for (int j=0;j<a; j++)
			{
				d+=d;
				e+=e;
				if (e>b)
				{
					tab[j]=d;
					tab2[j]=0;
				}
				else
				{
					tab[j]=d;
					tab2[j]=e;
				}
			}

			for (int j=0; j<a; j++)
			{
				cout << tab[j];
			}
		}
		else
		{
			int* tab = (int*)malloc(sizeof(b));
			int* tab2 = (int*)malloc(sizeof(b));

			for (int j=0;j<b; j++)
			{
				d+=d;
				e+=e;
				if (d>a)
				{
					tab[j]=0;
					tab2[j]=e;
				}
				else
				{
					tab[j]=d;
					tab2[j]=e;
				}
			}
		}

	}

	return 0;*/
}
