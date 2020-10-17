#include<stdio.h>
int main()
{
	int N,i,x=0,j=0;
	printf("\nenter the sum of elements:");
	scanf("%d",&N);
	int seq[50]={0};
	seq[0]=0;
	seq[1]=1;
	for(i=2;i<N;i++)
	{
		if(seq[i-1]<N)
		{
			seq[i]=seq[i-1]+seq[i-2]+1;
		}
		else
			break;
	}
	x=i-1;
	int indx[10]={0};
	int tst=0,sum=0;
	for(i=x;i>=0;i--)
	{
		if(seq[i]<=N)
		{
			tst=0;
			tst=sum+seq[i];
			if(tst<=N)
			{
				sum=tst;
				indx[j++]=i;
			}	
		}
	}	
	printf("\n%d :",N);
	for(i=0;i<j;i++)
		printf("%d ",indx[i]);
	return 0;
}

		
