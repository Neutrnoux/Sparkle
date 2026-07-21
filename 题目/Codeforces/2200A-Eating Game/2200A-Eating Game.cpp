#include <iostream>
#include <map>
using namespace std;

int t;
int ans[11];
int main()
{
	cin>>t;
	while(t--)
	{
		for(int i=0;i<11;i++)
		{
			ans[i]=0;
		}
		int n;
		cin>>n;
		map<int,int> a;
		map<int,int> b;
		int s=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		for(int i=1;i<=n;i++)
		{
			for(int i=1;i<=n;i++)
			{
				b[i]=a[i];
			}
			int sum=s;
			int pos=i;
			while(sum>1)
			{
				if(b[pos]>0)
				{
					b[pos]--;
					sum--;
				}
				pos=pos%n+1;
			}
			for(int i=1;i<=n;i++)
			{
				if(b[i]==sum)
				{
					if(ans[i]==0)
						ans[i]++;
				}
			}
		}
		int suma=0;
		for(int i=1;i<=n;i++)
		{
			suma+=ans[i];
		}
		cout<<suma<<endl;
	}
}
