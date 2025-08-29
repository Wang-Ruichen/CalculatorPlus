#include<js.h>
#include<cstdio>
#include<iostream>
using namespace std;
int main(void)
{
	int n=0,x=0,y=0;
	cout<<"欢迎使用计算器Plus!\n请选则计算方式\n(1)加法\n(2)减法\n(3)乘法\n(4)除法\n";
	cin>>n;
	switch(n)
	{
		case 1:
			cin>>x>>y;
			cout<<jia(x,y);
			break;
		case 2:
			cin>>x>>y;
			cout<<jian(x,y);
			break;
		case 3:
			cin>>x>>y;
			cout<<cheng(x,y);
			break;
		case 4:
			cin>>x>>y;
			if(y==0){cout<<"除数不能为零!"<<endl;system("pause");return 1;
					}
			cout<<chu(x,y);
			break;
		default:
			cout<<"请输入正确选项!"<<endl;system("pause");return 1;
			break;
	}
	
	return 0;	
}
