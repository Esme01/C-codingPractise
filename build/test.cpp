// #include<stdio.h>
// #include<string.h>
// #include<iostream>
// #include<algorithm>
// using namespace std;
// #define INF 300 
// int A[100]; 
// void print_subset(int n,int *A,int cur)
// {
// 	for(int i=0;i<cur;i++)
// 		printf("%d ",A[i]);//输出子集 当前的集合 
// 	printf("\n");
// 	int s=cur?A[cur-1]+1:0;//确定当前最小的可能值  如果这里不是 这里特殊的就是cur==0时 其他的就是选比前一个大1的 
// 	for(int i=s;i<n;i++)
// 	{
// 		A[cur]=i;//将i加入当前的集合
// 		print_subset(n,A,cur+1);// 递归构造子集 
// 	 }
// }
// int main()
// {
// 	int n;scanf("%d",&n);
// 	print_subset(n,A,0); 
// }


// #include <iostream>
// using namespace std;
 
// bool b[20] = {0}; //判断当前每一个节点选中状态
// /*递归输出n以内所有的子集,其中b表示该节点是否选中，cur为当前下标,初始值0*/
// void print_subset(int n,bool* b,int cur) {
// 	//当cur加到n的时候输出该串节点(解答树)的值
// 	if(cur == n) {
// 		for (int i=0;i<n;i++){
// 			if(b[i])
// 				cout<<i<<' ';
// 		}
// 		cout<<endl;
// 		return ;
// 	}
// 	b[cur] = true;//该节点设为选中状态
// 	print_subset(n,b,cur+1);//cur+1递归该状态时的下一层节点,循环该操作
// 	b[cur] = false;//该节点设为不选中状态
// 	print_subset(n,b,cur+1);//cur+1递归该状态时的下一层节点,循环该操作
// }
 
// int main() {
// 	int n ;
// 	while (cin>>n,n) {
// 		print_subset(n,b,0);
// 	}
// }

/*算法思想 
	例如求4个元素 3 2 1 0 的子集。
	那么用二进制的1代表每一位是否选中。
十进制	二进制 
0	 	0000  代表空集
1	 	0001  代表{0}
2	 	0010  代表{1}
3	 	0011  代表{0,1}
4	 	0100  代表{2}
		 ...
15	 	1110  代表{3,2,1}
16	 	1111  代表{3,2,1,0} 
如果n很大的话可以用字符串模拟二进制 
*/
# include <stdio.h>
# include <algorithm>
using namespace std;
//二进制法求子集 
void print_subset(int n,int s){
	for(int i=0;i<n;i++){
		if(s & (1<<i)) //1左移i位，监测s的哪一位为1，为1的话输出 
			printf("%d ",i);
	} 
	printf("\n");
} 
int main() {
	int n=3;
	for(int i=0;i<(1<<n);i++){//1左移n位等价于2^n-1.因为子集个数2^n-1 
		print_subset(n,i);
	}
	return 0;
}