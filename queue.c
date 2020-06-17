#include<stdio.h>
#include<stdlib.h>
#include<process.h>

int front=-1 ,rear=0,  queue[4] , value;

void insert()
{
	if(front==-1)
	{
		front=0;
		printf("enter value to insert");
		scanf("%d",&value);
		queue[rear]= value;
		rear++;	
	}
	
	else if (rear==5)
	{
		printf("queue is full");

	}
	
	else
	{
		scanf("%d",&value);
		queue[rear]=value;
		rear++;
	}
	
}


void delete()
{
	if(front ==-1)
	{
		printf("queue is empty ");
		
	}
	
	else
	{
		front++;
	}
}

void display()
{
	int i;
	for(i=front; i<rear; i++ )
	{
		printf("%d\n",queue[i]);
	}	
}


void main()
{
	int c;
	while(1)
	{
		printf("enter choice");
		scanf("%d",&c);
		switch(c)
		{
			case 1: 
				insert();
				break;
			
			case 2:
				delete();
				break;
			
			case 3:
				display();
				break;
			
			case 4:
				exit(0);
		}
	}
}
