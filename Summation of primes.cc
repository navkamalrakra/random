#include<iostream>
#include<cmath>
using namespace std;

int isPrime(long);

int main()
{
	long num = 2, sum = 0;
	int check;
	while (num < 2000000)
	{
		check = isPrime(num);
		if (check == 1)
		{
			//cout << num << endl;
			sum += num;
		}
		num++;
	}
	cout << sum << endl;
	return 0;
}

int isPrime(long x)
{
	int flag = 1;
	long st = sqrt(x);
	for (long i = 2; i<=st; i++)
	{
		if (x%i == 0)
		{
			flag = 0;
		}
	}
	return flag;
}
