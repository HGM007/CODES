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
