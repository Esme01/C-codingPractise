#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
    高精度除法
*/
//C=A/b,余数是 r
vector<int> div(vector<int> &A, int b,int &r)
{
    //加法、减法、除法都是从最低位开始算，除法从最高位开始
    //为了统一，除法的大数也倒着存储
    vector<int> C;//商
    r=0;
    for (int i = A.size()-1; i >= 0; i--)
    {
        r=r*10+A[i];
        C.push_back(r/b);
        r%=b;
    }
    reverse(C.begin(),C.end());
    //这里的C和之前的大整数乘法不一样，所以要reverse
    while (C.size()>1&&C.back()==0)C.pop_back();
    return C;
}

int main()
{
    string a;//用字符串读入
    int b;
    vector<int> A;
    cin>>a>>b;//字符串输入

    for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');

    int r;
    vector<int> C=div(A,b,r);
    for(int i=C.size()-1;i>=0;i--)printf("%d",C[i]);
    cout<<endl<<r<<endl;
    return 0;
}