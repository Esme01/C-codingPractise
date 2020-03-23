#include<iostream>
#include<string.h>
#include<stdio.h>
#include<sstream>//stringstream

using namespace std;

int global_id=0
class Student
{
public:
   Student(const string &name,int age,bool male,double high,double weight):name(name),age(age),id(id),male(male),high(high),weight(weight){
      this->id=++global_id;//简洁的写法
      if (age>0)
      {
         this->age=age;
      }
   };
   //this->name=name


private:
   string name;
   int age;
   int id;
   bool male;
   double high;
   double weight;
};



int main()
{
   
   return 0;
}