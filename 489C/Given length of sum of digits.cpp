#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,m,s,sum=0,flag=0;
    char a[105],b[105];
    cin>>m>>s;
    sum=s;
    if(ceil((float(s)/float(9))>m||(s==0&&m!=1)))
    cout<<-1<<" "<<-1;
    else
    {
        for(i=m-1;i>=0;i--)
        {
            if(sum>9)
            {
                a[i]='9';
                sum-=9;
            }
            else if(sum>0&&i!=0)
            {
                a[i]=char(sum+'0'-1);
                flag=1;
                sum=0;
            }
            else if(sum>0)
            {
                a[i]=sum+48;
            }
            else if(flag==0)
            {
                a[i]='0';
            }
            else if(flag==1&&i!=0)
                a[i]='0';
            else
                a[i]='1';
        }
        for(i=0;i<m;i++)
            cout<<a[i];
        cout<<" ";
            for(i=0;i<m;i++)
        {
            if(s>=9)
            {
                b[i]='9';
                s-=9;
            }
            else if(s>0)
            {
                b[i]=s+48;
                s=0;
            }
            else
            {
                b[i]='0';
            }
        }
        for(i=0;i<m;i++)
        {
            cout<<b[i];
        }
    }
}
