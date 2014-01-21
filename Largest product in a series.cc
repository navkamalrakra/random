#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char ch;
	int n, product = 1, largest = 0;
	ifstream myfile ("number.txt");
	if(myfile.is_open())
	{

		myfile.seekg(0,ios::beg);
		while(ch != 'Z')
		{
			for (int i=0; i<5; i++)
			{
				myfile >> ch;
				n = ch -'0';
				product *= n;
			}
			if (product > largest)
			{
				largest = product;
			}
			product = 1;

			myfile.seekg(-4,ios::cur);
		}
		myfile.close();
	}
	cout << largest << endl;

	return 0;
}
