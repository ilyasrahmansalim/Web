#include <stdio.h>
void rotasi(int *a, int *b, int *c) {
    int temp;

    temp = *c; 
    *c = *b; 
    *b = *a; 
    *a = temp; 
}

int main() {
    int a, b, c;

    printf("Masukkan nilai a: "); scanf("%d", &a);
    printf("Masukkan nilai b: "); scanf("%d", &b);
    printf("Masukkan nilai c: "); scanf("%d", &c);

    printf("\nNilai sebelum rotasi:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    rotasi(&a, &b, &c);

    printf("\nNilai setelah rotasi (a->b, b->c, c->a):\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}