#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp;
	printf("enter the number of element of given array :");
	scanf("%d",&n);
	printf("enter the element :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		    }
		}
	}
	printf("\n sorted array :\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	return 0;
}
