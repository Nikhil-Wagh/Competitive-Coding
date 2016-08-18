#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[10],n,max=0,rem;
    cin>>n;
    bool found = false;
    for(i=0;n;i++)
    {
        a[i]=n%10;
        if(a[i]%2==0&&!found)
        {
            if(a[i]<a[0])
            {
                found=true;
                max=i;
            }
        }
        n/=10;
    }
    int temp;
    if(max&&found)
    {
        temp=a[max];
    a[max]=a[0];
    a[0]=temp;
    for(i--;i>=0;i--)
        cout<<a[i];
    }
    else if(found)
    {
        temp[]
    }
}
