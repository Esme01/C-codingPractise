#include<iostream>
#include<math.h>
#define M 1200000

using namespace std;
int main()
{
    int s=0,t=0;
    for (int i = 1; i <=sqrt(M); i++)
    {
        t=M/i;
        if (M%i==0)
        {
            if (t==i)s++;
            else s=s+2;
        }
    }
    cout<<s<<endl;
    return 0;
    
}