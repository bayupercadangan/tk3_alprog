#include <stdio.h>

#define TOTAL_DATA 5

typedef struct ALAMAT {
  char *namaJalan[20];
  int nomorRumah;
  char *kota[20];
  char *provinsi[20];
} Alamat;

typedef struct TANGGALLAHIR {
  char tanggal[5];
  char bulan[5];
  int tahun;
} TanggalLahir;

typedef struct DOSEN {
  int noDosen;
  int nidn;
  char *nama[10];
  Alamat alamat;
  TanggalLahir tanggalLahir;
} Dosen;

int main() {
  Dosen dataDosen[TOTAL_DATA];

  for (int i = 0; i < TOTAL_DATA; i++) {
    int index = i + 1;
    printf("Masukkan Data Dosen ke %d \n", index);
    printf("No Dosen: "); scanf("%d", &dataDosen[i].noDosen);
    printf("NIDN: "); scanf("%d", &dataDosen[i].nidn);
    printf("Nama: "); scanf("%s", dataDosen[i].nama);

    printf("\nMasukkan Alamat Dosen ke %d\n", index);
    printf("Nama Jalan: "); scanf("%s", dataDosen[i].alamat.namaJalan);
    printf("Nomor Rumah: "); scanf("%d", &dataDosen[i].alamat.nomorRumah);
    printf("Kota: "); scanf("%s", dataDosen[i].alamat.kota);
    printf("Provinsi: "); scanf("%s", dataDosen[i].alamat.provinsi);

    printf("\nMasukkan Tanggal Lahir Dosen ke %d", index);
    printf("Masukkan Tanggal: (ex: 09)"); scanf("%s", dataDosen[i].tanggalLahir.tanggal);
    printf("Masukkan Bulan: (ex: 12)"); scanf("%s", dataDosen[i].tanggalLahir.bulan);
    printf("Masukkan Tahun: (ex: 1999)"); scanf("%d", &dataDosen[i].tanggalLahir.tahun);
    printf("\n=================== Data ke %d selesai ===================\n", index);
  }

  for (int i = 0; i < TOTAL_DATA; i++) {
    int index = i + 1;
    printf("\n=================== Data ke %d ===================\n", index);
    printf("No Dosen = %d \n", dataDosen[i].noDosen);
    printf("NIDN = %d \n", dataDosen[i].nidn);
    printf("Nama = %s \n", dataDosen[i].nama);
    printf("Nama Jalan = %s \n", dataDosen[i].alamat.namaJalan);
    printf("Nomor Rumah = %d \n", dataDosen[i].alamat.nomorRumah);
    printf("Kota = %s \n", dataDosen[i].alamat.kota);
    printf("Provinsi = %s \n", dataDosen[i].alamat.provinsi);
    printf("Tanggal Lahir = %s/%s/%d \n", dataDosen[i].tanggalLahir.tanggal, dataDosen[i].tanggalLahir.bulan, dataDosen[i].tanggalLahir.tahun);
  }
  
  return 0;
}
