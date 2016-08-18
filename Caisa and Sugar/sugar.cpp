#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,s,x,y,min=100;
    bool found=false;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(s>x||(s==x&&y==0))
        {
            found=true;
            if(y>0)
            {
                if(y<min)
                    {
                        min=y;
                    }
            }
        }
    }
    if(found)
        cout<<100-min;
        else
            cout<<-1;
}
