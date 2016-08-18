#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3]={0},i;
    string str;
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='1')
            a[0]++;
        else if(str[i]=='2')
            a[1]++;
        else if(str[i]=='3')
            a[2]++;
    }
    i--;
    for(int j=0;j<a[0];j++)
    {
        cout<<"1+";i-=2;
    }
     for(int j=0;j<a[1];j++)
    {
        cout<<"2+";i-=2;
    }
     for(int j=0;j<a[2];j++)
    {
        if(j!=i)
        cout<<"3+";
        else
            cout<<"3";
    }
}
