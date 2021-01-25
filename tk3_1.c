#include <stdio.h>

int main() {
  char *bintang;
  char nama[20];
  int tanggal, bulan;

  printf("Masukkan Nama: ");
  scanf("%[^\n]%*c", nama);
  printf("Masukkan Tanggal Lahir (tanggal & bulan, ex: 1 12): ");
  scanf("%d %d", &tanggal, &bulan);

  printf("\n=============== BINTANG===============\n");

  if (tanggal >= 21 && bulan == 3 || tanggal <= 19 && bulan == 4) {
    bintang = "Aries";
  } else if (tanggal >= 20 && bulan == 4 || tanggal <= 20 && bulan == 5) {
    bintang = "Taurus";
  } else if (tanggal >= 21 && bulan == 5 || tanggal <= 20 && bulan == 6) {
    bintang = "Gemini";
  } else if (tanggal >= 21 && bulan == 6 || tanggal <= 22 && bulan == 7) {
    bintang = "Cancer";
  } else if (tanggal >= 23 && bulan == 7 || tanggal <= 22 && bulan == 8) {
    bintang = "Leo";
  } else if (tanggal >= 23 && bulan == 8 || tanggal <= 22 && bulan == 9) {
    bintang =" Virgo";
  } else if (tanggal >= 23 && bulan == 9 || tanggal <= 22 && bulan == 10) {
    bintang = "Libra";
  } else if (tanggal >= 23 && bulan == 10 || tanggal <= 21 && bulan == 11) {
    bintang = "Scorpio";
  } else if (tanggal >= 22 && bulan == 11 || tanggal <= 21 && bulan == 12) {
    bintang = "Sagitarius";
  } else if (tanggal >= 20 && bulan == 1 || tanggal <= 18 && bulan == 2) {
    bintang = "Aquarius";
  } else if (tanggal >= 19 && bulan == 2 || tanggal <= 20 && bulan == 3) {
    bintang = "Pisces";  
  }

  printf("Nama: %s \n", nama);
  printf("Bintang: %s \n", bintang);
  printf("Tanggal Lahir: %d %d \n", tanggal, bulan);
}
