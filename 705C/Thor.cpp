#include<bits/stdc++.h>
using namespace std;
vector <int> vi;
vector<int > :: iterator it=vi.begin();
vector <int > s[300009];
int k=0;
int main()
{
    int i,j,n,q,sum=0,a[300009]={0},t,x,cnt,m,l;
    cin>>n>>q;
    for(i=0;i<q;i++)
    {
        cin>>t>>x;
        if(t==1)
        {
           vi.push_back(x);
           sum++;
           s[x].push_back(i);
           a[x]++;
           for(l=0;l<s[x].size();l++)
            cout<<s[x][l]<<" ";
            cout<<endl;
            for(l=0;l<vi.size();l++)
                cout<<vi[l];
        }
        else if(t==2)
        {
           sum-=a[x];
           a[x]=0;
           for(j=0;j<s[x].size();j++)
           {
               vi[s[x][j]]=0;
           }
           s[x].empty();
        }
        else
        {
           while(k<vi.size())
           {
               if(vi[k]==0)
                cnt++;
               k++;
           }
           sum=vi.size()-cnt-x;
        }
        cout<<sum<<endl;
    }
}
