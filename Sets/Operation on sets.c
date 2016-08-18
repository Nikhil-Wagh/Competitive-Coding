#include<stdio.h>
int diff(int a[],int b[],int d[],int n, int m)
{
    int i,j,k=0,flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
                break;
        }
        if(j==m)
        {
            d[k]=a[i];
            k++;
        }
    }
    return k;
}

int Union(int a[],int b[],int d[],int n, int m)
{
    int i,j,k=0;
    for(i=0;i<n;i++)
    {
        d[k]=a[i];k++;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
                break;
        }
        if(j==n)
        {
            d[k]=b[i];
            k++;
        }
    }
    return k;
}
int main()
{
	int a[100]={0},b[100]={0},c[100],u[100],differ1[100],differ2[100],i,j,n,m,ch,temp,k,d1,d2;
	printf("Please enter the number of Elements in A\n");
	scanf("%d",&n);
	printf("Please enter the number of Elements in B\n");
	scanf("%d",&m);
	printf("Enter %d integers in set A\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter %d integers in set B\n",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
do{
	printf("Please enter your choice\n1.Union\n2.Intersection\n3.A-B\n4.B-A\n5.Symmetric Difference\n6.Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("Union of A and B\n");
                k=Union(a,b,u,n,m);
                for(i=0;i<k;i++)
                    printf("%d",u[i]);
                printf("\n\n");
				break;
		case 2:for(i=0;i<n;i++)
				{
					for(j=0;j<m;j++)
					{
						if(a[i]==b[j])
						{
							printf("%d ",a[i]);
							break;
						}
					}
				}
				printf("\n\n");
				break;
		case 3:d1=diff(a,b,differ1,n,m);
                for(i=0;i<d1;i++)
                    printf("%d ",differ1[i]);
				printf("\n\n");
				break;
		case 4:d2=diff(b,a,differ2,m,n);
                for(i=0;i<d2;i++)
                    printf("%d ",differ2[i]);
				printf("\n\n");
				break;
		case 5:d1=diff(a,b,differ1,n,m);
               d2=diff(b,a,differ2,m,n);
               k=Union(differ1,differ2,u,d1,d2);
                for(i=0;i<k;i++)
                    printf("%d ",u[k]);
				printf("\n\n");
				break;
	}
}while(ch!=6);
}
