#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,sum=0,k,max=-1,a[26]={0};
    string s;
    cin>>s;
    cin>>k;
    for(i=0;i<26;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    for(i=0;s[i]!='\0';i++)
    {
        sum+=((i+1)*a[s[i]-'a']);
    }
    sum+=(k*max);
    cout<<sum;
}
