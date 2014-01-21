#include<iostream>
using namespace std;
#define NUMBER 100

int main()
{
	int sum = 0, soproduct = 0;
	for (int i = 0; i<=NUMBER; i++)
	{
		sum += i;
		soproduct += (i*i);
	}
	cout << (sum*sum) - soproduct << endl;
	return 0;
}
