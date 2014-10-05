#include<iostream>

using namespace std;

int main (void)
{
	long int a, b, c, l, e, x, result;
	int tab[29];
	int n;

	for(int i=0; i<30; i++)
	{
		tab[i]=0;
	}

	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		cin >> a;
		cin >> b;
			
		l=0;
		for (int j = 1; j*2<=b; j=j*2)
		{
			l++;
			e=j*2;
		}

		for(int j=l;j>=0;j--)
		{
			if(b>=e)
			{
				b=b-e;
				tab[j]=1;
			}
			else
			{
				tab[j]=0;
			}

			e=e/2;
		}
							
		a=a%10;		
		result=1;
		
		x=a;

		for (int j=0; j<=l; j++)
		{
			if (tab[j]==1)
			{
				result*=x;
				result=result%10;
			}
			x*=x;
			x=x%10;
			
		}

		cout << result << endl;

	}
	return 0;
}