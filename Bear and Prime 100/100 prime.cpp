#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,prime[]={4,9,25,49,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,51},flag=0;
    string ans;
    for(i=0;i<20;i++)
    {
        cout<<prime[i]<<endl;
        cout<<flush;
        cin>>ans;
        if(ans=="yes")
        {
            flag++;
            if(flag>1)
                {
                    cout<<"composite";
                    return 0;
                }
        }
    }
    cout<<"prime";
        return 0;
}
