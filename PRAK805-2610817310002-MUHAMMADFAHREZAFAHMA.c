#include <stdio.h>

struct Dompet {
    char nama[100];
    int saldo;
};

void topUp(struct Dompet *dompet, int nominal) {
    dompet->saldo += nominal;

    printf("Top up %d berhasil, saldo = %d\n",
           nominal, dompet->saldo);
}

void bayar(struct Dompet *dompet, int nominal) {
    if (dompet->saldo >= nominal) {
        dompet->saldo -= nominal;

        printf("Bayar %d berhasil, saldo = %d\n",
               nominal, dompet->saldo);
    } else {
        printf("Bayar %d gagal, saldo tidak cukup\n",
               nominal);
    }
}

int main() {
    struct Dompet dompet;
    int N;

    scanf("%s %d", dompet.nama, &dompet.saldo);
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char jenis;
        int nominal;

        scanf(" %c %d", &jenis, &nominal);

        if (jenis == 'T') {
            topUp(&dompet, nominal);
        } else if (jenis == 'B') {
            bayar(&dompet, nominal);
        }
    }

    printf("Saldo akhir %s = %d\n",
           dompet.nama, dompet.saldo);

    return 0;
}
