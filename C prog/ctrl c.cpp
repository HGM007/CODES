/*
#include<stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10], n, i, j, k;

    printf("Enter the value of N (N <= 10): ");
    scanf("%d", & n);
    printf("Enter the elements of Matrix-A: \n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B: \n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", & b[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/





//Solution for 2nd descriptive ques (22nd)
/*
void bsort(int *arr , int size)
{
    int i , p , temp;
    for(p = 0; p < size ; p++)
    {
        for(i = 0; i < size - 1 - p; i++)
        {
            if(*(arr+i) < *(arr+i+1))
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+i+1);
                *(arr+i+1) = temp;
            }
        }
    }
}

void isort(int *arr, int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = *(arr + i);
		j = i - 1;
		while (j >= 0 && *(arr + j) > key)
		{
			*(arr + j + 1) = *(arr + j);
			j = j - 1;
		}
		*(arr + j + 1) = key;
	}
}

int main()
{
    int size , m , c;
    int *arr ;
    printf("Enter size of arr = ");
    scanf("%d",&size);
    arr = malloc(size*sizeof(int));
    for(m = 0; m < size; m++)
    {
        arr[m] = rand()%100;
    }
    printf("\nGenerated arr : ");
    for(m = 0; m < size; m++)
    {
        printf("%3d",*(arr+m));
    }
    isort(arr , size);
    printf("\nSorted arr : ");
    for(m = 0; m < size; m++)
    {
        printf("%3d",*(arr+m));
    }
    bsort(arr , size);
    printf("\nReversed arr : ");
    for(m = 0; m < size; m++)
    {
        printf("%3d",*(arr+m));
    }
}
*/

//Sorting each row of 2D arr 
/*
void isort(int arr[] , int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void merge(int arr[] , int st , int mid ,  int en)
{
    int i , j , k;
    int l1 = mid - st + 1;
    int l2 = en - mid;
    int arr1[l1] , arr2[l2];
    for(i = 0; i < l1; i++)
    {
        arr1[i] = arr[st + i];
    }
    for(j = 0; j < l2; j++)
    {
        arr2[j] = arr[mid + 1 + j];
    }
    i = 0, j = 0, k = st;
    while(i < l1 && j < l2)
    {
        if(arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i < l1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j < l2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}
void msort(int arr[] , int st , int en)
{
    if(st < en)
    {
        int mid = (st + en)/2;
        msort(arr , st , mid);
        msort(arr , mid + 1, en);
        merge(arr , st , mid , en);
    }
}

void bsort(int arr[] , int size)
{
    int i , p , temp;
    for(p = 0; p < size ; p++)
    {
        for(i = 0; i < size - 1 - p; i++)
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

void selecSort(int arr[], int n)
{
    int i, j, m;
    for (i = 0; i < n-1; i++)
    {
        m = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[m])
            m = j;
            if(m != i)
            {
                int temp = arr[m];
                arr[m] = arr[i];
                arr[i] = temp;
            }
    }
}

int main()
{
    int i , j;
    int tda[4][10];
    for(i = 0; i < 4; i++)
        for(j = 0; j < 10; j++)
            tda[i][j] = rand()%100;
    printf("Gen 2D arr : \n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 10; j++)
            printf("%4d",tda[i][j]);
        printf("\n");
    }
    int b[10] , m[10] , in[10] , s[10];
    for(i = 0; i < 4; i++)
    {
        for(j = 0;j < 10 ; j++)
        {
            if(i == 0)
            {
                b[j] = tda[i][j];
            }
            else if(i == 1)
            {
                m[j] = tda[i][j];
            }
            else if(i == 2)
            {
                in[j] = tda[i][j];
            }
            else if(i == 3)
            {
                s[j] = tda[i][j];
            }
        }
    }
    bsort(b , 10);
    msort(m , 0 , 10 - 1);
    isort(in , 10);
    selecSort(s , 10);
    for(i = 0; i < 4; i++)
    {
        for(j = 0;j < 10 ; j++)
        {
            if(i == 0)
            {
                tda[i][j] = b[j];
            }
            else if(i == 1)
            {
                tda[i][j] = m[j];
            }
            else if(i == 2)
            {
                tda[i][j] = in[j];
            }
            else if(i == 3)
            {
                tda[i][j] = s[j];
            }
        }
    }
    printf("Sorted 2D arr : \n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 10; j++)
            printf("%4d",tda[i][j]);
        printf("\n");
    }
}
*/
/*
//Solution for 1nd descriptive ques (22nd)

void bsort(int *arr , int size)
{
    int i , p , temp;
    for(p = 0; p < size ; p++)
    {
        for(i = 0; i < size - 1 - p; i++)
        {
            if(*(arr+i) < *(arr+i+1))
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+i+1);
                *(arr+i+1) = temp;
            }
        }
    }
}

void isort(int *arr, int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = *(arr + i);
		j = i - 1;
		while (j >= 0 && *(arr + j) > key)
		{
			*(arr + j + 1) = *(arr + j);
			j = j - 1;
		}
		*(arr + j + 1) = key;
	}
}

int main()
{
    int size , m , c;
    int *arr ;
    printf("Enter size of arr = ");
    scanf("%d",&size);
    arr = malloc(size*sizeof(int));
    for(m = 0; m < size; m++)
    {
        arr[m] = rand()%100;
    }
    printf("\nGenerated arr : ");
    for(m = 0; m < size; m++)
    {
        printf("%3d",*(arr+m));
    }
    isort(arr , size);
    printf("\nSorted arr : ");
    for(m = 0; m < size; m++)
    {
        printf("%3d",*(arr+m));
    }
    bsort(arr , size);
    printf("\nReversed arr : ");
    for(m = 0; m < size; m++)
    {
        printf("%3d",*(arr+m));
    }
}
*/

// Stack implementation in C

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int count = 0;

// Creating a stack
struct stack {
  int items[MAX];
  int top;
};
typedef struct stack st;

void createEmptyStack(st *s) {
  s->top = -1;
}

// Check if the stack is full
int isfull(st *s) {
  if (s->top == MAX - 1)
    return 1;
  else
    return 0;
}

// Check if the stack is empty
int isempty(st *s) {
  if (s->top == -1)
    return 1;
  else
    return 0;
}

// Add elements into stack
void push(st *s, int newitem) {
  if (isfull(s)) {
    printf("STACK FULL");
  } else {
    s->top++;
    s->items[s->top] = newitem;
  }
  count++;
}

// Remove element from stack
void pop(st *s) {
  if (isempty(s)) {
    printf("\n STACK EMPTY \n");
  } else {
    printf("Item popped= %d", s->items[s->top]);
    s->top--;
  }
  count--;
  printf("\n");
}

// Print elements of stack
void printStack(st *s) {
  printf("Stack: ");
  for (int i = 0; i < count; i++) {
    printf("%d ", s->items[i]);
  }
  printf("\n");
}

// for rev stack
void revprintStack(st *s) {
  printf("Stack: ");
  for (int i = 0; i < count; i--) {
    printf("%d ", s->items[i]);
  }
  printf("\n");
}
// Driver code
int main() {
  int ch;
  st *s = (st *)malloc(sizeof(st));

  createEmptyStack(s);

  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);

  printStack(s);

  pop(s);

  printf("\nAfter popping out\n");
  printStack(s);
  printf("\nAfter popping out rev stack\n");
  revprintStack(s);
}

// stack rev  by dyanamic 10-2-23

#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node *next;
};
 
void generate(struct node **);
void display(struct node *);
void stack_reverse(struct node **, struct node **);
void delete(struct node **);
 
int main()
{
    struct node *head = NULL;
 
    generate(&head);
    printf("\nThe sequence of contents in stack\n");
    display(head);
    printf("\nInversing the contents of the stack\n");
    if (head != NULL)
    {
        stack_reverse(&head, &(head->next));
    }
    printf("\nThe contents in stack after reversal\n");
    display(head);
    delete(&head);
 
    return 0;
}
 
void stack_reverse(struct node **head, struct node **head_next)
{
    struct node *temp;
 
    if (*head_next != NULL)
    {
         temp = (*head_next)->next;
        (*head_next)->next = (*head);
        *head = *head_next;
        *head_next = temp;
        stack_reverse(head, head_next);
    }
}
 
void display(struct node *head)
{
    if (head != NULL)
    {
        printf("%d  ", head->a);
        display(head->next);
    }
}
 
void generate(struct node **head)
{
    int num, i;
    struct node *temp;
 
    printf("Enter length of list: ");
    scanf("%d", &num);
    for (i = num; i > 0; i--)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = i;
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
    }
}
 
void delete(struct node **head)
{
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}


//stack revv  done

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
void reverse(struct stack *ptr) 
{
  int i = 0, j = ptr->top;
  int temp;
  
  while (i < j) {
    temp = ptr->arr[i];
    ptr->arr[i] = ptr->arr[j];
    ptr->arr[j] = temp;
    i++;
    j--;
  }
} 
int main()
{
    int n,val,i;
    printf("Enter size of stack:\n ");
    scanf("%d", &n);
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s->size = n;
    s->top = -1;
    s->arr = (int*)malloc(s->size*sizeof(int));
    printf("Stack initialized successfully\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter a value to push: ");
        scanf("%d", &val);
        push(s, val);
    }
   
    printf("original stack: ");
    for (i = 0; i <= s->top; i++) 
    {
        printf("%d ", s->arr[i]);
    }
    
    reverse(s);
    printf("\nreversed stack: ");
    for (i = 0; i <= s->top; i++) 
    {
        printf("%d ", s->arr[i]);
    }
    
    return 0;


}


// circ queue abhi

// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>


struct cqueue {
    int rear , front ;
    int *Q;
};
struct cqueue tag = {.rear = -1 , .front = -1};


int dequeue(int s)
{
    int elem;
    if(tag.front == -1){
        printf("\nQueue is empty");
        return -1; }
    else
    {
        elem = *(tag.Q + tag.front);
        if(tag.front == tag.rear)
            tag.front = tag.rear = -1;
        else{
            tag.front = (tag.front + 1) % s;
           }
    }
   // printf("\nDeleted elem : %d",elem);
    return elem;
}


void equeue(int elem , int s)
{
    if(tag.rear == s - 1){
        printf("\nQueue is full");
        return -1; }
    else{
        if(tag.front == -1) 
            tag.front = 0;
        tag.rear = (tag.rear + 1) % s;
        *(tag.Q + tag.rear) = elem;
       // printf("\nAdded elem : %d",elem);
        
    }
}

void display(int size)
{
    int i;
    printf("\nFront : %d",*(tag.Q + tag.front));
    printf("\nBetween elems : ");
    for(i = tag.front + 1 ; i < tag.rear;  i = (i + 1) % size)
        printf("%4d",*(tag.Q + i));
    printf("\nRear : %d",*(tag.Q + tag.rear));
}

int main() 
{
    int size , n1 , n2 , i;
    printf("Enter MAX size of Queue : ");
    scanf("%d",&size);
    tag.Q = malloc(size*sizeof(int));
    printf("\nEnter num of elems to be added : ");
    scanf("%d",&n1);
    for(i = 0; i < n1; i++)
        equeue(rand()%100 , size);
    printf("\n\nGenerated queue : ");
    display(size);
    printf("\n\nEnter num of elems to be deleted : ");
    scanf("%d",&n2);
    for(i = 0; i < n2; i++)
        dequeue( size);
    printf("\n\nQueue after deletion : ");
     display(size);
}
 
 
 // queue prac 6  
 #include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void display();
void enqueue(int);
void dequeue();

int main()
{
    int n, ch;
    do
    {
        printf("\n\nQueue Menu\n1. Add \n2. Remove\n3. Display\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number ");
                scanf("%d", &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
        }
    }while (ch != 0);
}

void enqueue(int item)
{
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;
    nptr->next = NULL;
    if (rear == NULL)
    {
        front = nptr;
        rear = nptr;
    }
    else
    {
        rear->next = nptr;
        rear = rear->next;
    }
}

void display()
{
    struct node *temp;
    temp = front;
    printf("\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void dequeue()
{
    if (front == NULL)
    {
        printf("\n\nqueue is empty \n");
    }
    else
    {
        struct node *temp;
        temp = front;
        front = front->next;
        printf("\n\n%d deleted", temp->data);
        free(temp);
    }
}
