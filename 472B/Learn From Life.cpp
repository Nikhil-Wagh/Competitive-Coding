#include<bits/stdc++.h>
using namespace std;
void shellSort(int a[],int n)
{
    int j;
    for(int gap=n/2;gap>0;gap/=2)
    {
        for(int i=gap;i<n;i++)
        {
            int temp=a[i];
            for(j=i;j>=gap&&temp<a[j-gap];j-=gap)
            {
                a[j]=a[j-gap];
            }
            a[j]=temp;
        }
    }
}
int main()
{
    int i,size,k,a[2000],sum=0;
    cin>>size>>k;
    for(i=0;i<size;i++)
        cin>>a[i];
    shellSort(a,size);
    for(i=0;i<size;i++)
        cout<<a[i]<<" ";
    for(i=size-1;i>=0;i-=k)
    {
        sum+=((a[i]-1)*2);
    }
    cout<<sum<<endl;
    return 0;
}
