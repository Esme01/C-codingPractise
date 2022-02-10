#include<iostream>
#include<vector>
using namespace std;
/*
    7.16+R
*/
//C=A*b
vector<int> mul(vector<int> &A, int b)
{
    //乘法模板与加法类似，只是进位 t 不同
    vector<int> C;
    int t=0;//进位
    for(int i=0;i<A.size()||t;i++)//只要t不是0都往下做
    {
        t+=A[i]*b;//从低位算起，把B看成一个整体去乘A
        C.push_back(t%10);
        t/=10;
    }
    while (C.size()>1&&C.back()==0)C.pop_back();
    //若只有一个0则保留不删除
    return C;
}

int main()
{
    string a;//用字符串读入
    int b;
    vector<int> A;
    cin>>a>>b;//字符串输入
    for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
    vector<int> C=mul(A,b);
    for(int i=C.size()-1;i>=0;i--)printf("%d",C[i]);
    return 0;
}