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
    }//�Դ��Ƚ������������С��������

};//�Զ������

int main()
{
    set<Student,Student> stu_set;
    //�ڶ��������ǱȽ�������Ϊ������student��д�����أ�����students����Ҳ�ǱȽ���
    stu_set.insert({"zhangsan",30});//�б�ʽ��������
    stu_set.insert({"lisi",20});
    stu_set.insert({"wangwu",10});
    stu_set.insert({"ali",35});
    for (set<Student,Student>::iterator it = stu_set.begin();it!= stu_set.end; it++)//it������
    {
        cout<<(*it).name<<" "<<(*it).age<<endl;
    }
    return 0;
    
}

