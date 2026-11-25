#include <stdio.h>

struct Peserta {
    char nama[100];
    int umur;
    int skor;
};

int main() {
    int N;
    struct Peserta peserta[10];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s %d %d",
              peserta[i].nama,
              &peserta[i].umur,
              &peserta[i].skor);
    }

    int juara = 0;

    for (int i = 1; i < N; i++) {
        if (peserta[i].skor > peserta[juara].skor) {
            juara = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s ",
           peserta[juara].nama);
    printf("dengan skor %d\n", peserta[juara].skor);

    return 0;
}
