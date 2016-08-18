#include<bits/stdc++.h>
using namespace std;
class Stack{
    char *data;
    int top;
public:
    Stack(){
    data = new char [50];
    top = -1;
    }
    void del();
    void print();
    void insrt(int);
    char vati(int);
    void Swap(int);
};
void Stack::del(){
    if(top==-1)
        cout<<"Stack is Empty";
    else
    {
        top--;
        delete data;
    }
}
void Stack::insrt(int n){
    char x;
    for( int i = 0 ; i < n ;i++ )
    {
        cin >> x;
        top++;
        data[top] = x;
    }
}
void Stack :: print(){
    if(top == -1)
        cout << "Stack is Empty"<<endl;
    else
    {
        int u = 0;
        while (u<=top)
        {
            cout << data[u];
            u++;
        }
    }
}
char Stack :: vati(int x)
{
    return data[x];
}
void Stack :: Swap (int j)
{
    swap(data[j],data[j+1]);
}
int main()
{
    Stack s;
    int n,t;
    cin>>n>>t;
    t = min(n,t);
    s.insrt(n);
    for( int i = 0 ; i < t ; i++ )
    {
        for(int j=0;j<n-1;j++)
        if(s.vati(j) == 'B' && s.vati(j+1) == 'G')
           {
             s.Swap(j);
             j++;
           }
             //s.print();cout<<endl;
    }
    s.print();
}











