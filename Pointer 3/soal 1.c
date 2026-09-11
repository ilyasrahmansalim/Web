#include <stdio.h>
int main() { 
  static char *days[] = {"Sun", "Mon", "Tues", "Wed","Thu","Fri", "Sat"}; 
  int i; 
 
  for( i = 0; i < 6; ++i ) 
    printf( "%s\n", days[i]); 

    // for(int i = 0; i < 7; i++)
    // printf("Alamat yang ditunjuk oleh nama1 = %p\n", &days[i]); 
    
 }