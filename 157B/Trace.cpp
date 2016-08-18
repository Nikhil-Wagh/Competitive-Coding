#include<bits/stdc++.h>
using namespace std;
void bubbleSort(double a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
int main()
{
    int i,n,k=0;
    double r[101],a=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>r[i];
    }
    bubbleSort(r,n);
    for(i=n-1,k=0;i>=0;i--,k++)
    {
         if(k%2)
            a-=(r[i]*r[i]);
        else
            a+=(r[i]*r[i]);
    }
    a*=(double)3.14159265358979;
    cout.precision(17);
    cout<<fixed<<a<<endl;
}
