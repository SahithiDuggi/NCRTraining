#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int a[10], n,sum,s=0,i, j,k;
	printf("enter no.of elements");
	scanf("%d",&n);
	printf("enter elements");
	for (i = 0; i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter sum");
	scanf("%d", &sum);
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			s = s + a[j];
			if (s == sum)
			{
				break;
			}
		}if (s == sum)
		{
			printf("sum found between indexes %d %d", i, j);
			break;
		}
		else 
			s = 0;
	}
	if (s != sum)
	{
		printf("seq not found");
	}
	scanf("%d",&k);
	getchar();
}