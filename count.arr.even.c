#include<stdio.h>
int main()
{
	int n,i,c=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			c++;
		}
	}
	printf("count:%d",c);
}