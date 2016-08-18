#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,temp,j,f;
    bool flag =false;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            cout<<"YES"<<endl;
            cout<<0<<endl;
            return 0;
        }
    }
    for(i=1;i<125;i++)
    {
        flag=false;f=0;
        n=i*8;
        j=s.length()-1;
        while(n>0)
        {
            temp=n%10;
            n/=10;
            while(j>=0)
            {
                if(s[j]==temp+'0')
                {
                    f=1;
                    break;
                }
                j--;

            }
            if(j==-1)
            {
                flag = true;
                break;
            }
            if(f=1)
                j--;
        }
        if(flag==false)
        {
            cout<<"YES"<<endl;
            cout<<(i*8)<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
