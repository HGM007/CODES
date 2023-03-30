#include<stdio.h>
#include<conio.h>

/*
int main()
{
	int a = 1;
	printf("%d",a);
	
}
*/

/*
int main() 
{
  int day;
//  clrscr();
  printf("no.");
  scanf("%d",&day);
  
  switch (day) 
  {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
  }
    
  return 0;
}
*/

/*
int main()
{

	int n=0;
	while (n<5)
	{
		printf("%d\n",n);
		n++;
	}
}
*/
/*
int main()
{
	int n = 0;
	do
	{
		printf("%d\n",n);
		n++;
	}
	while(n<5);
}
*/

/*
int function(int x, int y)
{
	return x*y ;
	
}
int main()
{
	int result = function(5,5);
	printf("result is %d",result);
	
}
*/

/*
void function()
{
	printf("hello");
}
int main()
{
	function();
	return 0;
}
*/

/*
void func(char name[])
{
	printf("hello %s",name);
}
int main()
{
	func("lad\'s");
	return 0;
}
*/

/*
void func();

int main()
{
	func();
	return 0;
}
void func()
{
	printf("hello");
}

*/
//05-11-22 18:21

// fibonacci series
/*
int fib(int n);

int main()
{
	int result = fib(10);
	printf("res = %d",result);
	return 0;
}
int fib(int n)
{
	if (n>0)
		return n + fib(n-1);
	else
		return 0;
}
*/
/*
int fib (int n);

int main()
{
	int a;
	int res = fib(a);
	printf("no. =");
	scanf("%d",&a);
	printf("res = %d",res);
	return 0;
}
int fib(int n)
{
	if (n>0)
		return n + fib(n-1);
	else
		return 0;
}
*/

//2
/*
int main()
{
    int x,y;
    float a,b;
    scanf("%d %d",&x,&y);
    printf("%d %d\n",x+y,x-y);
    scanf("%f %f",&a,&b);
    printf("%f %f",(a+b),(a-b));
	
    
    return 0;
}
*/

// bubble sort

/*
int main()
{
	int arr[5],n,pass,i,j,temp;
	printf("etr no.\'s");
	for(i=0;i<5;i++)
	{
		scanf("%d\n",&arr[i]);
	}
	for(pass=0;pass<5;pass++)
	{
		for(j=0;j<5-1-pass;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		printf("%2d",arr[j]);
	}
}

*/

/*
int main()
{
	int n,i;
	printf("etr no. = ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d",n,i,n*i);
		printf("\n");
		
	}
	
}
*/


/*
// pattern

int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		//for(j=1;j<i;j++)           
		for(j=0;j<=n-i-1;j++) // reverse pattern
		{
			printf("*");
		}
		printf("\n");
	}
}
*/
/*
// reverse array

void array(int arr[])
{
	int i;
	for( i=0;i<5;i++)
	{
		printf("%d is %d\n",i,arr[i]);
	}
}
void arrayrev(int arr[])
{
	int temp,i;
	for(i=0;i<5/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[4-i];
		arr[4-i]=temp;
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	printf("before\n");
	array(arr);
	arrayrev(arr);
	printf("after\n");
	array(arr);
	
	return 0;
}
*/

// sizeof() func

/*int main()
{
	int i;
	i=4;
	int j=42;
	printf("The size of var is %d",sizeof(i+j));
	return 0;
	
}
*/

/*
int main()
{
	int *p;
	int i=5;
	p=&i;
	printf("add of p var is %x\n",p);
	printf("value of p variable is %d\n",*p);
	return 0;
}
*/
/*
int main()
{
	int n=5;
	int arr[n];
//	int *p[10]=&arr;
	int i,j;
	printf("etr no.\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&arr[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("%2d",arr[j]);
	
	}
	return 0;
	
}
*/

// structure 
/*
struct student
{
	int roll_num;
	char name[50];
	int marks[5];
	int total;
};
int main()
{
	struct student s1;
	int i;
	s1.total=0;
	
	scanf("%d\n",&s1.roll_num);
	scanf("%s\n",&s1.name);
	
	
	for(i=0;i<4;++i)
		scanf("%d\n",&s1.marks[i]);
	
	for(i=0;i<4;++i)
		s1.total=s1.total+s1.marks[i];
	
	printf("%d\n%s\n%d\n",s1.roll_num,s1.name,s1.total);
	
	return 0;
}
*/


// seprate the even and odd elem from array

/*struct corp
{
	char name[20];
	int id;
	int ph_n;
	
}c;
int main()
{
	int i,n;
	printf("how many etr's  do u want\n");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
	
		printf("etr name : ");
		scanf("%s",&c.name);
	
		printf("etr id : ");
		scanf("%d",&c.id);
	
		printf("etr phone no. : ");
		scanf("%d",&c.ph_n);
	
		printf("%s\n%d\n%d",c.name,c.id,c.ph_n);
		
		printf("\n");
	
	}
	return 0;
}
*/
/*
struct dist
{
	float feet;
	float inch;
	
}d1,d2;
int main()
{
	
	printf("etr ur choice\n");
	printf("1:feet to inch  2:inch to feet\n");
	int n;
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			
			printf("etr value in feet");
			scanf("%f",&d1.feet);
			if (d1.feet==0)
				printf("0");
			else 
				d1.inch=d1.feet*12;
				printf("%f feet = to %f inches",d1.feet,d1.inch);
			
			break;
		
		case 2:
			
			printf("etr value in inch");
			scanf("%f",&d2.inch);
			if (d2.inch==0)
				printf("0");
			else 
				d2.feet=d2.inch/12;
				printf("%f inch = to %f feet",d2.inch,d2.feet);
			
			break;
		default:
			printf("n/a");	
	}
	return 0;
}

*/

//inverse of matrix

int main()
{
	int r,c;
	int arr[r][c];
	int i,j;
	
	printf("etr row and colm\n");
	scanf("%d %d",&r,&c);
	
	for(i=0;i<r,i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	
}
















































































































































 








































































































































































