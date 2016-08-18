#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int len=b.length()-1;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[len--])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
