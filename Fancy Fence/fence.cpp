#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,i,j=3;
    double s;
    bool found=false;
    cin>>n;
    for(i=0;i<n;i++,j=3)
    {
        cin>>a;
        while(!found)
        {
            s=180*(double)(j-2)/(double)j;
            if(a>s)
            {
                j++;continue;
            }
            else
                break;
        }
        if(a==ceil(s)&&ceil(s)==s)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }
}
