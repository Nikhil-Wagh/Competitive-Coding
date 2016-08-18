#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=2;
    cin>>n;
    if(n%2==0)
    {
        for(int i=0;i<n;i+=2,temp+=3)
        {
            cout<<temp<<" ";
            temp--;
            cout<<temp<<" ";
        }
    }
    else
        cout<<-1;
}
