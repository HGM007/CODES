/*
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
// for bubble sort(1)
void bubblesort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(arr[j-1]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}

// for insertion sort(2)
void insertionsort(int arr[],int n)
{
    int i,j,temp;
 
    for( i=0;i<n;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            break;
        }
        arr[j+1]=temp;
    }
}

// for merge (3)
void merge(int arr[],int l,int m,int r)
{
    int len,i,j,k,*c;                                  
    len=r-l+1;
    c=(int*)malloc(sizeof(int)*len);
    i=0;
    j=l;
    k=m+1;
    while(j<=m && k<=r) // mid and high
    {
        if(arr[j]<arr[k])
        {
            c[i++]=arr[j++];
   
        }
        else
        {
            c[i++]=arr[k++];
   
        }
 
    }
 
    while(j<=m)
    {
        c[i++]=arr[j++];
    }
 
    while(k<=r)
    {
        c[i++]=arr[k++];
    }
    i=0;
    while(l<=r)
    {
        arr[l++]=c[i++];
    }  
}  


// for mergesort
void mergesort(int arr[],int l,int r)
{
    int m=(l+r)/2;
    if(l<r)
    {
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

//main driver code
int main()
{
    int i,n,choice,size;
    int *arr;
    printf("Name: Srushti Mehare\nRoll no. : 26\n");
    clock_t starttime, endtime;
    double totaltime;
    printf("Enter No. of elements:");
    scanf("%d",&n);
    FILE *fptr;
    fptr = fopen("Random numbers.txt","a");
    // {
    //     //   if(fptr == NULL)
    //     //   {
    //     //         printf("Error");
    //     //         exit(1);
    //     //   }
    //       fprintf(fptr,"unsorted: ");
    //       int arr[n];
    //         for(i=0;i<n;i++)
    //         {
    //               arr[i]=rand()%5000;
    //         }
    // }
    
    fprintf(fptr,"\nn=%d\n",n);
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
		fprintf(fptr,"%5d",arr[i]);
	}
	
    // printf("\ngenerated array:\n ");
    // // starttime=clock();
    // for(i=0;i<n;i++)
    // {
    //  printf("%5d",arr[i]);
    // }
   
    printf("\n\tMenu\n");
    printf("\n1 : for bubble sort");
    printf("\n2 : for insertion sort");
    printf("\n3 : for mergesort");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        starttime=clock();
        bubblesort(arr,n);
        endtime=clock();
totaltime=(double)(endtime-starttime)/CLOCKS_PER_SEC;
printf("\nThe total time is %lf ",totaltime);
        break;
       
        case 2:
        starttime=clock();
        insertionsort(arr,n);
        endtime=clock();
totaltime=(double)(endtime-starttime)/CLOCKS_PER_SEC;
printf("\nThe total time is %lf ",totaltime);
        break;
       
        case 3:
        starttime=clock();
        mergesort(arr,0,n-1);
        endtime=clock();
totaltime=(double)(endtime-starttime)/CLOCKS_PER_SEC;
printf("\nThe total time is %lf ",totaltime);
        break;
       
        default: exit(0);
    }

    fprintf(fptr,"\nSorted Numbers are:\n");
    for(i=0;i<n;i++)
    fprintf(fptr,"%d\t",arr[i]);
	return 0;
}
*/
/*
//random number generator
#include <stdio.h>
 #include <stdlib.h>
 
 int main(void)
 {
 	FILE*fptr;
 	
 	fptr = fopen("random.txt","w");
 	int i;
 	if(fptr==NULL)
 	{
 		printf("ERROR");
 		exit(1);
 		
	}
	
	for(i=0;i<200;i++)
	{
		int val = rand() % 100000;
		fprintf(fptr," %d",val);
	}
	
	fclose(fptr);
	printf("number generated successfully !!");
	return 0;
 }
 */

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
}
int main()
{
	FILE *fp ;
	fp= fopen("rda.txt","a");
	clock_t starttime, endtime;
	double totaltime;
	int i,j,n,r,s;
	int *a;
	printf("Enter size:");
	scanf("%d",&s);
	printf("etr range\n");
    scanf("%d",&r);
	a=(int*)malloc(s*sizeof(int));
	for(i=0;i<s;i++)
	{
		a[i]=rand()%r;
	}
	for(i=0;i<s;i++)
	{
		fprintf(fp,"%2d",a[i]);
	}
//	
//	if(fp==NULL)
//	{
//		printf("ERROR");
//	}
//	else
//	{
//		i=0;
//		while(feof(fp)==0)
//		{
//			fscanf(fp, "%d", &a[i]);
//			i++;
//		}
		starttime=clock();
	    ra_so(a,n);
	    endtime=clock();
		totaltime=((double)(endtime-starttime))/CLOCKS_PER_SEC;
		fprintf(fp,"\n time taken is %f ",totaltime);
//	}

}


//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	FILE*fo;
//	fo=fopen("ANew_selection_sort.txt","a");
//	int *arr,n,i,size,small,temp,j;
//	clock_t starttime,endtime;
//	double totaltime;
//	printf("etr size of arr: ");
//	scanf("%d",&n);
//	fprintf(fo,"\n%d",n);
//	printf("etr range: ");
//	scanf("%d",&size);
//	//range
//	arr=(int*)malloc(n*sizeof(int));
//	
//	for(i=0;i<n;i++)
//	{
//		arr[i]=rand()%size;
//	}
//	for(i=0;i<n;i++)
//	{
//		fprintf(fo,"%5d",arr[i]);
//	}
//	starttime=clock();
//	for(i=0;i<n-1;i++)
//	{
//		small=i;
//		for(j=i+1;j<n;j++)
//		if(arr[j]<arr[small])
//			small=j;
//		int temp=arr[small];
//		arr[small]=arr[i];
//		arr[i]=temp;
//	}
//	fprintf(fo,"\nsorted\n");
//	for(i=0;i<n;i++)
//		fprintf(fo,"%5d",arr[i]);
//	endtime=clock();
//	totaltime=((double)(endtime-starttime))/CLOCKS_PER_SEC;
//	fprintf(fo,"\n time taken is %f ",totaltime);
//}


// nitya
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sel_so(int arr[],int n)
{
	int i,small,j,temp;
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
}

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
}
int main()
{
	clock_t starttime, endtime;
	double totaltime;
	int i,j,n,r,s;
	int *a;
	printf("Enter size:");
	scanf("%d",&n);
	printf("etr range\n");
    scanf("%d",&r);
	a=(int*)malloc(n*sizeof(int));
	FILE *fp = fopen("random.txt","r");
	if(fp==NULL)
	{
		printf("\n ERROR");
	}
	else
	{
		i=0;
		while(feof(fp)==0)
		{
			fscanf(fp, "%d", &a[i]);
			i++;
		}
	}
	int choice;
    printf("Press 1 for radix sort \n");
    printf("Press 2 for selection sort\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
	switch (choice)
    {
    	case 1:
    		{
    			starttime=clock();
    			ra_so(a,n);
    			endtime=clock();
				totaltime=((double)(endtime-starttime))/CLOCKS_PER_SEC;
				printf("\n time taken is %f ",totaltime);
			}
		case 2:
			{
				starttime=clock();
    			sel_so(a,n);
    			endtime=clock();
				totaltime=((double)(endtime-starttime))/CLOCKS_PER_SEC;
				printf("\n time taken is %f ",totaltime);
			}
		default:
			{
				printf("Wrong choice");
				break;	
			}
			
		return 0;
	}
}
