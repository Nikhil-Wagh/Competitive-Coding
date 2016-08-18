#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,y=0,z=0,n,a[3][100];
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
       cin>>a[0][i]>>a[1][i]>>a[2][i];
    }
   for(i=0;i<n;i++)
   {
       x+=a[0][i];
       y+=a[1][i];
       z+=a[2][i];
   }
   if(x==0&&y==0&&z==0)
    cout<<"YES";
   else
    cout<<"NO";
}
