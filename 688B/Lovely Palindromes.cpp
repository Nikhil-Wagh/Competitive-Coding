#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string a;
    cin>>a;
    for(i=0;a[i]!='\0';i++)
        cout<<a[i];
    for(i--;i>=0;i--)
        cout<<a[i];
}
