#include <stdio.h>

struct Dompet {
    char nama[100];
    long long saldo;
};

void topUp(struct Dompet *dompet, long long nominal) {
    dompet->saldo += nominal;

    printf("Top up %lld berhasil, saldo = %lld\n",
           nominal, dompet->saldo);
}

void bayar(struct Dompet *dompet, long long nominal) {
    if (dompet->saldo >= nominal) {
        dompet->saldo -= nominal;

        printf("Bayar %lld berhasil, saldo = %lld\n",
               nominal, dompet->saldo);
    } else {
        printf("Bayar %lld gagal, saldo tidak cukup\n",
               nominal);
    }
}

int main() {
    struct Dompet dompet;
    int N;

    scanf("%s %lld", dompet.nama, &dompet.saldo);
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char jenis;
        long long nominal;

        scanf(" %c %lld", &jenis, &nominal);

        if (jenis == 'T') {
            topUp(&dompet, nominal);
        } else if (jenis == 'B') {
            bayar(&dompet, nominal);
        }
    }

    printf("Saldo akhir %s = %lld\n",
           dompet.nama, dompet.saldo);

    return 0;
}