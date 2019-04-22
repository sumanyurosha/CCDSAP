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
		int codechef[6]={0};
		while(n--)
		{
			string str;
			cin>>str;
			for(int i=0;i<str.size();i++)
			{
				if(str[i]=='c')
					codechef[0]++;
				else if(str[i] == 'o')
					codechef[1]++;
				else if(str[i] == 'd')
					codechef[2]++;
				else if(str[i] == 'e')
					codechef[3]++;
				else if(str[i] == 'h')
					codechef[4]++;
				else if(str[i] == 'f')
					codechef[5]++;	
			}
		}
		codechef[0]/=2;
		codechef[3]/=2;
		int ans = INT_MAX;
		for(int i=0;i<6;i++)
			ans = min(ans,codechef[i]);
		cout<<ans<<"\n";
	}
	return 0;
}
