//试除法求约数
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> get_divisors(int x)
{
    vector<int> res;
    for (int i = 1; i <= x/i; i++)
    {
        if (x%i==0)
        {
            res.push_back(i);
            if (i!=x/i)res.push_back(x/i);//为了防止i*i=x
        }
    }
    sort(res.begin(),res.end());//排序
    return res;//传递的参数不止一个的做法：传vector
}

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        auto res=get_divisors(x);
        for (auto t:res)cout<<t<<' ';
        cout<<endl;
    }
    return 0;
}