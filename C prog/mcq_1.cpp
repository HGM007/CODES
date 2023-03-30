// 1

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

//2
//Print a pattern of numbers
int main() 
{

    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        // for(int j=0;j<len;j++){
        //     int min = i < j ? i : j;
        //     min = min < len-i ? min : len-i-1;
        //     min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}

//3
//Given a sentence, , print each word of the sentence in a new line.
#include <stdio.h>
#include <string.h>
//#include <math.h>
//#include <stdlib.h>

int main() {

    char *s;
    int i;
    s = malloc(1024 * sizeof(char));
//    scanf("%[^\n]", s);
//    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for( i=0;s[i]!='\0';i++)
        
//        if(s[i]!=' ')
//        {
//            printf("%c",s[i]);
//        }
        else
        {
            printf("\n");
        }
    return 0;
}

//4

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
//            if (a[j] == ch)
//            {
//              count++;
//            }
          }
      printf("%d ", count);
      count = 0;
      ch++;
    }

  return 0;
}
















