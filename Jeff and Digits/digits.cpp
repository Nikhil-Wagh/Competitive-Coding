#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,fi=0,ze=0,temp,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==5)
            fi++;
        else
            ze++;
    }
    if(ze>0)
    {
        if(fi%9!=0)
            cout<<0;
        else
        {
            for(int j=0;j<fi;j++)
            cout<<5;
            for(int j=0;j<ze;j++)
                cout<<0;
        }
    }
    else
        cout<<-1;
}
