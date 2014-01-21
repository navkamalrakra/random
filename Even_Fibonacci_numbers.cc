#include<iostream>
using namespace std;

int main()
{
	int i = 0,j = 1, fib = j, result = 0;
	while (fib < 4000000)
	{
		i = j;
		j = fib;
		fib = i + j;
		if(fib % 2 == 0)
		{
			result += fib;
		}
	}
	cout << "sum of Even Fibonacci numbers is " << result << endl;
	return 0;
}
