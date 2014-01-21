#include<iostream>
#define MAX(A,B) ((A)>(B) ? (A):(B))
#define MIN(A,B) ((A)<(B) ? (A):(B))
using namespace std;

//int sum_of_digits(long);

int main()
{
	long A=0,B=0,S=0,start=0,last=0,least_with_sum=0,count=0,sod=0,num=0,tmp;
	cin >> A >> B >> S;
	start = MIN(A,B);
	last = MAX(A,B);

	while(1)
	{
		num = last;
		tmp = last;
		sod = 0;
		while(num>0)
		{
			sod += (num%10);
			num /= 10;
		}

		if(sod == S)
		{
			last = tmp;
			//cout << last << endl;
			break;
		}
		else if(last <= start)
		{
			break;
		}
		else
		{
			//cout << last <<" "<< sod << endl;
			last--;
		}
	}
	//cout << last << endl;
	//last -= ((sod > S)? (sod-S):(S-sod));

	while(last >= start)
	{
		num = last;
		sod = 0;
		//cout << num << endl;
		while(num>0)
		{
			sod += (num%10);
			if(sod>S)
			{
				break;
			}
			num /= 10;
		}

		if (sod == S)
		{
			//cout << sod << endl;
			least_with_sum = last;
			count++;
		}
		last = last-9;
		//last--;
	}
	cout << count << endl;
	cout << least_with_sum << endl;
	return 0;
}
