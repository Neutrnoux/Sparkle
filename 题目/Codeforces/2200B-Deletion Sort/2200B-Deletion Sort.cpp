#include <iostream>
#include <vector>
using namespace std;

int t;
int main()
{
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int flag=1;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				cout<<1<<endl;
				flag=0;
				break;
			}
		}
		if(flag)
		{
			cout<<a.size()<<endl;
		}
	}
}