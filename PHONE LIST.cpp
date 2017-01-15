#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int flag;
struct trienode
{
	trienode *children[10];
	int isleaf;
};

trienode *getnode()
{
	trienode *n=new trienode;
	for(int i=0;i<10;i++)
	{
		n->children[i]=NULL;
	}
	n->isleaf=0;
	return n;
}

void insert(trienode *root,string s)
{
	int l=s.length();
	trienode *temp=root;
	for(int i=0;i<s.length();i++)
	{
		if(!temp->children[s[i]-'0'])
		{
			temp->children[s[i]-'0']=getnode();
		}
		temp=temp->children[s[i]-'0'];
		if(temp->isleaf)
		{
			flag=1;
		}
	}
	if(temp->isleaf==1)
	{
		flag=1;
	}
	temp->isleaf=1;
}
int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s[n+5];
		flag=0;
		trienode *root=getnode();
		for(i=0;i<n;i++)
		{
			cin>>s[i];
		}
		sort(s,s+n);
		for(i=0;i<n;i++)
		{
			insert(root,s[i]);
		}
		if(flag)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}
}
