#include<conio.h>
#include<math.h>
int main()
{
	int n,sum=0;
	printf("enter n value: ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		sum+=pow(i,3);
	}
	printf("%d",sum);
	return 0;
}