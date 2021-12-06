#include<stdio.h>
 main()
 {
     int x;
     int *p;
     x=100;
      p=&x;
      printf("\n%d",x);
      printf("\n % u",&x);
      printf("\n%u",p);
      printf("\n%u",*p);
 }
