#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int n[20][20];
	ifstream myfile ("grid.txt");
	if(myfile.is_open())
	{
		for(int r = 0; r<20; r++)
		{
			for(int c = 0; c<20; c++)
			{
				myfile >> n[r][c];
			}
		}
		myfile.close();
	}

	/* Vertical only*/
	int product_vertical = 1,largest_product_vertical = 1;
	for(int r = 0; r<=16; r++)
	{
		for(int c = 0; c<20; c++)
		{
			product_vertical = n[r][c] * n[r+1][c] * n[r+2][c] * n[r+3][c];
			if (product_vertical > largest_product_vertical)
			{
				largest_product_vertical = product_vertical;
			}
		}
	}
	cout <<"Highest among Vertical "  <<largest_product_vertical << endl;

	/* Horizontal only*/
	int product_horizontal = 1,largest_product_horizontal = 1;
	for(int r = 0; r<20; r++)
	{
		for(int c = 0; c<=16; c++)
		{
			product_horizontal = n[r][c] * n[r][c+1] * n[r][c+2] * n[r][c+3];
			if (product_horizontal > largest_product_horizontal)
			{
				largest_product_horizontal = product_horizontal;
			}
		}
	}
	cout <<"Highest among Horizontal " << largest_product_horizontal << endl;

	/* Right Diagonal*/

	int product_right_diag = 1,largest_product_right_diag = 1;
	for(int r = 0; r<=16; r++)
	{
		for(int c = 0; c<=16; c++)
		{
			product_right_diag = n[r][c] * n[r+1][c+1] * n[r+2][c+2] * n[r+3][c+3];
			if (product_right_diag > largest_product_right_diag)
			{
				largest_product_right_diag = product_right_diag;
			}
		}
	}
	cout <<"Highest among Right Diagonal " << largest_product_right_diag << endl;

	/* Left Diagonal*/

	int product_left_diag = 1,largest_product_left_diag = 1;
	for(int r = 0; r<=16; r++)
	{
		for(int c = 3; c<20; c++)
		{
			product_left_diag = n[r][c] * n[r+1][c-1] * n[r+2][c-2] * n[r+3][c-3];
			if (product_left_diag > largest_product_left_diag)
			{
				largest_product_left_diag = product_left_diag;
			}
		}
	}
	cout <<"Highest among Left Diagonal "<< largest_product_left_diag << endl;

}
