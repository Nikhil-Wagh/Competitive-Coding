#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    bool leap=false;
    cin>>y;
    if(y%4!=0)
        leap=false;
    else if(y%100!=0)
        leap =true;
    else if(y%400!=0)
        leap=false;
    else
        leap=true;
    if(leap)
        cout<<y+28;
    else
        cout<<y+6;
}
