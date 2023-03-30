#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
int main() 
{
    char ch;
    char s[10];
    char sen[100];
    printf("etr ch = ");
    scanf("%c",&ch);
    printf("%c",ch);
    printf("etr str = ");
    scanf("%s",s);
    printf("%s\n",s);
    printf("etr sen = ");
    scanf("%[^\n]s",sen);
    printf("%s",sen);
    
    return 0;
}
*/

/*
int main()
{
	char ch;
    char s[24];
    char sen[100];
    scanf("%c\n%s\n%[^\n]s",&ch,s,sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
*/

/*
int main()
{
	char ch;
	char s[20];
	char sen[50];
	scanf("%c\n %s\n %[^\n]s",&ch,s,sen);
	printf("%c\n %s\n %s",ch,s,sen);
	return 0;
}
*/

//max of four by function
/*
int max_of_four(int a, int b, int c, int d)
{
    int max;
    max =a>b?a:b;
    max =c>max?c:max;
    max = d>max?d:max;
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
*/

//pointer 
/*
void update(int *a,int *b) {
    // Complete this function    
//    int x,y;
//    x = *a+*b;
//    y = abs(*a  -*b);
//    *a =x;
//    *b =y;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
*/

// sum of digits
/*
int main()
{
	int n,sum=0,ld;
	printf("etr no.= ");
	scanf("%d",&n);
	
	while(n>0)
	{
		ld =n%10;
		sum = sum+ld;
		n/=10;
	}
	printf("sum = %d",sum);
	
}
*/

/*
If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2 , etc.).
If n>9, print Greater than 9.
*/

// for loop 
// 4-12-22
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(i=a;i<=b;i++)
        switch(i)
        {
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n ");
                break;
            case 3:
                printf("three\n ");
                break;
            case 4:
                printf("four\n ");
                break;
            case 5:
                printf("five \n");
                break;
            case 6:
                printf("six \n");
                break;
            case 7:
                printf("seven \n");
                break;
            case 8:
                printf("eight \n");
                break;
            case 9:
                printf("nine \n");
                break;
            
            default:
                if(i<9)
                    continue;
                else if(i%2==0)
                    printf("even");
                else
                    printf("odd");  
                printf("\n");      
        }
        
    return 0;
}
*/

//Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.
/*
#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}

*/

//Given a sentence, , print each word of the sentence in a new line.
//
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main() {
//
//    char *s;
//    int i;
//    s = malloc(1024 * sizeof(char));
//    scanf("%[^\n]", s);
//    s = realloc(s, strlen(s) + 1);
//    //Write your logic to print the tokens of the sentence here.
//    for( i=0;s[i]!='\0';i++)
//        
//        if(s[i]!=' ')
//        {
//            printf("%c",s[i]);
//        }
//        else
//        {
//            printf("\n");
//        }
//    return 0;
//}

/*
//Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.
int main ()
{
  char a[1000], freq[256] = {0};
  int i, n, j, count = 0;
//  scanf("%[^\n]s", a);    //input from user
//  n = strlen(a);         // finding string length
  char ch = '0';
  for (i = 0; i < 10; i++)
    {
          for (j = 0; j < n; j++)
          {
            if (a[j] == ch)
            {
              count++;
            }
          }
      printf("%d ", count);
      count = 0;
      ch++;
    }

  return 0;
}
*/

















