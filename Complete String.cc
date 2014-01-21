#include<iostream>

using namespace std;

int main()
{
	int T=0,len=0,arr[26],tmp=0;
	string sentence;
	cin >> T;
	while(T>0)
	{
		sentence = "";
		for(int i=0; i<26; i++)
		{
			arr[i] = 0;
		}
		cin >> sentence;
		len = sentence.length();
		for(int i=0; i<len; i++)
		{
			arr[((int)sentence[i])-97] = 1;
		}
		for(int i=0; i<26; i++)
		{
			//tmp = tmp+arr[i];
			cout << i << '\t' << arr[i] << endl;
		}
		if(tmp == 26)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		cin.clear();
		T--;
	}
}
