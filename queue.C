#include<stdio.h>
#define s 3
int q[3];
int f=-1,r=-1;
int enqueue(int x){
	if(r==s-1)
	printf("queue is full\n");
	else if(f==-1&&r==-1)
	{
		f=0;
		r=0;
		q[r]=x;
	}
	else
	{
		r=r+1;
		q[r]=x;
	}
}
int display(){
	if(f==-1)
	printf("queue is underflow\n");
	else
	{
		int i;
		for(i=f;i<=r;i++)
		{
		printf("%d\n",q[i]);
	}
	}
}
int dequeue(){
	if(f==-1){
		printf("queue is empty\n");
	}
	else
	{
		printf("deleted element is:%d\n",q[f]);
		f=f+1;
	}
}
int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
    enqueue(40);
	display();
	dequeue();
	display();
}
