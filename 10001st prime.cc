#include<iostream>
#include<cstdlib>
using namespace std;
int isPrime(long);

int main()
{
	long i = 2,check,count=0;
	while(i)
	{
		check = isPrime(i);

	if (check == 1)
	{
		count ++;
		cout << count << endl;
		if (count == 10001)
		{
			cout << i << endl;
			exit(0);
		}
	}
	i++;
	}
	return 0;
}

int isPrime(long num)
{
	int flag = 1;
	for(int i=2; i<num/2; i++)
	{
		if (num%i == 0)
		{
			flag = 0;
		}
	}
	return flag;
}
