#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,string> m;
    //默认升序
    //m.insert({"1","tang"});
    //键值对的赋值方法行不通
    m.insert(make_pair("1","li"));
    m.insert(make_pair("2","bli"));
    cout<<m["1"]<<endl;
    m["1"]="Ali";
    cout<<m["1"]<<endl;

    //迭代
    for (map<string,string>::iterator it = m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<""<<it->second<<endl;
    }
    
    return 0;
}