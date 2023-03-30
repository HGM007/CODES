#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*

//menu driven prog to perform add and multi of array  

int main()
{
	int r,c;
	printf("etr row and colm : ");
	scanf("%d %d",&r,&c);
	
	int i,j,k;
	int arr1[r][c],arr2[r][c],arr3[r][c];
	int mul[i][j];
	printf("etr elem : ");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("etr elem 2: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	int exp;
	printf("select the expression\n");
	printf("1:add   2:multi  3:sub  ");
	scanf("%d",&exp);
	
	switch(exp)
	{
		case 1:
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					arr3[i][j]=arr1[i][j]+arr2[i][j];
				}
			}
			for(i=0;i<r;i++)
			{
				printf("\n");
				for(j=0;j<c;j++)
				{
					printf("%2d",arr3[i][j]);
				}
			}
	
			break;
			
		case 2:
			for(i=0;i<r;i++)    
			{    
				for(j=0;j<c;j++)    
				{    
					mul[i][j]=0;    
				for(k=0;k<c;k++)    
				{    
					mul[i][j]+=arr1[i][k]*arr2[k][j];    
				}    
				}    
			}    
    
			for(i=0;i<r;i++)    
			{    
				for(j=0;j<c;j++)    
				{    
					printf("%d\t",mul[i][j]);    
				}    
				printf("\n");    
			}    
			break;
		
		case 3:
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					arr3[i][j]=arr1[i][j]-arr2[i][j];
				}
			}
			for(i=0;i<r;i++)
			{
				printf("\n");
				for(j=0;j<c;j++)
				{
					printf("%2d",arr3[i][j]);
				}
			}
	
			break;
		
		default:
			printf("n/a");
	}
	return 0;
}
*/

// prac 2
// 26-11-22

//using structure perform total distance and differnce b/w time period

/*
struct add_dist
{
	int feet;
	int inch;
}d1,d2,add;
int main()
{
	int i,j;
	printf("etr measurement in feet and inches\n");
	scanf("%d %d",&d1.feet,&d1.inch);
	printf("%d feet and %d inch\n",d1.feet,d1.inch);
	
	printf("etr measurement 2 in feet and inches\n");
	scanf("%d %d",&d2.feet,&d2.inch);
	printf("%d feet and %d inch\n",d2.feet,d2.inch);
	
	add.feet=d1.feet+d2.feet;
	add.inch=d2.inch+d2.inch;
	
	while (add.inch>=12)
		add.inch=add.inch-12;
		++add.feet;
		
	printf("The total distance is %d feet and %d inches = %d\'%d",add.feet,add.inch,add.feet,add.inch);
	
	return 0;
}
*/


//calc diff b/w two time period
/*
struct Tp
{
	int h;
	int m;
	int s;
}d1,d2,d3;
int main()
{
	printf("etr time 1\n");
	scanf("%d%d%d",&d1.h,&d1.m,&d1.s);
	
	printf("etr time 2\n");
	scanf("%d%d%d",&d2.h,&d2.m,&d2.s);
	
//	d3.h=d1.h-d2.h;
//	d3.m=d1.m-d2.m;
//	d3.s=d1.s-d2.s;
	
	
	if(d1.m>d2.m)
	{
	
		d2.m+=60;
		--d2.h; 
	}
	if(d1.s>d2.s)
	{
		d2.s+=60;
		--d2.m;
	}
	d3.h=d2.h-d1.h;
	d3.m=d2.m-d1.m;
	d3.s=d2.s-d1.s;
	
	printf("Difference in TP is %d:%d:%d",d3.h,d3.m,d3.s);
	return 0;
}

*/

// perform menu driven prog for addn and multi of array by memory allocation   malloc;


// refernce

/*
int main(){
int mat1, **mat2,**res,i,j,r1,c1,r2,c2;

printf("\nEnter the Order of the First matrix...\n");
scanf("%d %d",&r1,&c1);
 printf("\nEnter the Order of the Second matrix...\n");
scanf("%d %d",&r2,&c2);

mat1= (int) malloc(r1*sizeof(int*));

for(i=0;i<c1;i++)
    mat1[i]=(int*)malloc(c1*sizeof(int));

mat2= (int**) malloc(r2*sizeof(int*));

for(i=0;i<c2;i++)
    mat2[i]=(int*)malloc(c2*sizeof(int));

res=(int**)calloc(r1,sizeof(int*));

for(i=0;i<c2;i++)
    res[i]=(int*)calloc(c2,sizeof(int));

//Input Matrix1
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&mat1[i][j]);
//Input Matrix2
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&mat2[i][j]);

//Printing Input Matrix 1 and 2

printf("\n Entered Matrix 1: \n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++)
        printf("%d ",mat1[i][j]);
    printf("\n");
}

printf("\n Entered Matrix 2: \n");
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++)
        printf("%d ",mat2[i][j]);
    printf("\n");
}
*/



/*
//  matrix add and multi by malloc 

int main()
{
	int arr1,**arr2,**res,i,j,r1,c1,r2,c2;
	
	printf("etr arr1 r&c :\n");
	scanf("%d %d",&r1,&c1);
	
	printf("etr arr2 r&c :\n");
	scanf("%d %d",&r2,&c2);
	
	arr1=(int)malloc(r1*sizeof(int*));
	for(i=0;i<c1;i++)
		arr1[i]=(int*)malloc(c1*sizeof(int));
		
	arr2=(int**)malloc(r2*sizeof(int*));
	for(i=0;i<c2;i++)
		arr2[i]=(int*)malloc(c2*sizeof(int));
		
	res=(int**)calloc(r1,sizeof(int));
	for(i=0;i<c2;i++)
		res[i]=(int*)calloc(c2,sizeof(int));
		
	// for input values
	printf("etr value of arr1 :\n");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
			scanf("%d ",&arr1[i][j]);
			
	printf("etr value of arr2 : \n");
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
			scanf("%d ",&arr2[i][j]);
			
	printf("so arr1 is :\n");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		{
			printf("%d"arr1[i][j]);
		}
	}
	printf("so arr2 is :\n");
	for(i=0;i<r2;i++)
	{
		printf("\n");
		for(j=0;j<c2;j++)
		{
			printf("%d"arr2[i][j]);
		}
	}
	
	return 0;
}

*/

//prac 3
//7-12-22
// wap menu driven prog to search key from array using index search and also find recurrience.
// malloc use

/*
// mistake
int main()
{
	int *arr,i,j,key,n,count=0;
	printf("etr no. n\n");
	scanf("%d",&n);
	
	arr=(int*)malloc(n*sizeof(int));
	
	if(arr==NULL)
	{
	
		printf("n/a");
		exit(0);
	}
	else
	{
		printf("etr arr\n");
		for(i=0;i<n;i++)
//			arr[i]=i+1;
			scanf("%d",&arr[i]);
			
		printf("etrd array is\n");
		for(i=0;i<n;i++)
			printf("%2d",arr[i]);
	}
	printf("\netr key\n");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
//		for(j=i+1;j<n;j++)
		if(arr[i]==key)
			printf("elem founf in index : %2d",i+1);
	
	for(i=0;i<n;i++)
//		for(j=i+1;j<n;j++)
//			if(arr[i]==arr[j])
			{
				count++;
				break;
			}
	printf("\n recurrences are/is : %d",count);
	return 0;
}
*/

// do it using menu driven
// correct

/*
int main()
{
    int a,i,x,j;
    int count=0;
    int *arr[x];
    printf("Enter the no. of elements in array:");
    scanf("%d",&i);
    arr[x]=(int*)malloc(i*sizeof(int));
    if(arr[x]==NULL)
    {
        printf("ERROR");
        exit(0);
    }
    else
    {
        printf("Enter the elements in given array:\n");
        for (x=0;x<i;x++)
        {
            printf("arr[%d]:",x);
            scanf("%d",&arr[x]);
        }
        printf("The array:");
        for(x=0;x<i;x++)
        {
            printf("%2d",arr[x]);
        }
        printf("\nEnter the no. to search:");
        scanf("%d",&a);
        for(x=0;x<i;x++)
        {
            if(arr[x]==a)
            {
                printf("%d is at %d.\n",a,x);
                count++;
            }
            
            else
            {
                printf("");
            }
        }
        printf(" Occurance no.:%d\n",count);

        return 0;
    }    
    
}
*/

/////// by using menu driven prog 
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,i,x,j;
    int count=0;
    int *arr;
    printf("Enter the no. of elements in array:");
    scanf("%d",&i);
    arr=(int*)malloc(i*sizeof(int));
    if(arr==NULL)
    {
        printf("ERROR,Memory not allocatted.");
        exit(0);
    }
    else
    {
        printf("Enter the elements in given array:\n");
        for (x=0;x<i;x++)
        {
            printf("arr[%d]:",x);
            scanf("%d",&arr[x]);
        }
        printf("The array:");
        for(x=0;x<i;x++)
        {
            printf("%2d",arr[x]);
        }
        printf("etr choice \n");
        printf("etr 1:index search  2:rec \n");
        int n;
        printf("etr n: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("\nEnter the no. to search:");
                scanf("%d",&a);
                for(x=0;x<i;x++)
                {
                    if(arr[x]==a)
                    {
                        printf("%d is at %d.\n",a,x);
                //count++;
                    }
            
                    // else
                    // {
                    //     printf("");
                    // }
                }
                break;
            case 2:
                printf("\nEnter the no. to search:");
                scanf("%d",&a);
                for(x=0;x<i;x++)
                {
                    if(arr[x]==a)
                    {
                        count++;
                    }
                }
                printf(" Occurance no.:%d\n",count);
                break;
            default:
                printf("n/a");
    	}    
    return 0;
    }
}
*/

/*
//// wap  menu driven for selection sort and radix sort and shows each iteration ?

/// malloc use

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int ptr_arr(int arr[1000],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%3d",arr[i]);
    printf("\n");
}
int swap(int *s,int *b)
{
    int temp = *s;
    *s = *b;
    *b = temp;
}
int sel_sort(int arr[],int n)
{
    int i,j,k;
    printf("entered arr: ");
    ptr_arr(arr,n);
    for(i=0;i<n;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
            if(arr[j]<arr[k])
                k=j;
            swap(&arr[k],&arr[i]);
    printf("%d swap : ",i+1);
    ptr_arr(arr,n);
    }
    printf("\nsorted array : ");
    ptr_arr(arr,n);
}
int radix(int arr[],int n)
{
    int i,j,sm,count=0,max,d,m;
    printf("entr arr : ");
    ptr_arr(arr,n);
    max=arr[0];
    for(i=0;i<n;i++)
        if(arr[i]>max)
            max=arr[i];
    count=(max==0)?1:log10(max)+1;
    for(m=1;m<=count;m++)
    {
        d=pow(10,m);
        m++;
        for(i=0;i<n;i++)
        {
            sm=i;
            for(j=i+1;j<n;j++)
            if(arr[j]%d<arr[sm]%d)
                sm=j;
                swap(&arr[i],&arr[sm]);
        printf("%d swap : ",m+1);
        ptr_arr(arr,n);
        }
        printf("\nsorted arr :");
        ptr_arr(arr,n);
    }
}
int main()
{
    int *arr;
    int c,n,i;
    printf("etr n: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("etr the elem of arr : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    do
    {
        printf("\n\t1.SELECTION SORT\n\t2.RADIX SORT\n\t3.EXIT\nEnter your Choice : ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                sel_sort(arr,n);
                break;
            case 2:
                radix(arr,n);
                break;
            case 3:
                printf("exit");
                exit(0);
                break;
            default:
                printf("n/a");
                break;
        }
    }
    while(c!=3);
    return 0;
}
*/
/*
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
*/
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

// 5 

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
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    int n,val,i;
    printf("etr n\n");
    scanf("%d",&n);
    
    s->size=n;
    // s->size=100;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    // printf("done");
    printf("etr elem in stack\n");
    for( i=0;i<n;i++)
    {
        printf("etr elem %d in stack: ",i);
        scanf("%d",&val);
        push(s,val);
    }
    printf("stack = ");
    for(i=0;i<=s->top;i++)
    {
        printf("%3d",s->arr[i]);
    }
    
    reverse(s);
    printf("\nrev stack: ");
    for (i = 0;i<=s->top; i++) 
    {
        printf("%3d ", s->arr[i]);
    }
    
    return 0;
}

// aman  prac 5 stack rev

#include<stdio.h>
#include<stdlib.h>


struct stack
{
    int item;
    struct stack *next;
};
struct stack *top;


void push()
{
    // int n;
    struct stack *ni;
    ni=(struct stack*)malloc(sizeof(struct stack));
    printf("\n");
    // scanf("%d",&n);
    
    ni->item=rand()%100;
    printf("%3d",ni->item);
    ni->next=0;
    if(top==0)
    {
        top=ni;
    }
    else
    {
        ni->next=top;
        top=ni;
    }
}
void display()
 
{
	struct stack *ptr;
	printf("\n item in reversed stack are");
	for(ptr=top; ptr!=0; ptr=ptr->next)
	printf("%4d", ptr->item);
}


void main()
{
    struct stack *ni;
    int c,i;
	char ch;
	printf("\netr choice to push y/n: ");
	scanf("%c",&ch);
    if(ch=='y')
    {
        printf("\netr how many items u want to push: ");
	    scanf("%d",&c);
        for(i=0;i<c;i++)
        {
            push();
        }
        display();
    }
   
    else if (ch=='n')
        printf(" ERROR not FOUND");
}

// prac 6  queue


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
    if(q->r==q->size)
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
    int i,n,d;
    struct que *q=(struct que*)malloc(sizeof(struct que));
    
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
    for(i=1;i<=q->r;i++)
    {
        printf("%3d",q->arr[i]);
    }
    printf("\nhow many no. u have del\n");
    scanf("%d",&d);
    for(i=0;i<d;i++)
    {
        deque(q);
    }
    printf("deque elem\n");
    for(i=1;i<=q->f;i++)
    {
        printf("%3d",q->arr[i]);
    }
    printf("\nrem elem in que\n");
    for(i=d+1;i<=q->r;i++)
    {
        printf("%3d",q->arr[i]);
    }
    return 0;
}










































