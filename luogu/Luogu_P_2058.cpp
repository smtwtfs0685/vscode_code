#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct node
{
	int timee,country;
}q[300005];
int cnt[100005],ans;
int head,tail;
int main()
{
	//freopen("a.txt","r",stdin);
	int T;
	cin>>T;
	while(T--)
	{
		int t,k;
		cin>>t>>k;
		for(int i=1;i<=k;i++)
		{
			int x;
			cin>>x;
			q[++tail]={t,x};
			cnt[x]++;
			if(cnt[x]==1) ans++;
		}
		while(head<tail&&t-q[head].timee>=86400)
		{
			cnt[q[head].country]--;
			if(cnt[q[head].country]==0) ans--;
			head++;
		}
		cout<<ans<<'\n';
	}
    return 0;
}
