#include<iostream>

using namespace std;
int main()
{
    int a,b,c,n;
    cin>>n;
    for ( a = 1; a*a < n ; a++)
    {
        for ( b = a; a*a+b*b < n; b++)
        {
            for ( c = b; a*a+b*b+c*c <= n; c++)
            {
                if (a*a+b*b+c*c==n)
                {
                    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
                }
            }
        }
    }
    return 0;
}