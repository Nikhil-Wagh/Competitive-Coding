#include<bits/stdc++.h>
using namespace std;
string a="qwertyuiop",b="asdfghjkl;",c="zxcvbnm,./",str;
void check(char temp)
{

}
int main()
{
    int i,x;
    char p;
    cin>>p;
    if(p=='R')
        x=1;
    else
        x=-1;
    cin>>str;
    for(i=0;str[i]!='\0';i++)
        check(str[i],x);
}
