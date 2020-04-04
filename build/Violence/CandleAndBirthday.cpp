#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i<=200; i++)
    {
        int s=0;
        for (int j = 0; j <= i; j++)
        {
            s+=j;
            if (s==236&&j==i)cout<<i<<endl;
            else
            {
                if (s>236)break;
            }
        }
    }
    return 0;
    
}