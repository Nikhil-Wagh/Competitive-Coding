#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j,x;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>x;
            if(x==1)
                break;
        }
        if(j!=5)
            break;
    }
    cout<<(abs(i-2)+abs(j-2));
}
