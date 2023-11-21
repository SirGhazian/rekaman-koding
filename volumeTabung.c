#include <stdio.h>

int main() {
    int pilihan;
    float phi, l_jarijari, l_diamater, l_tinggi, l_luas, hasil;
    phi = (3.14159265358979323846);

    printf("\n--------------------------------\n");
    printf("------- Volume Tabung -------\n\n");
    printf("Pilih metode perhitungan luas:\n");
    printf("--------------------------------\n");
    printf("Ketik 1 jika data yang diketahui jari-jari\n");
    printf("Ketik 2 jika data yang diketahui diameter\n");
    printf("Ketik 3 jika data yang diketahui luas\n \n");
    printf("Pilihan: ");

    scanf("%i", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Masukan data jari-jari dalam Cm: ");
            scanf("%f", &l_jarijari);
            printf("Masukan data tinggi dalam Cm: ");
            scanf("%f", &l_tinggi);
            hasil = phi * l_jarijari * l_jarijari * l_tinggi;

            break;
        case 2:
            printf("Masukan data diameter dalam Cm: ");
            scanf("%f", &l_diamater);
            printf("Masukan data tinggi dalam Cm: ");
            scanf("%f", &l_tinggi);
            hasil = ((1.0 / 4.0) * (phi)) * l_diamater * l_diamater * l_tinggi;

            break;
        case 3:
            printf("Masukan data luas dalam Cm2: ");
            scanf("%f", &l_luas);
            printf("Masukan data tinggi dalam Cm: ");
            scanf("%f", &l_tinggi);
            hasil = l_luas * l_tinggi;

            break;
        default:
            printf("Data yang anda masukkan tidak valid!");
    }

    printf("Volume tabung berdasarkan data yang diinput adalah: %.2f Cm3", hasil);

    return 0;
}
