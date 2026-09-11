#include <stdio.h>

int cariNilai(int *ptr, int ukuran, int target) {
    for (int i = 0; i < ukuran; i++) {
        if (*(ptr + i) == target) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int data[] = {10, 25, 30, 45, 50, 65, 80};
    int n = sizeof(data) / sizeof(data[0]);
    int cari;

    printf("=== Program Pencarian Array dengan Pointer (C) ===\n");
    printf("Daftar Angka: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    printf("\n\nMasukkan angka yang ingin dicari: ");
    if (scanf("%d", &cari) != 1) return 1;

    if (cariNilai(data, n, cari)) {
        printf("Hasil: Angka %d BERHASIL ditemukan!\n", cari);
    } else {
        printf("Hasil: Angka %d TIDAK ditemukan.\n", cari);
    }

    return 0;
}