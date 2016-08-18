#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,rem=0,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp>0)
        {
            rem+=temp;
        }
        if(temp==-1)
        {
            if(rem>0)
                rem--;
            else
                cnt++;
        }
    }
    cout<<cnt;
}
