#include<iostream>
using namespace std;
#define mod 987654321
typedef long long ll;
ll cal1(ll n){
	ll x=1;
	for(ll i=1;i<=n;i++){
		x=x*i%mod;
	}
	return x;
}
ll cal2(ll n,ll m){
	return cal1(n)/(cal1(m)*cal1(n-m)%mod);
}
int main(){
	ll n,m,s=0;
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
	s=s+cal2(n,m)%mod*cal2(n,i)%mod*i%mod*i%mod*i%mod;
	cout<<s<<endl;
	return 0;
}