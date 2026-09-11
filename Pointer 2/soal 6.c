#include <stdio.h> 
int main(){
   int nilai[10]={86,75,98,66,56,76,80,95,70,60}; 
   int index, *ip; 
 
   printf("Mencetak menggunakan array\n"); 
   printf("Daftar nilai siswa\n\n"); 
 
   for(index=0; index<10; index++) 
      printf("%3d",nilai[index]); 
 
   puts("\n"); 
   printf("Mencetak menggunakan pointer dan index\n"); 
   printf("Daftar nilai siswa\n\n"); 
 
   for(index=0; index<10; index++) 
      printf("%3d",*(nilai+index)); 
 
   puts("\n"); 
   printf("Mencetak menggunakan pointer\n"); 
   printf("Daftar nilai siswa\n\n"); 
 
   ip=nilai; 
   for(index=0; index<10; index++) 
      printf("%3d",*ip++); 

    printf("Alamat yang ditunjuk oleh nilai = %p\n", &nilai);
    for(int i = 0; i < 10; i++) {
   printf("Nilai: %d | Alamat: %p\n", nilai[i], &nilai[i]);
}
    printf("Alamat yang ditunjuk oleh index = %p\n", &index);
    printf("Alamat yang ditunjuk oleh ip = %p\n", &ip);
}