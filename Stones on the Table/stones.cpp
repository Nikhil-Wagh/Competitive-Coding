#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,cnt=0;
    char a[51];
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(i!=0)
                if(a[i]==a[i-1])
                cnt++;
        }
        cout<<cnt;
}
