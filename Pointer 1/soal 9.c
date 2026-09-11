#include <stdio.h>
int main(){ 
   int  count = 13, sum = 9, *x, *y; 
   
   x = &count; 
   *x = 27; 
   y = x; 
   x = &sum; 
   *x = count; 
   sum = *x / 2 * 3;       
 
   printf("count=%d, sum=%d, *x=%d, *y=%d\n", count,sum,*x,*y);
   
  printf("Alamat count   = %p\n", &count); 
  printf("Alamat sum   = %p\n", &sum); 
    printf("Alamat x   = %p\n", &x); 
  printf("Alamat y   = %p\n", &y); 

  printf("Isi count      = %d\n", count); 
  printf("Isi sum      = %d\n", sum);
  printf("Isi x      = %d\n", x); 
  printf("Isi y      = %d\n", y); 
 }
