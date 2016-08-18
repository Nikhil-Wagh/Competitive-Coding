#include<iostream>
using namespace std;
static int n;
class weather
{
    int day,aor,aos;
    double htemp,ltemp;
public:
    weather();
    ~weather(){cout<<" ";}
    void accept(int n);
    void modify();
    void display(int i,int z);
    void del(int);
    friend void mon_rep(weather w,int i);
};
void mon_rep(weather w,int i)
{
    static int r,s;
    static double ht,lt;
        r+=w.aor;
        s+=w.aos;
        ht+=w.htemp;
        lt+=w.ltemp;
    if(i==31)
    {
        ht/=n;
        lt/=n;
        r/=n;
        s/=n;
    cout<<"Monthly Report:\n";
    cout<<"High Temp  Low Temp  Amount of Rain  Amount of Snow\n";
    cout<<ht<<"\t\t"<<lt<<"\t\t"<<r<<"\t\t"<<s<<endl;
    }
}
weather::weather()
{
    day=0;
    aor=0;
    aos=0;
    htemp=0;
    ltemp=0;
}

void  weather::accept(int n)
{
    day=n;
    cout<<"Enter the high temp, low temp, amt of rain, amt of snow respectively\n";
    cin>>htemp>>ltemp>>aor>>aos;
}
void weather::display(int i,int z)
{
    if(n==0)
    {
        cout<<"\n Database Empty \n";
    }
    else if(z==1)
        {
            if(day!=0)
            cout<<day<<"\t"<<htemp<<"\t"<<ltemp<<"\t"<<aor<<"\t"<<aos<<endl;
        }
    else
    {
        if(day!=0)
            cout<<day<<"\t"<<htemp<<"\t"<<ltemp<<"\t"<<aor<<"\t"<<aos<<endl;
        else
        cout<<"No record for day "<<i<<endl;
    }

}
void weather::modify()
{   int y;
    cout<<"Enter the choice for modification: ";
    cout<<"\n1.High Temp\n2.Low Temp\n3.Amount of Rain\n4.Amount of Snow\n";
    cin>>y;
    switch(y)
    {
        case 1: cout<<"Enter the new value of High Temp: ";
                cin>>htemp;
                break;
        case 2: cout<<"Enter the new value of Low Temp: ";
                cin>>ltemp;
                break;
        case 3: cout<<"Enter the new value of Amount of Rain: ";
                cin>>aor;
                break;
        case 4: cout<<"Enter the new value of Amount of Snow: ";
                cin>>aos;
                break;
        default: cout<<"\nINVALID MODIFICATION CHOICE!!!\n";
    }
}

void weather:: del(int x)
{
    if(day==0)
    {
        cout<<"No Record for day "<<x<<endl;
    }
    else
    {
        weather();
         n--;
        cout<<"Record deleted for day"<<x<<endl;
    }
}

int main()
{
    weather w[32];
    char ch;
    int c,x;
    do
    {
        cout<<"Enter your choice\n";
        cout<<"1.Accept\n2.Display all records\n3.Display specific record\n4.Modify\n5.Monthly report\n6.Delete\n7.Exit\n";
        cin>>c;
        switch(c)
        {
        case 1:cout<<"Enter the day of month:";//accept
                cin>>x;
                w[x].accept(x);
                n++;
                break;
        case 2: if(n==0)//all rec
                    cout<<"\nNo record found\n";
                else
                {
                    cout<<"Day  High Temp  Low Temp  Amount of Rain  Amount of Snow\n";
                    for(int i=1;i<32;i++)
                    {
                        w[i].display(i,1);
                    }
                }
                break;
        case 3: cout<<"Enter the day for displaying record\n";
                cin>>x;
                cout<<"Day  High Temp  Low Temp  Amount of Rain  Amount of Snow\n";
                w[x].display(x,0);
                break;
        case 4: cout<<"Enter the day to modify the record\n";
                cin>>x;
                w[x].modify();
                break;
        case 5: for(int i=1;i<32;i++)
                {
                    mon_rep(w[i],i);
                }
        case 6: cout<<"Enter the day for record deletion: ";
                cin>>x;
                w[x].del(x);
                break;
        //case 7: exit(0);
        default:cout<<"\nINVALID CHOICE\n";
        }

        cout<<"Do you wish to continue(y/n) :";
        cin>>ch;
        }while(ch=='Y'||ch=='y');
}
