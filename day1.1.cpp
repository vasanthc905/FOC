#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i;
	printf("enter the limits of a:");
	scanf("%d",&a);
	printf("/n");
	for(i=1;i<=a;i++)
	{
		if(i==a)
		    printf("%d",i);
		else
			printf("%d,",i);
		}
		getch();
		return 0;
		
			
	}

