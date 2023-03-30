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


// 2


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

// 3

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

// 4


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

// 5

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

// 6

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


