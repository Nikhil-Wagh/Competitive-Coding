#include<bits/stdc++.h>
using namespace std;
int w[100][100]={0};
int visited[100]={0};
int main()
{
	int v,n,x,y,size;
	cin >> size;
	cin >> n;
	for(int i =0;i<n;i++)
	{
		cin >> x;
		cin >> y;
		cin >> w[x][y];
	}
	for(v =1;v<=size ;v++)
	{
		for(int i =0;i<100;i++)
		{
			if(w[v][i]>0)
			{
				if(visited[i]==0)
				{
					visited[i] = w[v][i]+visited[v];
				}
				else
				{
					visited[i] = min(visited[i],w[v][i]+visited[v]);
				}
			}
		}
	}
	for(int i =1 ;i<=size;i++)
		cout<<i<<" "<<visited[i]<<endl;
	return 0;
}
