#include <stdio.h> 
    int main(){ 
    static int tgl_lahir[] = {16, 4, 1974}; 
    int *ptgl; 
    ptgl = tgl_lahir; 
    printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl); 
    printf("Alamat yang ditunjuk oleh ptgl = %p\n", &ptgl); 
    printf("Alamat yang ditunjuk oleh tgl_lahir = %p\n", &tgl_lahir); 
    printf("Nilai dari tgl_lahir[0] = %d\n", tgl_lahir[0]); 
}