#include<conio.h>
int main()
{
	int n,sum=0;
	printf("enter n value:");
	scanf("%d",&n);
	for(int i=2;i<=n;i+=2)
	{
		printf("%d+",i);
		sum+=i;
	}
	printf("\b=%d",sum);
	return 0;
}
