#include<stdio.h>
int main()
{
	int i,j,x,a[100],n,m;
	printf("Enter the size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		m=i;
		for(j=i+1;j<n;j++)
		{
			if(a[m]>a[j])
				m=j;
		}
		x=a[i];
		a[i]=a[m];
		a[m]=x;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
