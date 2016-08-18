#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,max=0,a[100]={0},found=0,x,sum=0;
    cin>>n;
    char c;
    for(i=0;i<n;i++)
        {
            cin>>c;
            cin>>x;
            if(c=='+')
            a[i]=x;
            else
                a[i]=-x;
        }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            sum++;
        else
        {
            for(j=i-1;j>=0;j--)
            {
                if(abs(a[i])==abs(a[j]))
                {
                    found =1;break;
                }
            }
            if(!found)
                sum++;
        }
        if(sum>max)
            max=sum;
    }
    cout<<max;
}

