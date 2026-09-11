#include <stdio.h>
int main(){  
   char c = 'Q', *cp = &c;  
   
   printf("%c %c\n", c, *cp);  
   c = '/';  
   printf("%c %c\n", c, *cp);  
   *cp = '(';  
   printf("%c %c\n", c, *cp); 

     printf("Alamat c   = %p\n", &c); 
  printf("Alamat cp   = %p\n", &cp); 

  printf("Isi c      = %c\n", c); 
  printf("Isi cp      = %p\n", cp);
 }  
