#include <stdio.h>

int main()
{

    int pilihan;
    float l_jarijari, l_diamater, hasil, phi;
    phi = (3.14159265358979323846);

    printf("\n--------------------------------\n");
    printf("-------- Luas Lingkaran --------\n\n");
    printf("Pilih metode perhitungan luas:\n");
    printf("--------------------------------\n");
    printf("Ketik 1 jika data yang diketahui jari-jari \n");
    printf("Ketik 2 jika data yang diketahui diameter \n \n");
    printf("Pilihan: \n");

    scanf("%i", &pilihan);

    switch (pilihan)
    {
    case 1:
        printf("Masukan data jari-jari dalam Cm: ");
        scanf("%f", &l_jarijari);
        hasil = (phi)*l_jarijari * l_jarijari;

        break;
    case 2:
        printf("Masukan data diameter dalam Cm: ");
        scanf("%f", &l_diamater);

        hasil = ((1.0 / 4.0) * (phi)) * l_diamater * l_diamater;
        break;
    default:
        printf("Data yang anda input tidak valid\n");
    }
    printf("Luas lingkaran berdasarkan data yang diinput adalah: %.2f Cm2", hasil);
    return 0;
}
