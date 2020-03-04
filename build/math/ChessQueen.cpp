#include<iostream>//用cin/cout因为这样可以与平台无关的读写64位整数，比较方便
#include<algorithm>//使用swap
using namespace std;

int main()
{
    unsigned long long n,m;
    //最大可以保存2^64-1~1.8*10^19
    while (cin>>n>>m)
    {
        if(!n&&!m)break;
        if (n>m)swap(n,m);
        cout<<n*m*(n+m-2)+2*n*(n-1)*(3*m-n-1)/3<<endl;
    }
    return 0;
    
}
