#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		bool flagRow = true;
		for(int i=0;i<n;i++)
		{
			bool flagRowTemp = false;
			for(int j=0;j<n;j++)
			{
				if(a[i][j]==0)
					flagRowTemp = true;
			}
			flagRow &= flagRowTemp;
		}
		bool flagCol = true;
		for(int i=0;i<n;i++)
		{
			bool flagColTemp = false;
			for(int j=0;j<n;j++)
			{
				if(a[j][i]==0)
					flagColTemp = true;
			}
			flagCol &= flagColTemp;
		}
		
		if(flagRow&flagCol)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
