#include<stdio.h>
#define MAX 10

void push(int val);
int pop();
void display();

int main(){
	char exp[MAX] ;
	scanf("%s",&exp);
	int i,top;
	int op1,op2;
	int sum,diff,mul,div;
	for(i=0;exp[i];i++){
		
		top=exp[i];
		if(top=='+')
		{
			printf("+\n");
			op1=pop();
			op2=pop();
			sum=op1+op2;
			printf("%d",sum);
			push(sum);
		}
		
		else if(top=='-')
		{
			printf("-\n");
			op1=pop();
			op2=pop();
			diff=op2-op1;
			printf("%d",diff);
			push(diff);
			
		}
		
		else if(top=='*')
		{
			printf("*\n");
			op1=pop();
			op2=pop();
			mul=op1*op2;
			printf("%d",mul);
			push(mul);
		}
		
		else if(top=='/')
		{
			printf("/\n");
			op1=pop();
			op2=pop();
			div=op2/op1;
			printf("%d",div);
			push(div);
		}

		else {
			push(top-'0');
		}
		
	}
	display();
	
	
}


int t=-1,stack[MAX],p;

void push(int val)
{
	t++;
	printf("push=%d\n",val);
	stack[t]=val;
	
}

int pop()
{
	p=stack[t];
	printf("pop = %d",p);
	t--;
	return p;
}

void display()
{
	printf("%d",stack[t]);
}
