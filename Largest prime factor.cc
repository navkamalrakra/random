#include<iostream>
using namespace std;
int find_prime_factors(long num);

int main()
{
	long num;
	cin >> num;
	find_prime_factors(num);
	return 0;
}

int find_prime_factors(long num)
{
	for(int i=2; i<=num; i++)
	{
		if(num%i == 0)
		{
			cout << i << endl;
			num=num/i;
		}
	}
}
