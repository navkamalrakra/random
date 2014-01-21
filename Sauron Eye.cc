#include<iostream>
#include<vector>

using namespace std;

vector <unsigned long> st(3);

int fill_vec(long);

int main()
{
	st.at(0) = 0;
	st.at(1) = 1;
	st.at(2) = 3;
	unsigned long T,t;
	cin >> T;
	while(T>0)
	{
		cin >> t;
		if(t>=st.size())
		{
			st.resize(t+1);
		//	cout << st.size() << endl;
			fill_vec(t);
			cout << st.at(t) << endl;
		}
		else
		{
			//cout << st.size() << endl;
					cout << st.at(t) << endl;
		}
		T--;
	}

	return 0;
}

int fill_vec(long num)
{
	static long tmp = 3;
	while(tmp<=num)
	{
		//cout << tmp << " ";
		st.at(tmp) = (3*st.at(tmp-1))-st.at(tmp-2);
		//st.push_back((3*st.at(tmp-1))-st.at(tmp-1));
		tmp++;
	}
	//cout << endl;
	return 0;
}
