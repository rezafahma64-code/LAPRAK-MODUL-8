#include <stdio.h>

int main() {
    int nilai;
    int *pointer;

    scanf("%d", &nilai);

    pointer = &nilai;

    printf("Nilai variabel = %d\n", nilai);
    printf("Alamat variabel = %p\n", (void *)pointer);
    printf("Nilai melalui pointer = %d\n", *pointer);

    *pointer = *pointer * 2;

    printf("Nilai setelah diubah lewat pointer = %d\n", nilai);

    return 0;
}
