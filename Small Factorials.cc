#include<iostream>
#include<vector>
using namespace std;
int get_result(long);

int main()
{
	long T,t;
	cin >> T;
	while(T>0)
	{
		cin >> t;
		get_result(t);
		T--;
	}
	return 0;
}

int get_result(long num)
{
	vector<int> result;
	vector<int> temp_vec;
	vector<int>::iterator pos;
	long next_num = num-1,tmp=num,len=0,count=0;
	while(tmp>0)
	{
		pos = result.begin();
		result.insert(pos,tmp%10);
		tmp /= 10;
	}
/*	for (pos=result.begin(); pos<result.end(); pos++)
	{
		cout << *pos;
	}
	cout << endl; */

	while(next_num > 0)
	{
		tmp = count;
		for(len = result.size(); len>0; len--)
		{
			while(tmp>0)
			{
				temp_vec.push_back(0);
				tmp--;
			}
			pos = temp_vec.begin();
			temp_vec.insert(pos,(result.at(len)*(next_num%10)));
		}
		next_num /= 10;
		count++;
	}
	return 0;
}
