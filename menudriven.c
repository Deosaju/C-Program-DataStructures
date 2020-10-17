#include<stdio.h>

	void display(int *a,int *len)
	{
		int i;
		for(i=0;i<*len;i++)
			printf("%d ",a[i]);
	}
	void insert(int *a,int index,int x,int *len)
	{
		int i;
		for(i=*len;i>=index;i--)
		{
			a[i+1]=a[i];
	    }
	    a[index]=x;
	   *len+=1;
	}
	void delete(int *a,int index,int *len)
	{
		int i;
		for(i=index;i<*len;i++)
			a[i]=a[i+1];
		*len-=1;
	}
	void add(int *a,int index,int val)
	{
		a[index]+=val;
	}
	int main()
	{
		int a[]={2,10,8,9};
		int val,pos;
		int length=sizeof(a)/sizeof(int);
		printf("\nenter the element to be inserted:");
		scanf("%d",&val);
		printf("\nenter the position :");
		scanf("%d",&pos);
		insert(a,pos,val,&length);
		printf("\n after insertion:");
		display(a,&length);
		printf("\n enter position in , element to be deleted:");
		scanf("%d",&pos);
		delete(a,pos,&length);
		printf("\n after deletion:");
		display(a,&length);
		printf("\n enter the value to be added:");
		scanf("%d",&val);
		printf("\n enter position in , element to be added:");
		scanf("%d",&pos);
		add(a,pos,val);
		printf("\n after addition:");
		display(a,&length);
		return 0;
	}