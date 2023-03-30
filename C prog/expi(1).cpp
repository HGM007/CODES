		//#include<stdio.h>
		//#include<stdlib.h>
		
/*		int main()
		{
			printf("etr ur choice\n");
			printf("to perform prog by\n");
			printf("1:malloc   2:static\n");
			int z;
			scanf("%d",&z);
			switch(z)
			{
				case 1:
					int **mat1, **mat2,**res,i,j,r1,c1,r2,c2,k;
		
					printf("\nEnter the Order of the First matrix...\n");
					scanf("%d %d",&r1,&c1);
					printf("\nEnter the Order of the Second matrix...\n");
					scanf("%d %d",&r2,&c2);
		
		
					mat1= (int**) malloc(r1*sizeof(int*));
		
					for(i=0;i<c1;i++)
		    			mat1[i]=(int*)malloc(c1*sizeof(int));
		
					mat2= (int**) malloc(r2*sizeof(int*));
		
					for(i=0;i<c2;i++)
		    			mat2[i]=(int*)malloc(c2*sizeof(int));
		
					res=(int**)calloc(r1,sizeof(int*));
		
					for(i=0;i<c2;i++)
		    		res[i]=(int*)calloc(c2,sizeof(int));
					printf("etr mat 1 :\n");
		//Input Matrix1
		    		for(i=0;i<r1;i++)
		        		for(j=0;j<c1;j++)
		            		scanf("%d",&mat1[i][j]);
					printf("etr mat 2: \n");
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
					int  n1;
					printf("multiplication: 1   addition:2 \n");
					printf("etr choice\n");
					scanf("%d",&n1);
					switch(n1)
					{
		    //Multiplication
		    			case 1: 
						if(c1!=r2)
						{
		    				printf("Invalid Order of matrix");
		    				exit(EXIT_SUCCESS);
						}
						else
						{
					  
		        			for(i=0;i<r1;i++)
						{
		        			for(j=0;j<c2;j++)
							{
		                		res[i][j]=0;
		                		for(k=0;k<c1;k++)
		                    		res[i][j]+= mat1[i][k]*mat2[k][j];
		
		            		}
		            		printf("\n");
		        		
						}
					}	
		
		
				        printf("\nThe Multiplication of two matrix is\n");
				        for(i=0;i<r1;i++){
				            printf("\n");
				            for(j=0;j<c2;j++)
				                printf("%d\t",res[i][j]);   
				        }
				        printf("\n");
				        break;
				    
				    case 2:
				        // Addition
				        for(i=0;i<r1;i++)
				            for(j=0;j<c2;j++)
				                res[i][j]=mat1[i][j]+mat2[i][j];
				
				
				        printf("\nThe Addition of two matrix is\n");
				        for(i=0;i<r1;i++){
				            printf("\n");
				            for(j=0;j<c2;j++)
				                printf("%d\t",res[i][j]);
				                
				        }
				        break;
				    default:
				        printf("n/a");
				
					}
					return 0;
				    
					}
					break;
		
			case 2:
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
			break;
		}
		default:
			printf("n/a");
			break;
			}
return 0;
}
*/

// selection sort
/*
int main()
{
	int arr[1000],i,j,n,small;
	printf("etr n:\n");
	scanf("%d",&n);
	printf("etr arr elem\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%3d",arr[i]);
	}
	
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
		printf("%3d",arr[i]);
		
	
}
*/
//radix sort
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int arr[1000],i,j,n,small,count=0,d,m,max;
	printf("etr n1:\n");
	scanf("%d",&n);
	printf("etr arr elem\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%3d",arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	    if(arr[i]>max)
	        max=arr[i];
	count=(max==0)?1:log10(max)+1;
	for(m=0;m<count;m++)
	{
	    d=pow(10,m);
	    m++;
	    for(i=0;i<n-1;i++)
    	{
    		small=i;
    		for(j=i+1;j<n;j++)
    		if(arr[j]%d<arr[small]%d)
    			small=j;
    		int temp=arr[small];
    		arr[small]=arr[i];
    		arr[i]=temp;
    		
    	}
//    	printf("\n%5d",arr[i]);
//    	printf("\n");
	}
	printf("\nsorted\n");
	for(i=0;i<n;i++)
		printf("%5d",arr[i]);
		
	
}
*/
/*
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

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	FILE*fo;
	fo=fopen("selection_sort.txt","w");
	int *arr,n,i,size,small,temp,j;
	clock_t starttime,endtime;
	double totaltime;
	printf("etr size of arr: ");
	scanf("%d",&n);
	printf("etr range: ");
	scanf("%d",&size);
	arr=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%size;
	}
	for(i=0;i<n;i++)
	{
		fprintf(fo,"%5d",arr[i]);
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
	fprintf(fo,"\nsorted\n");
	for(i=0;i<n;i++)
		fprintf(fo,"%5d",arr[i]);
	endtime=clock();
	totaltime=((double)(endtime-starttime))/CLOCKS_PER_SEC;
	fprintf(fo,"\n time taken is %f ",totaltime);
}












