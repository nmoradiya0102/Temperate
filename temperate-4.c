#include<stdio.h>

int main()
{
	int n,ld,fd,sum=0;
	
	printf("Enter number=");
	scanf("%d",&n);

	ld=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	sum=fd+ld;

	printf("sum of frist and last digit=%d",sum);
	return 0;
	
}
