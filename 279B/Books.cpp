#include<bits/stdc++.h>
using namespace std;
 pair<int,char> p;
 vector<int> v(10);


 int main()
 {
     p.first=10;
     p.second='a';
     cout<<p.first<<"\n";
     cout<<p.second;
     int n=5;
     for(int i=0;i<n;i++)
     {
         cin>>v.at(i);
     }
     for(int i=0;i<n;i++)
     {
         cout<<v.at(i);
     }
     return 0;
 }
