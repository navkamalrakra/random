#include<iostream>
#include<cmath>
using namespace std;

int make_factors(long);

int main()
{
	long i = 1,sum = 0;
	int check = 0;
	while(i)
	{
		sum += i;
		check = make_factors(sum);
		if (check >= 500)
		{
			cout << sum << endl;
			return 0;
		}
		//cout << sum << "\t" << check << endl;
		i++;
	}
	return 0;
}

int make_factors(long num)
{
	int count = 2;
	int st = sqrt(num);
	for (long x=2; x<= st; x++)
	{
		if (num%x == 0)
		{
			count += 2;
		}
	}
	return count;
}
