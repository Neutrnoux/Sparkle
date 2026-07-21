// 1670A - Prof. Slim
// https://codeforces.com/contest/1670/problem/A
// Submission: https://codeforces.com/contest/1670/submission/361814899

#include <iostream>
#include <cmath>
using namespace std;

int a[100000];
int t;
int main()
{
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int num=0,flag=1;
		for(int j=0;j<n;j++)
		{
			if(a[j]<0)
			{
				num++;
			}
			a[j]=abs(a[j]);
		}
		for(int j=0;j<num;j++)
		{
			a[j]*=-1;
		}
		for(int j=0;j<n-1;j++)
		{
			if(a[j+1]<a[j])
			{
				flag=0;
			}
		}
		if(flag)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}

