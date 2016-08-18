#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool flag=false;
    int i,cnt=0,n,x,y,t,temp,j;
    vector<int>a,b;
    vector<int>ta,tb;
    cin>>n;
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>t;
        a.push_back(t);
        ta.push_back(t);
    }
    cin>>y;
    for(i=0;i<y;i++)
    {
        cin>>t;
        b.push_back(t);
        tb.push_back(t);
    }
    while(a.size()&&b.size()&&cnt<10000)
    {
        /*if(cnt!=0)
        {
            for(i=0;i<a.size()&&i<ta.size();i++)
            {cout<<"a"<<endl;
                if(a[i]!=ta[i])
                    break;
            }
            if(i!=a.size())
            {cout<<"b"<<endl;
                flag=true;
                break;
            }
            for(i=0;i<b.size()&&i<tb.size();i++)
            {cout<<"c"<<endl;
                if(b[i]!=tb[i])
                    break;
            }
            if(i!=b.size())
            {cout<<"d"<<endl;
                flag=true;
                break;
            }
        }*/

        if(*(a.begin())<*(b.begin()))
        {
            temp=*(a.begin());
            a.erase(a.begin());
            b.push_back(temp);
            temp=*(b.begin());
            b.erase(b.begin());
            b.push_back(temp);
        }
        else
        {
            temp=*(b.begin());
            b.erase(b.begin());
            a.push_back(temp);
            temp=*(a.begin());
            a.erase(a.begin());
            a.push_back(temp);
        }
        cnt++;
       // cout<<cnt<<" ";
        /*for(i=0;i<a.size();i++)
            cout<<a[i]<<" ";
        cout<<endl;
        for(i=0;i<b.size();i++)
            cout<<b[i]<<" ";
        cout<<endl;
        cnt++;*/
    }
    if(cnt==10000)
    {
        cout<<-1;
    }
    else
    {
        if(a.size())
            cout<<cnt<<" "<<1;
        else
            cout<<cnt<<" "<<2;
    }
}










