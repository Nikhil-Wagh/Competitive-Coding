#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n=0,flag=1,j=0;
    string a;
    string b;
    b={"AHIMOToUVvWwXxY"};

    cin>>a;
    while(a[n]!='\0')
        n++;
    for(i=0;a[i]!='\0';i++,flag=0)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                flag = 1;
                break;
            }

        }
        if(flag==0)
        {
            if((a[i]=='p'&&a[n-1-i]=='q')||(a[i]=='q'&&a[n-1-i]=='p')||(a[i]=='b'&&a[n-1-i]=='d')||(a[i]=='d'&&a[n-1-i]=='b'))
                continue;
            cout<<"NIE";
            return 0;
        }
        if((a[i]!=b[j])||(a[n-1-i]!=b[j]))
        {
            if((a[i]=='p'&&a[n-1-i]=='q')||(a[i]=='q'&&a[n-1-i]=='p')||(a[i]=='b'&&a[n-1-i]=='d')||(a[i]=='d'&&a[n-1-i]=='b'))
                continue;
            cout<<"NIE";
            return 0;
        }
    }
    cout<<"TAK";
}
