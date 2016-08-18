#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,n;
    cin>>n;
    i=n/1234567;
    j=n/123456;
    k=n/1234;
    bool found=false;
    for(i=n/1234567+1;i>=0&&!found;i--)
    {

        for(j=n/123456+1;j>=0&&!found;j--)
        {

            for( k=n/1234+1;k>=0;k--)
            {
                if(((i*1234567)+(j*123456)+(k*1234))==n)
                {
                    cout<<"YES";
                    return 0;
                }
                if(((i*1234567)+(j*123456)+(k*1234))>1000000000)
                    break;
            }
        }
    }
    cout<<"NO";
    return 0;
}
