// #include<set>
// #include<string.h>
// #include<iostream>

// using namespace std;

// struct Student
// {
//     string name;
//     int age;

//     bool operator()(const Student &lh,const Student &rh)const
//     {
//         return lh.age<rh.age;
//     }//自带比较器，以年龄从小到大排序

// };//自定义对象

// int main()
// {
//     set<Student,Student> stu_set;
//     //第二个参数是比较器，因为我们在student中写了重载，所以students本身也是比较器
//     stu_set.insert({"zhangsan",30});//列表式创建对象
//     stu_set.insert({"lisi",20});
//     stu_set.insert({"wangwu",10});
//     stu_set.insert({"ali",35});
//     for (auto it = stu_set.begin(); it!= stu_set.end; it++)//auto自动类型推断
//     //it迭代器
//     {
//         cout<<(*it).name<<" "<<(*it).age<<endl;
//     }
//     return 0;
    
// }
//在这里插入代码片
#include <iostream>
#include <set>
using namespace std;
set<int >s;
void setprint(int cnt){
    cout << "Test output :" << cnt << ":" << endl;
    for(set<int>::iterator it = s.begin(); it!= s.end(); it++)
        cout << *it << " ";
    puts("");
    return ;
}
int main(){
    int cnt = 1;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    setprint(cnt++);
 
    s.insert(2); //set只允许用一个值出现一次，要插入相同元素请用multiset
    setprint(cnt++);
 
    int a[4] = {11,12,13,14};
    s.insert(a,a+4); //将区间[a, a+4]里的元素插入容器
    setprint(cnt++);
 
    return 0;
}
