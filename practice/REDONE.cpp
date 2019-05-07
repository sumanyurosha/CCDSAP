#include<iostream>
#define MOD 1000000007
using namespace std;
long long computed[1000005];
void precompute()
{
	for(long long i=1;i<1000001;i++)
	{
		computed[i] = computed[i-1] + i;
		computed[i] %= MOD;
		long long tmp = computed[i-1]*i;
		tmp %= MOD;
		computed[i] += tmp;
		computed[i] %= MOD;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	precompute();
	while(t--)
	{
		int n;
		cin>>n;
		cout<<computed[n]<<"\n";
	}
	return 0;
}
