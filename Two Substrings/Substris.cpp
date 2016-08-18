#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,posa[100000],posb[100000],a=0,b=0;
    string s;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
            posa[a]=i;
            a++;
        }
        else if(s[i]=='B'&&s[i+1]=='A')
        {
            posb[b]=i;
            b++;
        }
    }
    if(posb[b-1]-posa[0]>1)
        cout<<"YES";
    else if ((posa[a-1]-posb[0]>1))
        cout<<"YES";
    else cout<<"NO";
}
