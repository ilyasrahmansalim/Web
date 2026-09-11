#include <stdio.h>
int main() {
    int array1[10], array2[10]; 
    int *ip1, *ip2 = array2; 
    int *akhir = &array1[10]; 

for(ip1 = &array1[0]; ip1 < akhir; ip1++) 
*ip2++ = *ip1; 

    printf("Alamat yang ditunjuk oleh array1 = %p\n", &array1);
    printf("Alamat yang ditunjuk oleh array2 = %p\n", &array2);

    printf("Alamat yang ditunjuk oleh ip1 = %p\n", &ip1);
    printf("Alamat yang ditunjuk oleh ip2 = %p\n", &ip2);
    printf("Alamat yang ditunjuk oleh akhir = %p\n", &akhir);

}