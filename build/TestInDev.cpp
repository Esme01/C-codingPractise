#include<set>
#include<string.h>
#include<iostream>

using namespace std;

struct Student
{
    string name;
    int age;

    bool operator()(const Student &lh,const Student &rh)const
    {
        return lh.age<rh.age;
    }//自带比较器，以年龄从小到大排序

};//自定义对象

int main()
{
    set<Student,Student> stu_set;
    //第二个参数是比较器，因为我们在student中写了重载，所以students本身也是比较器
    stu_set.insert({"zhangsan",30});//列表式创建对象
    stu_set.insert({"lisi",20});
    stu_set.insert({"wangwu",10});
    stu_set.insert({"ali",35});
    for (set<Student,Student>::iterator it = stu_set.begin();it!= stu_set.end; it++)//it迭代器
    {
        cout<<(*it).name<<" "<<(*it).age<<endl;
    }
    return 0;
    
}

