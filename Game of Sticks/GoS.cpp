#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x<y)
    {
        if(x%2==0)
            cout<<"Malvika";
        else
            cout<<"Akshat";
    }
    else
    {
        if(y%2==0)
            cout<<"Malvika";
        else
            cout<<"Akshat";
    }
}
