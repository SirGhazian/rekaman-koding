#include <stdio.h>

int main()
{
    int pilihan_kelamin, pilihan_aktivitas;
    float tingkat_aktivitas, kebutuhan, berat, tinggi, umur, hasil;

    printf("\n===========================\n");
    printf("Silahkan pilih jenis kelamin:\n\n");

    printf("Pilih 1 jika Laki-Laki\n");
    printf("Pilih 2 jika Perempuan\n");
    printf("===========================\n");
    printf("Pilihan: \n");
    scanf("%i", &pilihan_kelamin);

    switch (pilihan_kelamin)
    {
    case 1:
        printf("Silahkan masukkan berat badan dalam Kg\n");
        scanf("%f", &berat);
        printf("Silahkan masukkan tinggi dalam Cm\n");
        scanf("%f", &tinggi);
        printf("Silahkan masukkan umur\n");
        scanf("%f", &umur);

        hasil = 66.5 + (13.75 * berat) + (5.003 * tinggi) - (6.75 * umur);

        break;
    case 2:
        printf("Silahkan masukkan berat badan dalam Kg\n");
        scanf("%f", &berat);
        printf("Silahkan masukkan tinggi dalam Cm\n");
        scanf("%f", &tinggi);
        printf("Silahkan masukkan umur\n");
        scanf("%f", &umur);

        hasil = 655.1 + (9.563 * berat) + (1.850 * tinggi) - (4.676 * umur);

        break;
    default:
        printf("Data yang anda masukkan tidak valid!");
    }

    printf("\n===========================\n");
    printf("Silahkan pilih tingkat aktivitas:\n\n");

    printf("Pilih 1 untuk aktivitas ringan\n");
    printf("Pilih 2 untuk aktivitas sedang\n");
    printf("Pilih 3 untuk aktivitas berat\n");
    printf("===========================\n");
    printf("Pilihan: \n");
    scanf("%i", &pilihan_aktivitas);

    switch (pilihan_aktivitas)
    {
    case 1:
        tingkat_aktivitas = 1.2;
        break;
    case 2:
        tingkat_aktivitas = 1.5;
        break;
    case 3:
        tingkat_aktivitas = 1.9;
        break;

    default:
        printf("Data yang anda masukkan tidak valid!");
    }

    kebutuhan = hasil * tingkat_aktivitas;
    printf("Kebutuhan kalori harian adalah: %.2f kalori", kebutuhan);

    return 0;
}
