// File : segitiga.c
// Program mencetak segi tiga siku-siku sesuai dengan format keluaran
// Sudut siku di pojok kanan atas, mengecil di bagian bawah
#include <stdio.h>

int main()
{
  // Deklarasi variabel untuk menyimpan bilangan yang dimasukkan
  int n;

  // Membaca input bilangan pertama yang diberikan
  scanf("%d", &n);

  // Melakukan perulangan sebanyak n
  // Nilai a akan merepresentasikan baris, dimulai dari baris 0
  // sampai baris ke n
  for (int a = 0; a < n; a++)
  {

    // Untuk setiap baris, lakukan perulangan sebanyak n-a
    // Pada baris pertama, fungsi ini akan berulang sebanyak
    // n kali, karena a = 0 sehingga n-0 = n
    // Untuk setiap baris berikutnya, jumlah perulangan fungsi
    // ini akan berkurang seiring bertambahnya nilai a
    for (int b = 0; b < n - a; b++)
    {
      printf("*");
    }

    // Cetak newline di setiap akhir baris
    printf("\n");
  }
  return 0;
}
