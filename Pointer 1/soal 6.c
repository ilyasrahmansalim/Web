#include <stdio.h>
int main() {   
   int x = 1, y = 2, *ip;  
   
   ip = &x;  
   y = *ip;    
   *ip = 3; 
   
   printf("x = %d, y = %d\n", x, y); 

  printf("Alamat x   = %p\n", &x); 
  printf("Alamat y   = %p\n", &y); 
  printf("Alamat ip    = %p\n", &ip);

  printf("Isi x      = %d\n", x); 
  printf("Isi y      = %d\n", y);
  printf("Isi ip      = %p\n", ip); 
 }
