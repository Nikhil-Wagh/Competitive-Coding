#include<bits/stdc++.h>
using namespace std;
int visited[55];
list<int> li[55];
long long int ans=1;
int parent;
int dsu(int i)
{
	visited[i]=parent;
	if(i!=parent)
		ans*=2;
	for(list <int> :: iterator j=li[i].begin();j!=li[i].end();j++)
	{
		if(visited[*j]==0)
		{
			dsu(*j);
		}
	}
}
int main()
{
	int n,m,i,j,a[55],x,y;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		x--;y--;
		li[x].push_back(y);
		li[y].push_back(x);
	}
	for(i=1;i<=n;i++)
	{
		if(visited[i]==0)
			{
			    parent=i;
				dsu(i);
			}
	}
	cout<<ans<<endl;
}