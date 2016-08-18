#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[26]={0},cnt=0;
    char s;
    do{
        cin>>s;
        if(s>='a'&&s<='z')
            a[s-'a']++;
    }while(s!='}');
    for(int i=0;i<26;i++)
    {
        if(a[i]>0)
            cnt++;
    }
    cout<<cnt;
}
