#include <stdio.h>
int main(){   
   int i1, i2, *p1, *p2;   
    
   i1 = 9;   
   p1 = &i1;   
   i2 = *p1 / 2 - 2 * 3;   
   p2 = p1;   
   
   printf("i1=%d,i2=%d,*p1=%d,*p2=%d\n",i1,i2,*p1,*p2); 

  printf("Alamat i1   = %p\n", &i1); 
  printf("Alamat i2   = %p\n", &i2); 
  printf("Alamat p1    = %p\n", &p1);
  printf("Alamat p2    = %p\n", &p2);

  printf("Isi i1      = %d\n", i1); 
  printf("Isi i2      = %d\n", i2);
  printf("Isi p1      = %p\n", p1); 
  printf("Isi p2      = %p\n", p2); 
 }
