#include<iostream>
using namespace std;

int main()
{
	for(int i = 0; i<1000; i++)
	{
		for (int j= 0; j<i; j++)
		{
			for (int k = (1000-i-j); k>0; k--)
			{
				if (i+j+k == 1000)
				{
					if ((i*i)+(j*j) == (k*k))
					{
						cout << i << "\t" << j << "\t" << k << endl;
						cout << i*j*k << endl;
					}
				}
			}
		}
	}
}
