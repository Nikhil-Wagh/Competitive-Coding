#include<bits/stdc++.h>
using namespace std;
int main()
{
     for(i=0;i<5;i++)
    {
        temp=i;
        for(j=i;j<5;j++)
        {
            if(a[j]<a[temp])
                temp=j;
        }
        if(temp!=i)
        {
            x=a[i];
            a[i]=a[temp];
            a[temp]=x;
        }
    }
}
