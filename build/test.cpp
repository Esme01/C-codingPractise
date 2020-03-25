#include<iostream>
#include<vector>
using namespace std;
//遍历
void show(const vector<int> &v)
{
    cout<<"size"<<v.size()<<":";//元素个数
    // for (auto it = v.begin(); it!= v.end(); it++)//auto自动类型
    // {
    //     cout<<*it<<" ";//*是取内容符号
    // }//迭代器,it是指针

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    //类似的形式
    cout<<endl;
}

int main()
{
//1.初始化
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,100);//长度，值
    show(v1);
    show(v2);
    show(v3);

    for (int i = 0; i < 10; i++)
    {
        v2.push_back(i);
    }
    for (int  i = 0; i < 10; i++)
    {
        v2[i]=i;
    }
    v2.erase(v2.end()-1);
    show(v2);
    return 0;

}
    