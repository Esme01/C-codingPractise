#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c,d,n;
    cin>>n;
    for ( a = 0; a*a <=n ; a++)
    {
        for ( b = a; a*a+b*b <= n; b++)
        {
            for ( c = b; a*a+b*b+c*c <= n; c++)
            {
                d=sqrt(n-a*a-b*b-c*c);
                //sqrt得到的数不一定是整数，赋给整数可以强制转换为整数
                if (a*a+b*b+c*c+d*d==n)
                {
                    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                    return 0;
                }
                
            }
            
        }
        
    }
    
    return 0;
}