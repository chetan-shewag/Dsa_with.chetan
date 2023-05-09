#include<stdio.h>

void main() {
    int a,b,c;
    printf("enter your numbers:");
    scanf("%d %d %d",&a,&b,&c);
     if(a>=b && a>=c)
        printf("\n%d is a largest number");
     if(b<=a && b<=c)
       printf("\n%d largest number");
     if(c<=a && c<=c)
       printf("\n%d largest number");

       return 0;     
     
      }

  