#include <stdio.h>
int main(){ 
  float d = 54.5f, *pd; 
  
  printf("Isi d mula-mula = %g\n", d); 
 
  pd = &d; 
  *pd += 10; 
 
  printf("Isi d sekarang  = %g\n", d); 


  printf("Alamat pd    = %p\n", &pd); 
  printf("Alamat d    = %p\n", &d); 
  printf("Isi pd      = %p\n", pd); 
  printf("Isi d       = %g\n", d  ); 
}
