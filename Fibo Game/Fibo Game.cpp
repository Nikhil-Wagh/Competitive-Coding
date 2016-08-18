#include<stdio.h>
int main()
{
    int q,l,r,m,n,ans;
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        m=6*(l/6);
        m+=4;
        if(m<l)
            m+=6;
        n=ceil(double(r)/6)*6;
        n-=2;
        if(n>r)
            n-=6;
        ans=(n-m)/6+1;
        if(ans%2==0)
            cout<<1<<endl;
        else
        cout<<3<<endl;
    }
    return 0;
}
