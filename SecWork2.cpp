// SecWork2.cpp : 定义控制台应用程序的入口点。
//
#include <iostream>
using namespace std;

int JieC(int m,int n)
{
	int d=0,e=1,f,i,g,h=1;
	for(i=0;i<m-n+1;i++)
	{
		f=m-i;
		e=e*f;
	}
	for(i=0;i<n;i++)
	{
		g=n-i;
		h=h*g;
	}
	d=e/h;
    return d;
}
int main()
{
	int  m,n;
	cout<<"input the m and n";
	cin>>m>>n;
	cout<<JieC(m,n );
	cin>>m;


}



