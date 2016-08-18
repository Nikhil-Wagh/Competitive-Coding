#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,a[1005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
            x=n-a[0];
        else
        {
            if(i%2==0)
            {
                a[i]+=x;
                if(a[i]%n!=i)
                {
                    cout<<"NO";
                    return 0;
                }
            }
            else
            {
                a[i]+=(n-x);
                if(a[i]%n!=i)
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES";
}
