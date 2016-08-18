#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[100009],n,j,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i]-1;
        if(sum%2==0)
          cout<<2<<endl;
        else cout<<1<<endl;
    }
}
