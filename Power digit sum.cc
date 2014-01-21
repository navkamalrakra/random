#include<cmath>
#include<iostream>

#include "/usr/include/bigint/BigIntegerLibrary.hh"

using namespace std;

int main()
{
	BigInteger a = 2;
	for(int i=0; i<1000; i++)
	{
		a *= a;
	}
	cout << a << endl;
	return 0;
}
