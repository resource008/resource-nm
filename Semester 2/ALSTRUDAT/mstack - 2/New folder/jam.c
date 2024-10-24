/*
    Nama        : Agus Pranata Marpaung
    Nama Program: jam.c
    Tanggal     : 19/02/2024
    NIM         : 13323033
*/

#include "jam.h"
#include <stdio.h>

boolean IsJAMValid(int H, int M, int S) {
    return (H >= 0 && H <= 23) && (M >= 0 && M <= 59) && (S >= 0 && S <= 59);
}

JAM MakeJAM(int HH, int MM, int SS) {
    JAM J;
    J.HH = HH;
    J.MM = MM;
    J.SS = SS;
    return J;
}

void BacaJAM(JAM *J) {
    int HH, MM, SS;
    boolean valid = false;
    while (!valid) {
        scanf("%d %d %d", &HH, &MM, &SS);
        if (IsJAMValid(HH, MM, SS)) {
            *J = MakeJAM(HH, MM, SS);
            valid = true;
        } else {
            printf("Jam tidak valid\n");
        }
    }
}

void TulisJAM(JAM J) {
    printf("%d:%d:%d", J.HH, J.MM, J.SS);
}

long JAMToDetik(JAM J) {
    return 3600 * J.HH + 60 * J.MM + J.SS;
}

JAM DetikToJAM(long N) {
    N %= 86400;
    int HH = N / 3600;
    N %= 3600;
    int MM = N / 60;
    int SS = N % 60;
    return MakeJAM(HH, MM, SS);
}

boolean JEQ(JAM J1, JAM J2) {
    return (J1.HH == J2.HH) && (J1.MM == J2.MM) && (J1.SS == J2.SS);
}

boolean JNEQ(JAM J1, JAM J2) {
    return !JEQ(J1, J2);
}

boolean JLT(JAM J1, JAM J2) {
    return JAMToDetik(J1) < JAMToDetik(J2);
}

boolean JGT(JAM J1, JAM J2) {
    return JAMToDetik(J1) > JAMToDetik(J2);
}

JAM NextDetik(JAM J) {
    return DetikToJAM(JAMToDetik(J) + 1);
}

JAM NextNDetik(JAM J, int N) {
    return DetikToJAM(JAMToDetik(J) + N);
}

JAM PrevDetik(JAM J) {
    return DetikToJAM(JAMToDetik(J) - 1);
}

JAM PrevNDetik(JAM J, int N) {
    return DetikToJAM(JAMToDetik(J) - N);
}

long Durasi(JAM JAw, JAM JAkh) {
    long durasi = JAMToDetik(JAkh) - JAMToDetik(JAw);
    if (durasi < 0) {
        durasi += 86400; // jika JAkh lebih kecil dari JAw, tambahkan satu hari
    }
    return durasi;
}
