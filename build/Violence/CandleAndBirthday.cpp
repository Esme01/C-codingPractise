#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i<=200; i++)
    {
        for (int j =1; j <= i; j++)
        {
            int s=0;
            for (int n = j; n <=i; n++)
            {
                s+=n;
                if (s==236&&n==i)
                {
                    cout<<i<<endl;
                    cout<<j<<endl;
                }
                else
                {
                    if (s>236)break;
                }
            }
        }
    }
    return 0;
}