#include<iostream>
using namespace std;
static int n;
class weather
{
    int day,aor,aos;
    int htmp,ltmp;
public:
    weather();

    void accept(int n);
    void modify();
    void display(int i);
    void del(int);
    friend void monthlyreport(weather w,int i);
};

void  weather::accept(int n)
{
	if(day==n)
    cout<<"Data already exist"<<endl;
    else
    {
	day=n;
    cout<<"Enter the High temp, Low temp, Amount of rain, Amount of snow respectively\n";
    cin>>htmp>>ltmp>>aor>>aos;}
}


void monthlyreport(weather w,int i)
{
    static int r,s;
    static int ht,lt;
        r+=w.aor;
        s+=w.aos;
        ht+=w.htmp;
        lt+=w.ltmp;
    if(i==39)
    {
        ht/=n;
        lt/=n;
        r/=n;
        s/=n;
    cout<<"Monthly Report:\n";
    cout<<"High Temp  Low Temp  Amount of Rain  Amount of Snow\n";
    cout<<"				"<<ht<<"				"<<lt<<"			"<<r<<"				"<<s<<endl;
    }
}
weather::weather()
{

    aor=0;
    aos=0;
    htmp=0;
    ltmp=0;
}


void weather::display(int i)
{
    if(n==0)
    {
        cout<<"\n Database Empty \n";
    }

    else
    {       if(day!=0)

            cout<<day<<"\t"<<htmp<<"\t"<<ltmp<<"\t"<<aor<<"\t"<<aos<<endl;

    }

}
void weather::modify()
{   int y;
    cout<<"\n1.High Temp\n2.Low Temp\n3.Amount of Rain\n4.Amount of Snow 5.New Day\n";
    cout<<"Enter the choice for modification: ";
    cin>>y;
    switch(y)
    {   case 5:cout<<"Enter new day:";
               cin>>day;
               break;
        case 1: cout<<"Enter the new value of High Temp: ";
                cin>>htmp;
                break;
        case 2: cout<<"Enter the new value of Low Temp: ";
                cin>>ltmp;
                break;
        case 3: cout<<"Enter the new value of Amount of Rain: ";
                cin>>aor;
                break;
        case 4: cout<<"Enter the new value of Amount of Snow: ";
                cin>>aos;
                break;
        default: cout<<"\nWRONG CHOICE\n";
    }
}

void weather:: del(int x)
{
    if(day==0)
    {
        cout<<"No Record for the day "<<x<<endl;
    }
    else
    {

    aor=0;
    aos=0;
    htmp=0;
    ltmp=0;

        cout<<"Record deleted for the day "<<x<<endl;
    }
}

int main()
{
    weather w[40];
    char ch;
    int c,x;
    do
    {

        cout<<"1.Accept\n2.Display all records\n3.Display specific record\n4.Modify\n5.Monthly report\n6.Delete\n7.Exit"<<endl;
        cout<<"Enter your choice\n";
        cin>>c
        switch(c)
        {
        case 1:cout<<"Enter the day:";
                cin>>x;
                w[x].accept(x);
                n++;
                break;
        case 2:
                   cout<<"Day  High Temp  Low Temp  Amount of Rain  Amount of Snow\n";
                    for(int i=1;i<n+1;i++)
                    {
                        w[i].display(i);
                    }

                break;
        case 3: cout<<"Enter the day of displaying record\n";
                cin>>x;
                cout<<"Day  High Temp  Low Temp  Amount of Rain  Amount of Snow\n";
                w[x].display(x);
                break;
        case 4: cout<<"Enter the day to modify the record\n";
                cin>>x;
                w[x].modify();
                break;
        case 5: for(int i=1;i<40;i++)
                {
                    monthlyreport(w[i],i);
                }
        case 6: cout<<"Enter the day for record deletion: ";
                cin>>x;
                w[x].del(x);
                break;
        case 7: return 0;
        default:cout<<"\nWRONG CHOICE\n";
        }

        cout<<"Do you wish to continue(y/n) :";
        cin>>ch;
        }while(ch=='Y'||ch=='y');
}
