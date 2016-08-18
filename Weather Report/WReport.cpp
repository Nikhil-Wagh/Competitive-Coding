#include<iostream>
using namespace std;
class wheather{
    int day,hiTemp,loTemp,amntRain,amntSnow;
    public:
        wheather()
        {
            day=-1,hiTemp=0,loTemp=0,amntRain=0,amntSnow=0;
        }
    int input(int b)
    {
        if(day==b)
        {
            cout<<"DATA ALREADY PRESENT.\n"<<endl;
            return 0;
        }
        day=b;
        cout<<"Enter High temperature, low temperature, amount of rain, amount of snow : ";
        cin>>hiTemp>>loTemp>>amntRain>>amntSnow;
        return 1;
    }
    int display(int c,int d)
    {
        if(day==-1&&d==1)
        {
            cout<<"NO DATA Found for day "<<c<<endl;
            return 0;
        }
        if(d==1)
        {
            cout<<"Day highTemp lowTemp amountRain amountSnow\n";
        }
        if(day>0)
        {
            cout<<day;
            cout<<"\t"<<hiTemp<<"\t"<<loTemp<<"\t"<<amntRain<<"\t"<<amntSnow<<"\n";
        }
        if(day==0)
        {
            cout<<c;
            cout<<"\t"<<0<<"\t"<<0<<"\t"<<0<<"\t"<<0<<"\n";
        }
    }
    void modify(int z,int p,wheather a[])
    {
        if(z!=day)
        {
            cout<<"Please enter VALID INPUTS";
            return ;
        }
        if(p==1)
        {
            cout<<"Enter new Hight temp:";
            cin>>hiTemp;
        }
        if(p==2)
        {
            cout<<"Enter new Low temp:";
            cin>>loTemp;
        }
        if(p==3)
        {
            cout<<"Enter new Amount Rain:";
            cin>>amntRain;
        }
        if(p==4)
        {
            cout<<"Enter new Amount snow:";
            cin>>amntSnow;
        }
        if(p==5)
        {
            cout<<"Change the Date:";
            int t;
            cin>>t;
            a[t].day=t;
            a[t].hiTemp=a[z].hiTemp;
            a[t].loTemp=a[z].loTemp;
            a[t].amntRain=a[z].amntRain;
            a[t].amntSnow=a[z].amntSnow;
            a[z].day=0;
        }
    }
    void del(int z)
    {
        if(z==day)
            day=0;
        else
            cout<<"Please enter VALID INPUTS\n";
    }
    int checkDate(int z)
    {
        if(z==day)
            return 1;
        return 0;
    }
    friend void average(wheather,int);
};

void average(wheather i ,int j)
{
    static double h=0,l=0,ar=0,as=0,num=0;
	if(i.day>0)
        num++,h+=i.hiTemp,l+=i.loTemp,ar+=i.amntRain,as+=i.amntSnow;
    if(j==31)
        {
            cout<<"Average High Temp: "<<h/num<<endl<<"Average low Temp: "<<l/num<<endl<<"Average Rain fall: "<<ar/num<<endl<<"Average snow fall: "<<as/num<<endl;
            h=0;l=0;ar=0;as=0;num=0;
        }
}
int main()
{
	int n,ch;
	wheather a[32];
	while(1)
	{
	cout<<"\n\nEnter Your Choice:\n1.Input Data\n2.Display all Data\n3.Display Data of day n\n4.Modify data\n5.Monthly Report\n6.Delete\n7.Exit\n\n";
		cin>>ch;
	switch(ch)
	{
		case 1:cout<<"Enter date:";
			cin>>n;
			while(n>31||n<1)
			{
				cout<<"Not a valid date!!!"<<endl<<"Enter new date:";
				cin>>n;
			}
			a[n].input(n);
			break;
		case 2:
            cout<<"Day highTemp lowTemp amountRain amountSnow\n";
            for(int i=0;i<32;i++)
            {
                a[i].display(i,2);
            }
            break;
		case 3:cout<<"Enter date:";
			int z;
			cin>>z;
			while(n>31||n<1)
			{
				cout<<"Not a valid date!!!"<<endl<<"Enter new date:";
				cin>>n;
			}
			a[z].display(z,1);
			break;
		case 4:cout<<"Enter the date:";
			cin>>z;
			while(n>31||n<1)
			{
				cout<<"Not a valid date!!!"<<endl<<"Enter new date:";
				cin>>n;
			}
			if(a[z].checkDate(z))
			{
			    cout<<"Enter the data to be modify:\n1.HighTemp\n2.LowTemp\n3.AmountRain\n4.AmountSnow\n5.Change the date\n";
                int p;
                cin>>p;
                a[z].modify(z,p,a);
			}
			else
                cout<<"Please enter VALID INPUTS\n";
			break;
		case 5: for(int i=1;i<32;i++)
				{
					average(a[i],i);
				}
			break;
		case 6:cout<<"Enter date:";
			cin>>z;
			while(n>31||n<1)
			{
				cout<<"Not a valid date!!!"<<endl<<"Enter new date:";
				cin>>n;
			}
			a[z].del(z);
			break;
		case 7:
		    cout<<"Thank You!!!"<<endl;
			return 0;
	}
		cout<<"Enter new choice"<<endl;

	}
}

