#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,max=1,temp=1,h[100004],m[100004],n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>h[i]>>m[i];
        if(i!=0)
        {
            if(h[i]==h[i-1]&&m[i]==m[i-1])
                {
                    temp++;
                    if(temp>max)
                        max=temp;
                }
            else
                temp=1;
        }
    }
    cout<<max;
    return 0;
}
