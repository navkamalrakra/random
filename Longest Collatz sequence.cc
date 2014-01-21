#include<iostream>
using namespace std;
int produce_chain(long,long*);

int main()
{
	long seed = 13, chain_length,winner_length = 0, winner_seed = 13;
	while (seed < 1000000)
	{
		produce_chain(seed,&chain_length);
		if (chain_length > winner_length)
		{
			winner_length = chain_length;
			winner_seed = seed;
		}
		seed++;
	}
	cout << winner_seed << " has longest chain with " << winner_length << " elements" << endl;
	return 0;
}

int produce_chain(long seed,long *ptr)
{
	long count = 1;
	while (seed!=1)
	{
		if ((seed & 1) == 0) /* If its even*/
		{
			seed = seed/2;
			count ++;
		}
		else
		{
			seed = (3*seed) + 1;
			count++;
		}
	}
	*ptr = count;
	return 0;
}
