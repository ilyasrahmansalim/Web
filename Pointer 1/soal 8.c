#include <stdio.h>
int main() { 
   int  count = 10, *temp, sum = 7;     
    
   temp = &count; 
   *temp = 32; 
   temp = &sum; 
   *temp = count; 
   sum = *temp * 4; 
   
   printf("count=%d, *temp=%d, sum=%d\n", count,*temp, sum ); 

  printf("Alamat count   = %p\n", &count); 
  printf("Alamat sum   = %p\n", &sum); 
  printf("Alamat temp    = %p\n", &temp);

  printf("Isi count      = %d\n", count); 
  printf("Isi sum      = %d\n", sum);
  printf("Isi temp      = %p\n", temp); 
 }  
