#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool prime(int n)
{
    bool flag=true;
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n%i==0)
        {
            flag=false;
            return flag;
        }
    }
    return flag;
}
int main()
{
    int s[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n;
    cin>>n;
    

    return 0;
}