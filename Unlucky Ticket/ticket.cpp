#include<bits/stdc++.h>
using namespace std;
void insertionSort(int a[],int n)
{
    int i,j,temp;
     for (i = 1; i < n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            if (a[j] < a[j-1])
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
            else
                break;
        }
    }
}
int main()
{
    int n,a[100],b[100],i;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
        a[i]=s[i]-48;
    for(i=0;i<n;i++)
        b[i]=s[i+n]-48;
    insertionSort(a,n);
    insertionSort(b,n);
    if(a[0]>b[0])
    {
        for(i=1;i<n;i++)
            if(a[i]<=b[i])
            break;
        if(i!=n)
        {
            cout<<"NO";
            return 0;
        }
        else
        {
            cout<<"YES";
            return 0;
        }
    }
    else if(a[0]<b[0])
    {
        for(i=1;i<n;i++)
            if(a[i]>=b[i])
            break;
        if(i!=n)
        {
            cout<<"NO";
            return 0;
        }
        else
        {
            cout<<"YES";
            return 0;
        }
    }
    else
        cout<<"NO";
    return 0;
}
