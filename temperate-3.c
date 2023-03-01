#include<stdio.h>

int main()
{
	int i,n,cnt=0;

	printf("Enter number=");
	scanf("%d",&n);
	while(n>0)
	{
		cnt++;
		n=n/10;
	}

	printf("no of digit=%d",cnt);
	return 0;

}
