#include <stdio.h>
int main(){ 
   double *pu, nu; 
   double u = 1234.0; 
 
   pu = &u; 
   nu = *pu; 
 
  //  printf("Alamat dari u = %p\n", *pu); 
  //     printf("Alamat dari u = %p\n", &u); 
  //     printf("Alamat dari u = %p\n", &u); 
  //  printf("Isi pu        = %p\n", pu); 
  //  printf("Isi u         = %lf\n", u); 
  //  printf("Nilai yang ditunjuk oleh pu = %f\n", *pu); 
  //  printf("Nilai nu      = %f\n", nu); 

  printf("Alamat pu    = %p\n", &pu); 
  printf("Alamat nu    = %p\n", &nu); 
  printf("Alamat u   = %p\n", &u); 
  printf("Isi pu      = %lf\n", pu); 
  printf("Isi nu       = %lf\n", nu); 
  printf("Isi u      = %lf\n", u); 
 }
