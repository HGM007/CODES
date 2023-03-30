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
