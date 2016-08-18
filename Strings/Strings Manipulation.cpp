#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,len,len2,ch;
    string str;string str2;
    cout<<"Please enter the string: ";
    cin>>str;
    for(len=0;str[len]!='\0';len++){}
    for(i=0;str2[i]!='\0';i++)
                len2++;
    cout<<"Please Enter your choice"<<endl;
    cout<<"1.Check Palindrome\n2.Substring\n3.Compare\n4.Concat\n5.Length\n6.Reverse\n7.Exit\n";
    cin>>ch;
    do{
        switch(ch)
        {
        case 1:
            for(i=0,j=len-1;i<len;i++,j--)
            {
                if(str[i]!=str[j])
                    break;
            }
            if(i==len)
                cout<<"The given string is a PALINDROME"<<endl;
            else
                cout<<"The given string is NOT a PALINDROME"<<endl;
            break;
        case 2:
            cout<<"Please enter another String"<<endl;
            cin>>str2;
            for(i=0,j=0;i<len-len2;i++,j=0)
            {
                if(str[i]==str2[j])
                {
                    int temp=i;
                    while(j<len2)
                    {
                        if(str[temp]!=str2[j])
                            break;
                        j++;temp++;
                    }
                    if(j==len2)
                    {
                        flag=1,break;
                    }
                }
                if(flag)
                {
                    cout<<"String 2 is a subset of String 1"<<endl;
                    break;
                }
            }
            if(~flag)
                cout<<"String 2 is NOT a subset of String 1\n";
            break;
        case 3:
                cout<<"Please enter another String"<<endl;
                cin>>str2;
                for(i=0;i<len||i<len2;i++)
                    if(str[i]-str2[i]>0)
                    cout<<"String 1 is lexicographically greater than String 2\n";
                    else if(str[i]-str2[i]<0)
                        cout<<"String 2 is lexicographically greater than String 1\n";
                if(i==len)
                    cout<<"Both strings are same";
            break;
        case 4:
            cout<<"Please enter another String"<<endl;
                cin>>str2;
            cout<<"Concated String is :"
            for(i=0;i<len;i++)
                cout<<str[i];
            for(i=0;i<len2;i++)
                cout<<str2[i];
        case 5:
            cout<<"Length of the given string is: "<<len;break;
        case 6:
            cout<<"Reverse of string is: "
            for(i=len-1;i>=0;i--)
                cout<<str[i];
        }
    }while(ch!=7);
}
