#include<stdio.h>
#include<stdlib.h>
#include<process.h>

int front=-1 ,rear=0,  queue[4] , value;

void insert()
{
	if(front==-1)
	{
		front=rear=0;
		printf("enter value :");
		scanf("%d",&value);
		queue[rear]=value;			
	}
	
	else if ((rear+1)%4==front)
	{
		printf("\nqueue full");
	}
	
	else
	{
		rear=(rear+1)%4;
		printf("\nenter value :");
		scanf("%d",&value);
		queue[rear]=value;
	}
	

	
}


void delete()
{
	if(front ==-1)
	{
		printf("\nqueue is empty ");
	}

	else if(front==rear){
		queue[front]=0;
		front=rear=-1;
	}
	else
	{
		printf("\ndeleted value: %d",queue[front]);
		queue[front]=0;
		front=(front+1)%4;
	}
}

void display()
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("\n%d",queue[i]);
	}

}


void main()
{
	int c;
	while(1)
	{
		printf("\nenter choice");
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
