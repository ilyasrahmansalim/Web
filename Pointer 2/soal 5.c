#include <stdio.h> 
 
char *nama1 = "AHMAD"; 
char *nama2 = "RIFDA"; 
  
int main(){ 
    char *namax; 
    
    puts("SEMULA : "); 
    printf("nama1 --> %s\n", nama1);    
    printf("nama2 --> %s\n", nama2); 
    
    namax = nama1; 
    nama1 = nama2; 
    nama2 = namax; 
    
    puts("KINI : "); 
    printf("nama1 --> %s\n", nama1); 
    printf("nama2 --> %s\n", nama2); 

    // printf("Alamat yang ditunjuk oleh nama1 = %p\n", &nama1); 
    // printf("Huruf: %c | Alamat: %p\n", *nama1, &nama1);
    // printf("Alamat yang ditunjuk oleh nama2 = %p\n", &nama2); 
    // printf("Huruf: %c | Alamat: %p\n", *nama2, &nama2);
    // printf("Alamat yang ditunjuk oleh namax = %p\n", &namax);
    // printf("Huruf: %c | Alamat: %p\n", *namax, &namax);
}