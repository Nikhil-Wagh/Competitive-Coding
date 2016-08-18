#include<iostream>
using namespace std;
class weather
{
  int htemp,ltemp,amt_rain,amt_snow;

public:
	int date;
     weather()
      {
        date=1;
        htemp=99;
        ltemp=-1;
        amt_rain=0;
        amt_snow=0;
      }
      void get_data(int x)
      {
           cin>>htemp>>ltemp>>amt_rain>>amt_snow;
           date=j;
      }
      void display_data()
      {
           cout<<date<<"\t"<<htemp<<"\t"<<ltemp<<"\t"<<amt_rain<<" \t\t"<<amt_snow;
      }
      void modify()
      {
          int k;
          cout<<"1.ht\n2.ltemp.\n3amt_rain\n4.amt_snow";
          cin>>k;
          switch(k)
          {
          case 1:
            cin>>htemp;
            break;
          case 2:
            cin>>ltemp;
            break;
          case 3:
            cin>>amt_rain;
            break;
          case 4:
            cin>>amt_snow;
            break;
          }
      }
     friend void avg(weather *s ,int,int );
     int getht(weather *s)
     {
         return s->htemp;
     }
     int getlt(weather *s)
     {
         return s->ltemp;
     }
     int getar(weather *s)
     {
         return s->amt_rain;
     }
     int getas(weather *s)
     {
         return s->amt_snow;
     }

};
void avg(weather *s,int x,int i)
{
    weather t;
    static float ht=0,lt=0,ar=0,as=0;
    if(i<=x)
        {
            ht+=s->getht(s);
            lt+=s->getlt(s);
            ar+=s->getar(s);
            as+=s->getas(s);
        }
    else
    {
        ht/=x,lt/=x,ar/=x,as/=x;
        cout<<"Average values are as follows\n";
        cout<<"High Temp :"<<ht<<endl;
        cout<<"Low Temp :"<<lt<<endl;
        cout<<"Amount of Rain :"<<ar<<endl;
        cout<<"Amount of Snow :"<<as<<endl;
    }
}
int main()
{
    int l,a,i,n=0,j,k;
    weather *obj[50]={0};
    weather temp;
    while(1)
    {
        cout<<"enter your choice"<<"\n"<<"1.Accept"<<"\n"<<"2.display record"<<"\n"<<"3.display specific record"<<"\n"<<"4.modify record"<<"\n"<<"5.delete record"<<"\n"<<"6.monthly report"<<"\n"<<"7.exit"<<"\n";
        cin>>a;
        switch(a)
        {
            case 1:
                    do
                    {
                        cout<<"enter the  day";
                        cin>>j;
                        if(obj[j]==0)
                        {
                            obj[j]=new weather;
                            cout<<"high temperature\tlow temperature\tamount of rain\tamount of snow\n";
                            obj[j]->get_data(j);
                            cout<<"do u want to continue type 1 to continue 0 to stop";
                            cin>>k;
                            n++;
                        }
                        else
                            cout<<"data already entered\n";
                    }
                    while (k==1);
                    break;
            case 2:
                    cout<<"date"<<"\t"<<"htemp"<<"\t"<<"ltemp"<<"\t"<<"amt_rain"<<"\t"<<"amt_snow"<<"\n";
                    for(i=1;i<=n;i++)
                    {
                        obj[i]->display_data();
                        cout<<"\n";
                    }
                    break;
            case 3:
                    cout<<"enter the specific date for details";
                    cin>>i;
                    obj[i]->display_data();
                    break;
            case 4:
                    cout<<"enter the day to get it modify";
                    cin>>i;
                    obj[i]->modify();
                    cout<<"date"<<"\t"<<"htemp"<<"\t"<<"ltemp"<<"\t"<<"amt_rain"<<"\t"<<"amt_snow"<<"\n";
                    for(i=1;i<=n;i++)
                    {
                        obj[i]->display_data();
                        cout<<"\n";
                    }
                    break;
            case 5:
                    int j;
                    cout<<"Enter the day to delete";
                    cin>>i;
                    if(obj[i]!=0)
                    {
                    for(j=1;j<=n;j++)
                    {
                        if(i==obj[j]->date)
                            {
                                for(l=j;l<=n;l++)
                                {
                                    obj[l]=obj[l+1];
                                }
                            delete obj[l];
                            }
                    }

                    for(i=1;i<=n-1;i++)
                        {
                        obj[i]->display_data();
                        cout<<"\n";
                        }
                    }
                    else
                        cout<<"please enter a valid day\n";
                    break;
            case 6:
                   cout<<"average";
                    for(i=1;i<=n+1;i++)
                    {
                        avg(obj[i],n,i);
                    }
                    break;

            case 7:
                   return 0;
                   break;
            }
        }
 return 0;

}
