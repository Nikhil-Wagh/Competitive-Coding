#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,y=0,z=0,n,a[3][5000],temp;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==1)
        {
            a[0][x++]=i+1;
        }
        else if(temp==2)
        {
            a[1][y++]=i+1;
        }
        else
        {
            a[2][z++]=i+1;
        }
    }
    int min;
    if(x<=y&&x<=z)
        min=x;
    else if(y<=z&&y<=x)
        min=y;
    else
        min=z;
    cout<<min<<endl;
    for(i=0;i<min;i++)
    {
        cout<<a[0][i]<<" "<<a[1][i]<<" "<<a[2][i]<<endl;
    }
}
