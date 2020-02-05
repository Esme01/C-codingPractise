#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

const int N = 1e3;
typedef long long ll;
ll f[N];

int main()
{
	/*数组法*/
	int n;
	cin>>n;
	f[0]=0;
	f[1]=0;
	f[2]=1; 
	for(int i=3;i<=n;i++)
	{
		f[i]=(i-1)*(f[i-1]+f[i-2]);
	}
	cout<<f[n]<<endl;


	/*空间优化方法*/
	int a,b,c;
	a=0,b=1,c=0;
	for(int i=3;i<=n;i++)
	{
		c=(a+b)*(i-1);
		a=b;
		b=c;
	}
	cout<<c;
	return 0;
}