#include<iostream>
#include<cstdlib>
using namespace std;
unsigned long check_pallin(unsigned long);

int main()
{
	unsigned long num,pallin,largest=0;
	for(int loop1=999; loop1>99; loop1--)
	{
		for(int loop2=999; loop2>99;loop2--)
		{
			cout << "Checking ... "<< loop1 << "*" << loop2 << endl;
			num = loop2 * loop1;
			pallin = check_pallin(loop2*loop1);
			if (num == pallin)
			{
				if(pallin > largest)
				{
					largest = pallin;
				}
			}
		}
	}
	cout << "The largest plindrome is " << largest << endl;
	return 0;
}

unsigned long check_pallin(unsigned long num)
{
	unsigned long new_num = 0;
	while(num > 0)
	{
		new_num*=10;
		new_num += num%10;
		num/=10;
	}
	return new_num;
}
