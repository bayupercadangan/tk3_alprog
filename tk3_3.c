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
  Dosen dosen[TOTAL_DATA];

  for (int i = 0; i < TOTAL_DATA; i++) {
    int index = i + 1;
    printf("Masukkan Data Dosen ke %d \n", index);
    printf("No Dosen: "); scanf("%d", &dosen[i].noDosen);
    printf("NIDN: "); scanf("%d", &dosen[i].nidn);
    printf("Nama: "); scanf("%s", dosen[i].nama);

    printf("\nMasukkan Alamat Dosen ke %d\n", index);
    printf("Nama Jalan: "); scanf("%s", dosen[i].alamat.namaJalan);
    printf("Nomor Rumah: "); scanf("%d", &dosen[i].alamat.nomorRumah);
    printf("Kota: "); scanf("%s", dosen[i].alamat.kota);
    printf("Provinsi: "); scanf("%s", dosen[i].alamat.provinsi);

    printf("\nMasukkan Tanggal Lahir Dosen ke %d", index);
    printf("Masukkan Tanggal: (ex: 09)"); scanf("%s", dosen[i].tanggalLahir.tanggal);
    printf("Masukkan Bulan: (ex: 12)"); scanf("%s", dosen[i].tanggalLahir.bulan);
    printf("Masukkan Tahun: (ex: 1999)"); scanf("%d", &dosen[i].tanggalLahir.tahun);
    printf("\n=================== Data ke %d selesai ===================\n", index);
  }

  for (int i = 0; i < TOTAL_DATA; i++) {
    int index = i + 1;
    printf("\n=================== Data ke %d ===================\n", index);
    printf("No Dosen = %d \n", dosen[i].noDosen);
    printf("NIDN = %d \n", dosen[i].nidn);
    printf("Nama = %s \n", dosen[i].nama);
    printf("Nama Jalan = %s \n", dosen[i].alamat.namaJalan);
    printf("Nomor Rumah = %d \n", dosen[i].alamat.nomorRumah);
    printf("Kota = %s \n", dosen[i].alamat.kota);
    printf("Provinsi = %s \n", dosen[i].alamat.provinsi);
    printf("Tanggal Lahir = %s/%s/%d \n", dosen[i].tanggalLahir.tanggal, dosen[i].tanggalLahir.bulan, dosen[i].tanggalLahir.tahun);
  }
  
  return 0;
}
