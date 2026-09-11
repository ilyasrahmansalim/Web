#include <stdio.h>
int main()  { 
   char *text_pointer = "Good morning!"; 
 
   for( ; *text_pointer != '\0'; ++text_pointer) 
     printf("%c", *text_pointer);
     
    //  printf("Alamat yang ditunjuk oleh text_pointer = %p\n", &text_pointer);
 } 