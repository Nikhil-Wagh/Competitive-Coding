#include<bits/stdc++.h>
using namespace std;
class test{
int x;
public:
    void getData()
    {
        cin>>x;
    }
    friend void operator ->(test t,void *p);
};
void operator -> (test t,void *p)
{
    t.p;
}
int main()
{
    test t;
    t->getData();
}
