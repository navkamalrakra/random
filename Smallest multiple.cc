#include<iostream>
using namespace std;

#define NUMBER 40

int main()
{
        int num[NUMBER],flag = 2, lcm = 1;
        for (int i = 0; i<NUMBER; i++)
        {
                num[i] = i+1;
        }

        for(int j = 2; j<NUMBER; j++)
                {
                        do{
                                flag = 2;
                                for(int i = 1; i<NUMBER; i++)
                                        {
                                                if(num[i]%j == 0)
                                                        {
                                                                num[i] /= j;
                                                                flag = 1;
                                                        }
                                        }
                                if (flag == 1)
                                {
                                        lcm *= j;
                                }
                                }while (flag == 1);
                }
        cout << "LCM is " << lcm << endl;
        return 0;
}
