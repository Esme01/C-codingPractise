#include<iostream>
#include<math.h>
using namespace std;

bool is_prime(int m)
{
    for (int i = 2; i <= sqrt(m) ; i++)
    {
        if(m%i==0)return false;
    }
    return true;
}

int main()
{
    int m;
    cin>>m;
    //应该从大到小枚举素数
    for (int i = m; i >=2; i--)
    {
        if (is_prime(i))
        {
            if (is_prime(i-2))
            {
                cout<<i-2<<" "<<i<<endl;
                break;
            }
            
        }
    }
    return 0;
}
