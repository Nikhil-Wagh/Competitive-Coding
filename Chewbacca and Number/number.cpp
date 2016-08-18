#include<bits/stdc++.h>
using namespace std;
int main()
{
   int len,i;
   string a;
   cin>>a;
   len=a.length();
   for(i=0;i<len;i++)
   {
       if(i==0&&a[i]=='9')
       {
           cout<<a[i];continue;
       }
      else if((a[i]-'0')>4)
        cout<<9-(a[i]-'0');
      else
        cout<<a[i];
   }
}
