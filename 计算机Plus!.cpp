#include<js.h>
#include<cstdio>
#include<iostream>
using namespace std;
int main(void)
{
	int n=0,x=0,y=0;
	cout<<"��ӭʹ�ü�����Plus!\n��ѡ����㷽ʽ\n(1)�ӷ�\n(2)����\n(3)�˷�\n(4)����\n";
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
			if(y==0){cout<<"��������Ϊ��!"<<endl;system("pause");return 1;
					}
			cout<<chu(x,y);
			break;
		default:
			cout<<"��������ȷѡ��!"<<endl;system("pause");return 1;
			break;
	}
	
	return 0;	
}
