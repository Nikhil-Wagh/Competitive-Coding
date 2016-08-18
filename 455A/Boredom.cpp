#include<bits/stdc++.h>
using namespace std;
int main()
{
    uint64_t i,n,d,k,b,sum=0,p,q,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>d>>k>>b;
        p=d/b;
        q=d%b;
        if(p+q==k)
        {
            cout<<"Possible"<<endl;
        }
        else
        {
            x=(k-(p+q))/(b-1);
            if(d==((p-x)*b+q+x*b)&&(k==(p+q-x+(b*x)))&&x>0)
                cout<<"Possible"<<endl;
            else
                cout<<"Impossible"<<endl;
        }
    }
}
