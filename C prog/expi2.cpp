#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	FILE*fo;
	fo=fopen("ANew_selection_sort.txt","a");
	int *arr,n,i,size,small,temp,j;
	clock_t starttime,endtime;
	double totaltime;
	printf("etr size of arr: ");
	scanf("%d",&n);
	fprintf(fo,"\n%d",n);
	printf("etr range: ");
	scanf("%d",&size);
	//range
	arr=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%size;
	}
	for(i=0;i<n;i++)
	{
		printf("%5d",arr[i]);
	}
	starttime=clock();
	for(i=0;i<n-1;i++)
	{
		small=i;
		for(j=i+1;j<n;j++)
		if(arr[j]<arr[small])
			small=j;
		int temp=arr[small];
		arr[small]=arr[i];
		arr[i]=temp;
	}
	printf("\nsorted\n");
	for(i=0;i<n;i++)
		printf("%5d",arr[i]);
	endtime=clock();
	totaltime=((double)(endtime-starttime))/CLOCKS_PER_SEC;
	fprintf(fo,"\n time taken is %f ",totaltime);
}

// with time complexxxxxxx

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void p_a(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);
    printf("\n");
}
void swap(int *sp,int *ip)
{
    int t= *sp;
    *sp= *ip;
    *ip=t;
}
void ra_so(int a[],int n)
{
    clock_t starttime,endtime;
	double totaltime;
	starttime=clock();
    int p,m,i,x=0,c=0;
    m=a[0];
    for(i=0;i<n-1;i++)
        if(a[i+1]>m)
            m=a[i+1];
        else
            continue;
    for(;m>0;m=m/10)
        x++;
    printf("\nThe Original Array:");
    p_a(a,n);
    for(int ex=1;c<x;c++,ex=ex*10)
    {
        for(p=0;p<n;p++)
            for(i=0;i<n-p-1;i++)
                if((a[i]/ex)%10>(a[i+1]/ex)%10)
                    swap(&a[i],&a[i+1]);
        printf("%d SWAP:",c+1);
        p_a(a,n);
    }
    printf("\nSorted Array : ");
    p_a(a,n);
    endtime=clock();
	totaltime=((double)(endtime-starttime))/CLOCKS_PER_SEC;
	printf("\n time taken is %f ",totaltime);
}
int main()
{
//     FILE*fo;
// 	fo=fopen("Radix_sort.txt","w");
    int *a;
    int r,n,i;
    printf("Enter the no.of elements : ");
    scanf("%d",&n);
    printf("etr range\n");
    scanf("%d",&r);
    a=(int *)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
    {
        a[i]=rand()%r;
    }
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
    ra_so(a,n);
}
*/

// bubble sort 
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,j,temp,n,r;
    double D;
    clock_t st,et;
    printf("etr size of arr n: ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("etr range :");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%r;
    }
    for(i=0;i<n;i++)
    {
        printf("%3d",arr[i]);
    }
    printf("\nsorted arr :\n");
    st=clock();
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
        printf("%3d",arr[j]);
        et=clock();
    }
    D=((double)(et-st))/CLOCKS_PER_SEC;
    printf("\ntime taken is %.5f",D);
}
*/

// merge sort


/*
// stack  prac  5

#include <stdio.h>
#include <stdlib.h>
int count=0;
struct stack {
  int arr[];
  int top;
};
typedef struct stack st;
void createEmptyStack(st *s) {
  s->top = -1;
}
int isfull(st *s) {
  if (s->top == max - 1)
    return 1;
  else
    return 0;
}
int empty(st *s)
{
	if (s->top == -1)
    return 1;
  else
    return 0;
}
void push(st *s, int newitem) {
  if (isfull(s)) {
    printf("STACK FULL");
  } else {
    s->top++;
    s->items[s->top] = newitem;
  }
  count++;
}
*/


//3-2-23
#include <stdio.h>
#include <stdlib.h>

struct stack {
  int *arr;
  int top;
  int size;
};


int isempty(struct stack *ptr)
{
    if(ptr->top==-1)    
        return 1;
    else
        return 0;
}

int isfull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
        return 1;
    else
        return 0;
}

void push(struct stack *ptr,int val)
{
    if(isfull(ptr))
        printf("overflow\n");
    else
        ptr->top++;
        ptr->arr[ptr->top]=val;
}

void pop(struct stack *ptr)
{
    if(isempty(ptr))
    {
        printf("underflow\n");
        return 0;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        return val;
    }
}
void printStack(){
 if(!isempty()){
     int temp = pop();
     printStack();
     printf(" %d ", temp);
     push( temp);
    }
}

void insertAtBottom(int item) {
    if (isempty()) {
        push(item);
    } else {
  
        /* Store the top most element of stack in top variable and 
        recursively call insertAtBottom for rest of the stack */
        int top = pop();
        insertAtBottom(item);
  
        /* Once the item is inserted at the bottom, push the 
        top element back to stack */
        push(top);
    }
}

void reverse() {
    if (!isempty()) {
        /* keep on popping top element of stack in 
        every recursive call till stack is empty  */
        int top = pop();
        reverse();
  
        /* Now, instead of inserting element back on top 
        of stack, we will insert it at the bottom of stack */
        insertAtBottom(top);
    }
}

int main()
{
    // int n,i,j,r;
    struct stack *s;
    s->size=10;
    s->top-1;
    // printf("etr size\n");
    // scanf("%d",&n);
    // printf("etr range\n");
    // scanf("%d",&r);
    s->arr=(int*)malloc(s->size*sizeof(int));
    
    // for(i=0;i<n;i++)
    //     s->arr[i]=rand()%r;
    // for(i=0;i<n;i++)
    //     printf("%3d",s->arr[i]);
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    
    printf("Original Stack\n");
    printStack();
    reverse();
    printf("\nReversed Stack\n");
    printStack();
    return 0;
}
        
}


// ctrl 
#include <stdio.h>
#include<stdlib.h>
// #define MAXSIZE 7
// #define TRUE 1
// #define FALSE 0 
 
// Structure defining Stack data structure
struct Stack {
    int top;
    int *arr;
    int size;
} st;
 
/*
Initializes the top index to -1
*/
void initialize() {
 st->top = -1;
}
 
/*
 Checks if Stack is Full or not 
*/
int isFull() {   
    if(st->top >= st->size-1)
        return 1;
    else
        return 0;
}
 
/*
 Checks if Stack is Empty or not
*/
int isEmpty() {
 if(st->top == -1)
     return 1;
 else
     return 0;
}
 
/*
 Adds an element to stack and then increment top index 
*/
void push(int num) {
    if (isFull())
        printf("Stack is Full...\n");
    else {
        st->arr[st->top + 1] = num;
        st->top++;
    }
}
 
/*
 Removes top element from stack and decrement top index
*/
int pop() {
    if (isEmpty())
        printf("Stack is Empty...\n");
    else {
     st->top = st->top - 1;
        return st->arr[st->top+1];
    }
}
 
/*
 Prints elements of stack using recursion
*/
void printStack(){
 if(!isEmpty()){
     int temp = pop();
     printStack();
     printf(" %d ", temp);
     push( temp);
    }
}
void insertAtBottom(int item) {
    if (isEmpty()) {
        push(item);
    } else {
  
        /* Store the top most element of stack in top variable and 
        recursively call insertAtBottom for rest of the stack */
        int top = pop();
        insertAtBottom(item);
  
        /* Once the item is inserted at the bottom, push the 
        top element back to stack */
        push(top);
    }
}
 
void reverse() {
    if (isEmpty()) {
        /* keep on popping top element of stack in 
        every recursive call till stack is empty  */
        int top = pop();
        reverse();
  
        /* Now, instead of inserting element back on top 
        of stack, we will insert it at the bottom of stack */
        insertAtBottom(top);
    }
}
/*
Returns the number of elements in Stack
*/
int getSize(){
 return st->top+1;
}
 
int main() {
    int n;
 /* Initializing top index of stack */
    initialize(st);
    st->size=n;
    printf("etr size\n");
    st->arr=(int*)malloc(n*sizeof(int));
    /* Adding elements in stack */
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("Original Stack\n");
    printStack();
    reverse();
    printf("\nReversed Stack\n");
    printStack();
    return 0;
}




/// stack  dynamic  9-2-23

#include <stdio.h>
#include <stdlib.h>

struct stack {
  int *arr;
  int top;
  int size;
};

int isempty(struct stack *ptr)
{
    if(ptr->top==-1)    
        return 1;
    else
        return 0;
}

int isfull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
        return 1;
    else
        return 0;
}
void push(struct stack* ptr, int val){
    if(isfull(ptr)){
        printf(" Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
int pop(struct stack* ptr){
    if(isempty(ptr)){
        printf(" Underflow\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    // int n;
    // printf("etr n\n");
    // scanf("%d",&n);
    // struct stack *s;
    // s->size=n;
    s->size=100;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    printf("done");
    
}


/// queue attempt prac 6
// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct que
{
    int *arr;
    int size;
    int r;
    int f;
};

int isfull(struct que *q)
{
    if(q->r==q->size-1)
        return 1;
    return 0;
}
int isemp(struct que *q)
{
    if(q->r==q->f)
        return 1;
    return 0;
}
void enque(struct que *q,int val)
{
    if(isfull(q))
        printf("full\n");
    else
        q->r++;
        q->arr[q->r]=val;
       
}
void deque(struct que *q)
{
    int a=-1;
    if(isemp(q))
        printf("empty\n");
    else
        q->f++;
        a=q->arr[q->f];
    
    return a;
}
int main()
{
    int i,n;
    struct que *q;
    printf("etr size n: ");
    scanf("%d",&n);
    q->size=n;
    q->f=q->r=0;
    q->arr=(int*)malloc(q->size*sizeof(int));
    printf("etr elem in queue\n");
    for(i=0;i<n;i++)
    {
        enque(q,rand()%100);
    }
    for(i=0;i<q->f;i++)
    {
        printf("%3d",q->arr[i]);
    }
    //  printf("%d index elem is :%d\n",i,val);
}












