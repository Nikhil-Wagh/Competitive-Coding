#include<bits/stdc++.h>
using namespace std;
void hashing(int a[],string c)
{
    for(int j=0;c[j]!='\0';j++)
       {
         a[c[j]-'A']++;
       }
}
int main()
{
    int x[26]={0},y[26]={0},i;
    string a,b,c;
    cin>>a>>b>>c;
    hashing(x,a);
    hashing(x,b);
    hashing(y,c);
    for(i=0;i<26;i++)
        if(x[i]!=y[i])
        break;
    if(i==26)
        cout<<"YES";
    else
        cout<<"NO";
}
