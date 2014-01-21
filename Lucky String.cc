#include<iostream>
#include<cmath>
#include<string>

using namespace std;

inline int calculate_digit(long);
inline string create_binary(long);

int main()
{
	unsigned long t=0, digit;
	cin >> t;
	while (cin >> t)
	{
		digit = calculate_digit(t);
	}
	return 0;
}

inline int calculate_digit(long num)
{
	long exp = 1 ,nod = 0, tmp, total_num=0,nth = 0, nth_start;
	/*if (num < nod)
	{
		exp=1, nod=0, tmp=0, total_num=0, nth=0, nth_start=0;
	}*/
	char ch;
	string binary;
	for(;;exp++)
	{
		tmp = pow(2,exp);
		nod += tmp * exp;
		total_num += tmp;
		if(nod >= num)
		{
			break;
		}
	}
	nth = (total_num - ((nod-num)/exp));
	//nth_start = num - ((nod-num)%exp);
	nth_start =  (nod - ((total_num - (nth-1))*exp))+1;
	binary = create_binary(nth+1);
	ch = binary[num-nth_start+1];
	switch (ch)
	//switch (binary.at(num-nth_start+1))
		{
	 case '0':
		 cout << "Hacker" << endl;
		 break;
	 default:
		 cout << "Earth" << endl;
		}
}

inline string create_binary(long x)
{
	if (x == 0) return "0";
	if (x == 1) return "1";

	if(x%2 == 0)
		return create_binary(x/2)+"0";
	else
		return create_binary(x/2)+"1";
}
