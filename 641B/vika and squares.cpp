#include<bits/stdc++.h>
using namespace std;

int Min = 1e9+5,ans=0;
int a[200005];
vector<int>P;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    {
        if(Min>=a[i])
        {
            Min = a[i];
            ans = i;
        }
    }
    int first = 0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==Min)
            P.push_back(i);
    }
    P.push_back(P[0]+n);
    long long tmp = 0;
    for(int i=1;i<P.size();i++)
        tmp = max(tmp,1LL*P[i]-1LL*P[i-1]-1LL);
    printf("%lld\n",1LL*n*Min+1LL*tmp);
}
