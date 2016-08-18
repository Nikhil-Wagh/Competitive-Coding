#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class bookshop
{
private:
    int price,stalk,a1,t1,p1,total_price=0;
    char *author,*title,*publisher;
    static int i;
public:
    int us=0,s=0;
    bookshop()
    {
        price=0,stalk=0,a1=0,t1=0,p1=0,total_price=0;
        author=new char[a1+1];
        title=new char[t1+1];
        publisher=new char[p1+1];
    }
    void add(char *author1,char *title1,char *publisher1)
    {
        cout<<"\n1.title\t2.author\t3.publisher\t4.price\t5.available stalk\n";
        _flushall();
        cin>>title1>>author1>>publisher1>>price>>stalk;
        a1=strlen(author1);
        t1=strlen(title1);
        p1=strlen(publisher1);
        author=new char[a1+1];
        title=new char[t1+1];
        publisher=new char[p1+1];
        strcpy(author,author1);
        strcpy(title,title1);
        strcpy(publisher,publisher1);
        cout<<title<<"\t"<<author<<"\t"<<publisher<<"\t"<<(price*stalk)<<"\t"<<stalk;


    }
    void update(char *p)
    {
        //cout<<p<<"bookname\n";
        //cout<<title<<"title\n";
        if(strcmp(p,title)==0)
        {
            int c;
            cout<<"what to update?\n1.author\n2.publisher\n3.price\n4.available stalk\n";
            cout<<"enter choice";
            cin>>c;
            switch(c)
            {
            case 1:
                cin>>author;
                break;
            case 2:
                cin>>publisher;
                break;
            case 3:
                cin>>price;
                break;
            case 4:
                cin>>stalk;
                break;
            }
        }

    }
    void search1(char *p)
    {
        //cout<<title;
        //cout<<p;
        if(strcmp(title,p)==0)
            cout<<"\ntitle: "<<title<<"\nauthor: "<<author<<"\npublisher: "<<publisher<<"\nprice: "<<price<<"\navailable stalk: "<<stalk<<"\n";
    }
void purchase(char *p)
    {
        if(stalk>0)
        {
            if(strcmp(title,p)==0)
               {
                 stalk--;
                 s++;
                 cout<<"SUCCESFUL TRANSACTION : "<<s<<endl;


               }
        }
        else
            {
                cout<<"out of stalk";
                us++;
                cout<<"UNSUCCESFUL TRANSACTION :"<<us<<endl;
            }

    }
    void display()
    {
        cout<<title<<"\t"<<author<<"\t"<<publisher<<"\t\t"<<(price*stalk)<<"\t"<<stalk<<"\n";

    }
};
main()
{
    bookshop *obj[100];
    int ch,k,i=0,j=0,n=0;
    char au[100],ti[100],pu[100],book[100];
    cout<<"Inventory Of Book\n";
    do{
         cout<<"1.Add\n2.Update\n3.Search Book\n4.Purchase\n5.Display\n6.Exit\n";
         cout<<"Enter Choice\n";
         cin>>ch;
         switch(ch)
         {
         case 1:
            do
                {
                    obj[i]=new bookshop;
                    obj[i]->add(au,ti,pu);
                    i++;
                    n++;
                    cout<<"\n1 To Enter More 0 To Stop\n";
                    cin>>k;
                }
            while(k==1);
            break;
         case 2:
            cout<<"Enter The Book Name To Update: ";
            cin>>book;
            for(i=0;i<n;i++)
            {
                obj[i]->update(book);
            }
            break;
         case 3:
            cout<<"Enter The Book Name To Search: ";
            cin>>book;
            for(i=0;i<n;i++)
            {
                obj[i]->search1(book);
            }
            break;
         case 4:
            cout<<"Enter The Book Name To Purchase: ";
            cin>>book;
            for(i=0;i<n;i++)
            {
                obj[i]->purchase(book);
            }
         case 5:
             cout<<"\nTitle\tauthor\tPublisher\tPrice\tAvailable stalk\n";
            for(i=0;i<n;i++)
            {
                obj[i]->display();
            }
            break;
         case 6:
             exit(0);
            break;
         }
    }
    while(1);
    return 0;


}


