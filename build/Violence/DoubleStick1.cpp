#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int l[10001];
    for (int i = 0; i < n; i++)cin>>l[i];
    
    int ans=10000;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)//
        {
            if (l[i]>l[j])
            {
                if (l[i]-l[j]<ans)ans=l[i]-l[j];
            }
            else
            {
                if (l[j]-l[i]<ans)ans=l[j]-l[i];
            }
        }
        
    }
    cout<<ans<<endl;

    return 0;
}