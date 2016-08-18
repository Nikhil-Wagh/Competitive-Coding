#include<bits/stdc++.h>
#define pi 3.14159265358979323846264338327950288419716
using namespace std;
bool compareDouble(double a,double b)
{
    double e=0.0000001;
    if(abs(a-b)<e)
        return true;
    if(a>b+e)
        return true;
    return false;
}
int main()
{
    double R,r,n;
    cin>>n>>R>>r;
    if(r>R)
    {
        cout<<"NO";return 0;
    }
    if(R>=r&&n==1)
    {
        cout<<"YES";return 0;
    }
    else if(n==2&&(2*r)<=R)
    {
        cout<<"YES";return 0;
    }
    else
        if(R==r&&n>1)
    {
        cout<<"NO";return 0;
    }
    if(compareDouble(pi,(n*asin(r/(R-r)))))
        {
            cout<<"YES";return 0;
        }
    cout<<"NO";
}
