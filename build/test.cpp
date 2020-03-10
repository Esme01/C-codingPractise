#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
const int maxn=1000;
struct bign
{
    int len,s[maxn];
    bign(){memset(s,0,sizeof(s));len=1;}
    /**
     * 构造体中有一个函数，成为构造函数（constructor）
     * 是C++中特有的，作用是初始化
    */
    bign operator=(const char* num)
    {
        len = strlen(num);
        for (int i = 0; i < len; i++)s[i]=num[len-i-1]-'0';
        return *this;
    }
    /**
     * 可以把这个字符串转化为“逆序数组+长度”的内部表示方法
    */
   bign operator = (int num)
   {
       char s[maxn];
       sprintf(s,"%d",num);
       *this=s;
       return *this;
   }
   /**
    * 支持x=1234这样更常用的赋值方式
   */

    bign(int num){*this=num;}
    bign(const char* num){*this=num;}
    //让代码支持“初始化”操作

    /**
     * 以上只是简单地调用刚才的赋值运算符，接下来需要提供一个函数把它转换为字符串
     *
    */
    string str()const
    {
        string res="";
        for (int i = 0; i < len; i++)res=(char)(s[i]+'0')+res;//字符串的连接？
        if(res=="")res="0";
        return res;
    }
};

int main()
{

}