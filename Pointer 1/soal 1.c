 #include <stdio.h>
 int main(){ 
  int y, x = 87; 
  int *px;  
   
  px = &x;  
  y = *px;  
   
  printf("Alamat x    = %p\n", &x); 
  printf("Alamat y    = %p\n", &y); 
  printf("Alamat px   = %p\n", &px); 
  printf("Isi px      = %p\n", px); 
  printf("Isi x       = %d\n", x); 
  printf("Nilai yang ditunjuk oleh px = %d\n", *px); 
  printf("Nilai y     = %d\n", y);
 }