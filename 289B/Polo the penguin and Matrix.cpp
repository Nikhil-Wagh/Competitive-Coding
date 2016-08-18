#include<bits/stdc++.h>
using namespace std;
vector <int> vi;
vector<int>av[100005];
list<int>li[100005];
queue<int>q[100005];
int main()
{
    int i,n,m,d,sum=0,x,y,z;
    cin>>n>>m>>d;
    for(i=0;i<(n*m);i++)
    {
        cin>>x;
        vi.push_back(x);
        sum+=x;
        if(i==0)
            y=x%d;
        else
            if(y!=(x%d))
            {
                cout<<-1;
                return 0;
            }
    }
    sum=sum/i;
    sort(vi.begin(),vi.begin()+i);
    x=*(vi.begin()+(i/2));
    y=*(vi.begin()+(i/2)+1);
    //cout<<x<<" "<<y<<endl;
    for(i=0,sum=0,z=0;i<(n*m);i++)
    {
        sum+=abs(x-*(vi.begin()+i))/d;
        z+=abs(y-*(vi.begin()+i))/d;
    }
    cout<<min(sum,z);
    return 0;
}
