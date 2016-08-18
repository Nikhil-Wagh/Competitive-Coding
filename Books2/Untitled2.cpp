#include<iostream>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class book{
	float price;
	int stock;
	//static int total=0;
	char *ti,*pu;
	public:
		book()
	{
		cout<<"Please enter the following details"<<endl;
		cout<<"Title : ";//Init Title
		char *s;
		s = new char[30];
			//gets(s);
			cin>>s;
	//		cout<<s<<endl;
		ti = new char[strlen(s)+1];
		strcpy(ti,s);
		delete s;
		cout<<endl;
		cout<<"Publisher : ";//Init Publisher
		s = new char[30];
			cin>>s;
		pu = new char[strlen(s)+1];
		strcpy(pu,s);
		cout<<endl;
		do{
		cout<<"Price : ";//Init Price
			cin>>price;
		}while(price<0);
		cout<<endl;
		cout<<"Stock : ";//Init Stock
			cin>>stock;
		cout<<endl;
	}
	void display(){
		cout<<ti<<"\t"<<pu<<"\t"<<price<<"\t"<<stock<<endl;
	}
	int modify(char *nm){
		int c;
		char s[100];
		if(strcmp(ti,nm)==0)
		{
			cout<<"Enter the Data you wish to Modify"<<endl;
			cout<<"1. Change the Title"<<endl;
			cout<<"2. Change Publisher Name"<<endl;
			cout<<"3. Change the Price"<<endl;
			cout<<"4. Change Available Stock"<<endl;
			cin>>c;
			switch(c){
				case 1:
					cout<<"Enter new Title"<<endl;
					cin>>s;
					delete ti;
					ti = new char[strlen(s)+1];
					strcpy(ti,s);
					cout<<"Record successfully updated"<<endl;
					return 1;
				case 2:
					cout<<"Enter new Publisher Name"<<endl;
					cin>>s;
					delete pu;
					pu = new char[strlen(s)+1];
					strcpy(pu,s);
					cout<<"Record successfully updated"<<endl;
					return 1;
				case 3:
				    do
					{
					    cout<<"Enter new Price"<<endl;
                        cin>>price;
					}while(price<0);
					cout<<"Record successfully updated"<<endl;
					return 1;
				case 4:
					cout<<"Enter new Available Stock"<<endl;
					int temp;
					cin>>temp;
					if(temp<1)
                    {
                        cout<<"Cannot update stock to have '0' value"<<endl;
                        return 1;
                    }
					cout<<"Record successfully updated"<<endl;
					return 1;
			}
		}
		return 0;
	}
	int chkStock()
	{
		if(stock < 1)
			return 1;
		return 0;
	}
	int chkTitle(char *nm)
	{
		if(strcmp(nm,ti)==0)
			return 1;
		return 0;
	}
	int chkTitle(book *b)
	{
	    if((strcmp(ti,b -> ti)==0)&&(strcmp(pu,b -> pu)==0))
        {
            cout<<"Record already Exists"<<endl;
            delete b;
            return 1;
        }
        return 0;
	}
	int Delete(char *nm)
	{
		if(strcmp(nm,ti)==0)
		{
			return 1;
		}
		return 0;
	}
	int sell()
	{
		stock--;
		if(stock==0)
		{
			cout<<"No stock of the Book : "<<ti<<" is available now."<<endl;
			return 1;
		}
		return 0;
	}

};

int main(){
	book *b[10];
	int c,ch,chcg,sell = 0;//Choices
	int i = 0,j = 0;
	char name[100];
	int fnd = 0,solderr = 0;//Flags
start:	cout<<"Press 1 to Update Database of Books"<<endl;
	cout<<"Press 2 to Sell a Book"<<endl;
	cout<<"Press 3 to see Total Stock"<<endl;
	cin>>c;
	if(c==1)
	do{
		cout<<"Press 1 to Add records"<<endl;
		cout<<"Press 2 to display all records"<<endl;
		cout<<"Press 3 to Modify a record"<<endl;
		cout<<"Press 4 to Delete a record"<<endl;
		cout<<"Press 5 to Main Menu"<<endl;
		cout<<"Press 6 to Exit"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				b[i] = new book;
				if(b[i] -> chkStock())
				{
					cout<<"Cannot add record"<<endl;
					cout<<"Need at least 1 Book in the stock"<<endl;
					delete b[i];
					break;
				}
				for(j=0;j<i;j++)
                {
                    if(b[j] -> chkTitle(b[i]))
                    {
                        i--;break;
                    }
                }
				i++;
				break;
			case 2:
			    if(i!=0)
                {
                    cout<<"Title Publisher Price Ava_Stock"<<endl;
                    j=0;
                    while(i!=j)
                    {
                        b[j] -> display();
                        j++;
                    }
			    }
				else
                    cout<<"No Record Found"<<endl;
				break;
			case 3:
			    if(i!=0)
				{
				    cout<<"Enter the Name of the Book whose data you wish to Modify"<<endl;
					cin>>name;
					for(j=0;j<i;j++)
					{
						if(b[j] -> modify(name))
						{
							fnd = 1;
							break;
						}
					}
					if(fnd == 0)
					{
						cout<<"No Record Found"<<endl;
					}
				}
				else
                {
                    cout<<"Please enter some Records first."<<endl;
                }
                fnd = 0;
                break;
			case 4:
			    if(i!=0)
                {
                    cout<<"Enter the name of the Book which you wish to remove from the Database"<<endl;
					cin>>name;
					for(j=0;j<i;j++)
					{
						if(b[j] -> Delete(name))
						{
							delete b[j];
							fnd = 1;
							cout<<"Record successfully deleted."<<endl;
						}
						b[j]=b[j+1];
					}
					i--;
					if(fnd == 0)
					{
						cout<<"No Record Found"<<endl;
					}
                }
                else
                    cout<<"Please enter some Records first"<<endl;
					fnd = 0;
					break;
			case 5:
			    goto start;
				break;
            case 6:
                cout<<"Thank You!"<<endl;
                return 0;
                break;
			default:
				cout<<"Not a Valid Request."<<endl;
		}
	}while(ch!=6);
	else if(c == 2)
	{
		if(i!=0)
        {
            cout<<"Title Publisher Price Ava_Stock"<<endl;
            j=0;
            while(i!=j)
            {
                b[j] -> display();
                j++;
            }
        }
        else
            {
                cout<<"No Record Found"<<endl;
                goto start;
            }
        cout<<"Enter the name of the Book"<<endl;
        cin>>name;
        for(j=0;j<i;j++)
        {
        	if(b[j] -> chkTitle(name)&&(solderr == 0))
        	{
        		cout<<"Are sure sell the Book with Title: "<<name<<endl;
        		cout<<"Press 1 to sell."<<endl;
        		cin>>sell;
        		if(sell == 1)
        		{
        			if(b[j] -> sell())
        			{
        				solderr = 1;
        				i--;
        				break;
        			}
        			else
        				{
        					cout<<"Book sold successfully."<<endl;
        					break;
        				}
        		}
        	}
        	if(solderr)
        	{
        		b[j] -> Delete(name);
        		delete b[j];
        		b[j]=b[j+1];
        	}
        }
        goto start;
	}
	else if ( c == 3 )
    {
    	
    }
	else if( c == 4)
    {
        cout<<"Not a valid Request!"<<endl;
        goto start;
    }
}

