#include <stdio.h> 
#include <string.h> 
#define PANJANG 20

    char nama1[PANJANG] = "AHMAD"; 
    char nama2[PANJANG] = "RIFDA"; 
    
    int main(){ 
    char namax[PANJANG]; 
    
    puts("SEMULA : "); 
    printf("nama1 --> %s\n", nama1); 
    printf("nama2 --> %s\n", nama2); 
    
    strcpy(namax, nama2); 
    strcpy(nama1, nama2); 
    strcpy(nama2, namax); 
    
    puts("KINI : "); 
    printf("nama1 --> %s\n", nama1); 
    printf("nama2 --> %s\n", nama2); 

//     printf("Alamat yang ditunjuk oleh nama1 = %p\n", &nama1); 
//     for(int i = 0; i < 6; i++) {
//     printf("Huruf: %c | Alamat: %p\n", nama1[i], &nama1[i]);
// }
//     printf("Alamat yang ditunjuk oleh nama2 = %p\n", &nama2); 
// for(int i = 0; i < 6; i++) {
//     printf("Huruf: %c | Alamat: %p\n", nama2[i], &nama2[i]);
// }
//     printf("Alamat yang ditunjuk oleh namax = %p\n", &namax);
// for(int i = 0; i < 6; i++) {
//     printf("Huruf: %c | Alamat: %p\n", namax[i], &namax[i]);
// }

 
}