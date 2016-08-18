#include<bits/stdc++.h>
using namespace std;
vector <int> a;
int main()
{
    int i,j,posj,x,n,m,dif,mi=INT_MAX;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(i=0;i+n<=m;i++)
    {
        dif=*(a.begin()+i+n-1)-*(a.begin()+i);
        if(dif<mi)
            mi=dif;
    }
    cout<<mi<<endl;
}
