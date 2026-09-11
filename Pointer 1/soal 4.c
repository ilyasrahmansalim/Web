#include <stdio.h>
int main(){ 
   int z = 20, s = 30, *pz, *ps; 
   
   pz = &z; 
   ps = &s; 
   *pz += *ps; 
   printf("z = %d\n", z); 
   printf("s = %d\n", s); 

  printf("Alamat z   = %p\n", &z); 
  printf("Alamat s   = %p\n", &s); 
  printf("Alamat pz    = %p\n", &pz); 
  printf("Alamat ps    = %p\n", &ps); 

  printf("Isi z      = %d\n", z); 
  printf("Isi s      = %d\n", s);
  printf("Isi pz      = %p\n", pz); 
  printf("Isi ps       = %p\n", ps); 

 }
