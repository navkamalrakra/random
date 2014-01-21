/* Based on http://www.robertdickau.com/lattices.html */

#include<iostream>
using namespace std;

int main()
{
	long arr[20][20];
	for (int i=0; i<20; i++)
	{
		arr[0][i] = 1;
		arr[i][0] = 1;
	}

	for (int r=1; r<20; r++)
	{
		for (int c=1; c<20; c++)
		{
			arr[r][c] = arr[r][c-1] + arr[r-1][c];
		}
	}
	cout << arr[20][20] << endl; /* The answer is actually out of limit of long*/
	return 0;
}
