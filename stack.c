#include<stdio.h>
#include<process.h>
#include<stdlib.h>


int st[5],top=-1;
void push();
void pop();
void display();

int main()
{
	int c;
	while(1) {
		printf("enter choice");
		scanf("%d",&c);
		switch (c){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);			
		}
	}
}

void push() 
{
	if(top==4){
		printf("full");
    }
	else {
		int val;
		scanf("%d",&val);
	
		top++;
		st[top]=val;
	}
}

void pop()
{
	if(top==-1){
		printf("empty");
	}
	else {
		printf("%d deleted",st[top]);
		top--;
		
	}
}


void display() {
	int i;
	for(i=top;i>=0;i--) {
	
		printf("%d",st[i]);
	}
}
