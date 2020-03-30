#include <iostream>
#include <set>
using namespace std;
set<int>s;
void setprint(int cnt){
    cout << "Test output :" << cnt << ":" << endl;
    for(set<int>::iterator it = s.begin(); it!= s.end(); it++)
        cout << *it << " ";
    puts("");
    return ;
}
int main(){
    int cnt = 1;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    setprint(cnt++);
 
    s.insert(2); 
//set只允许用一个值出现一次，要插入相同元素请用multiset
    setprint(cnt++);
 
    int a[4] = {11,12,13,14};
    s.insert(a,a+4); 
//将区间[a, a+4]里的元素插入容器
    setprint(cnt++);
 
    return 0;
}