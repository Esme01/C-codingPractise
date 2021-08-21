//python默认数的范围无限大，所以不需要
#include<iostream>
#include<vector>
//自带数组个数，不需要开变量来存
using namespace std;

const int N=1e6+10;//+10是防止出现边界问题

vector<int> add(vector<int> &A, vector<int> &B)
{
    vector<int> C;
    int t=0;//存储每一位的进位
    for (int i = 0; i < A.size()||i<B.size(); i++)
    //或运算,有一个成立即可
    {
        if(i<A.size())t+=A[i];
        if(i<B.size())t+=B[i];
        C.push_back(t%10);
        t/=10;
    }
    if(t)C.push_back(1);//最后检查还有没有进位
    return C;
}

int main()
{
    string a,b;//用字符串读入
    vector<int> A,B;
    cin>>a>>b;//字符串输入
    for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
    //倒着输入数字
    //string a 中存的数字是“字母”形式
    //push_back   在数组的最后添加一个数据
    for(int i=b.size()-1;i>=0;i--)B.push_back(b[i]-'0');

    vector<int> C=add(A,B);
    //auto在声明变量的时候根据变量初始值的类型自动为此变量选择匹配的类型
    for(int i=C.size()-1;i>=0;i--)printf("%d",C[i]);
    return 0;
}