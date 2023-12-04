# include<stdio.h>
# include<stdlib.h>
struct Queue{
int front;
int rear;
int size;
int *Q;
}q;

void enqueue(struct Queue*q,int x);
int dequeue(struct Queue*q);
void display(struct Queue*q);

int main(){
int x;
printf("Enter the size:");
scanf("%d",&q.size);
q.Q=(int*)malloc(q.size*sizeof(int));
q.front=q.rear=-1;
while(q.size--){
scanf("%d",&x);
enqueue(&q,x);
}
printf("%d",dequeue(&q));{
display(&q);}
}
void enqueue(struct Queue*q,int x){
if(q->rear==q->size-1){
printf("Queue overflow");
}
else{
q->rear++;
q->Q[q->rear]=x;
}}

int dequeue(struct Queue *q){
int x=-1;
if(q->front==q->rear)
printf("Queue underflow");
else{
(q->front)++;
x=q->Q[q->front];
}
return x;
}

void display(struct Queue *q){
if(q->rear==q->front)
printf("Queue Underflow");
else{
while(q->front!=q->rear){
q->front++;
printf("%d",q->Q[q->front]);
}}
}
