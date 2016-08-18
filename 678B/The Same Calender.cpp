#include<bits/stdc++.h>
using namespace std;
int notleap(int y)
{
    if(y%4)
        return y%4;
    else if(y%100)
        return 0;
    else if(y%400)
        return y%400;
    else
        return 0;

}
int main()
{
    int i,y,rem,r,a,b;
    cin>>y;
    if(notleap(y))
        rem=1;
    else
        rem=2;
        r=rem;
    a=notleap(y);
    for(i=1;i<100;i++)
    {
        if((notleap(y+i)==0))
            r+=2;
        else
            r+=1;
        r%=7;
        b=notleap(y+i);
        //cout<<r<<" "<<rem<<" "<<a<<" "<<b<<endl;
        if(r==rem)
        {
            if((a==0&&b==0)||(a>0&&b>0))
            {
                cout<<(y+i);
                return 0;
            }
        }
    }
    cout<<"Halwa";
}
