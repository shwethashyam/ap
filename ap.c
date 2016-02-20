#include<stdio.h>

int main(void)
{
	int i,n,x,ch,d;
	printf("enter the starting number,no of terms,difference");
	scanf("%d%d%d",&x,&n,&d);
	printf("enter the choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("a.p is");
			for(i=0;i<n;i++)
			{
			printf("%d\n",x);
			x=x+d;
			}
			break;
		
		case 2:
			printf("g.p is");
			for(i=0;i<n;i++)
			{
				printf("%d\n",x);
				x=x*d;
			}
			break;
	}
return 0;
}

			
