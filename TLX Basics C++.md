

## BAB 1

### A. Program Pertamaku
diselesaikan oleh Athar

```cpp
#include <iostream>

int main() {
    std::cout << "Halo, dunia!" << std::endl;
}

```

### B. Mencetak dengan std::cout
diselesaikan oleh Athar
```cpp
#include <iostream>

int main() {
    std::cout << "Halo, dunia!"<< std::endl;
std::cout << "Aku semangat belajar C++!"<< std::endl;}
```

### C. Mencetak Bilangan
diselesaikan oleh Athar
```cpp
#include <iostream>

int main() {
    std::cout << "Pak Dengklek memiliki " << 75 << " ekor bebek." << std::endl;
}

```

### D. Menjumlahkan Bilangan
diselesaikan oleh Athar
```cpp
#include <iostream>

int main() {
    std::cout << "Pak Dengklek memiliki " << 738 + 519 << " ekor bebek." << std::endl;
}

```

### E. String atau Bilangan?
diselesaikan oleh Athar

### F. Mengukur Kandang
diselesaikan oleh Athar
```cpp
#include <iostream>

int main() {
    // cetak luas kandang
    std::cout << 364 * 79 << std::endl;

    // cetak keliling kandang
    std::cout << 364 + 364 + 79 + 79 << std::endl;
}

```

### G. Rangkuman: Keluaran dan Ekspresi Sederhana
diselesaikan oleh Athar

## BAB 2

### A. #include dan std::
diselesaikan oleh Athar

### B. Perkenalan Variabel
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int panjang = 364;
    int lebar = 79;

    // cetak luas kandang
    cout << panjang * lebar << endl;

    // cetak keliling kandang
    cout << 2 * (panjang + lebar) << endl;
}

```

### C. Memperbarui Nilai Variabel
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    // kata sandi bulan pertama
    int sandi = 174;
    cout << sandi << endl;

    // kata sandi bulan kedua
    sandi = sandi * 23;
    cout << sandi << endl;

    // kata sandi bulan ketiga
    sandi = sandi * 23;
    cout << sandi << endl;
}

```

###  D. Kuis Perubahan Nilai Variabel
diselesaikan oleh Athar

### E. Perkenalan Tipe Data String
diselesaikan oleh Athar
```cpp
#include <iostream> // untuk menggunakan cout dan endl
#include <string>   // untuk menggunakan string
using namespace std;

int main() {
    int tanggal = 15;
    int tahun = 2023;

    // jangan lupa bahwa string perlu diapit dengan kutip dua
    string bulan = "Februari"; 

    // cetak kata sandi
    cout << tahun +10 << "-" << bulan << "-" << tanggal +7 << endl;
}

```

###  F. Aturan Variabel
diselesaikan oleh Athar

###  G. Jual-Beli Bebek
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
	int jantan, betina;
 
    // banyaknya bebek saat ini
	jantan = 63;
	betina = 192;
 
    // setelah bulan pertama
	betina = betina + jantan;
	jantan = jantan - jantan / 3;
 
    // setelah bulan kedua
	jantan = jantan + betina;
	betina = betina - 10;
 
    // cetak total bebek
	cout << jantan + betina << endl;
}

```

### H. Rangkuman: Variabel dan Tipe Data
diselesaikan oleh Athar

## BAB 3

### A. Variasi Operasi Assignment
diselesaikan oleh Athar

###  B. Membeli Kandang
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;

    // bulan pertama
    luas_kandang += 7;
    cout << luas_kandang << endl;

    // bulan kedua
    luas_kandang += 7;
    cout << luas_kandang << endl;

    // bulan ketiga
    luas_kandang += 7;
    cout << luas_kandang << endl;
}

```

###  C. Perkenalan While
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;

    while (luas_kandang < 33) {
        luas_kandang += 7;
        cout << luas_kandang << endl;


    }
}

```

###  D. Pendalaman While
diselesaikan oleh Athar

###  E. Membeli Kandang II
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;
    int nomor_baris = 1;

    while (nomor_baris <= 3) {
        luas_kandang += 7;
        cout << nomor_baris << ": "  << luas_kandang << endl;

        nomor_baris += 1;
    }
}

```

###  F. Membeli Kandang III
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;
    
    // Menyatakan sudah berapa bulan (berapa kali) Pak Dengklek
    // membeli kandang baru.
    int total_bulan = 0;

    // Menyatakan total luas kandang yang dimiliki Pak Dengklek.
    // Pada mulanya, totalnya adalah luas kandang lama Pak Dengklek.
    int total_luas_kandang = luas_kandang;

    while (total_bulan < 10) {
        luas_kandang += 7;
        total_luas_kandang += luas_kandang;

        total_bulan += 1;
    }

    cout << total_luas_kandang << endl;
}

```

###  G. Membeli Kandang IV
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    // Menyatakan total banyaknya kandang yang dimiliki Pak Dengklek.
    // Pada mulanya, Pak Dengklek memiliki 1 kandang seluas 12 meter persegi.
    int total_kandang = 1;
    int luas_kandang = 12;

    int total_luas_kandang = luas_kandang;

    while (total_luas_kandang < 800) {
        luas_kandang += 7;
        total_luas_kandang += luas_kandang;

        total_kandang += 1;
    }

    cout << total_kandang << endl;
}

```

###  H. Jual-Beli Bebek II
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int jantan = 0, betina = 0;
    int tanggal = 1;

    while (betina <= 10 * jantan) {
        jantan = jantan + 1;
        betina += tanggal;
        tanggal = tanggal + 1;
    }

    cout << tanggal << endl;
}

```

###  I. Rangkuman: Perulangan
diselesaikan oleh Athar

### BAB 4

###  A. Perkenalan If
diselesaikan oleh Athar

###  B. Menggiring Bebek
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int jantan = 67;
    int betina = 98;

    if (jantan % 2 == 0) {
        cout << "banyaknya bebek jantan adalah bilangan genap" << endl;
    }

    if (betina % 2 == 0) {
        cout << "banyaknya bebek betina adalah bilangan genap" << endl;
    }
}

```

###  C. Perkenalan Else
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int total_bebek = 67 + 98;

    if (total_bebek % 2 == 0) {
        cout << "total banyaknya bebek adalah bilangan genap" << endl;
    } else {
        cout << "total banyaknya bebek adalah bilangan ganjil" << endl;
    }
}

```

###  D. Perkenalan Else If
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int total_bebek = 67 + 98;

    if (total_bebek % 13 == 0) {
        cout << 13 << endl;
    }
    else if (total_bebek % 11 == 0) {
        cout << 11 << endl;
    }
    else if (total_bebek % 5 == 0) {
        cout << 5 << endl;
    }
    else if (total_bebek % 3 == 0) {
        cout << 3 << endl;
    } else {
        cout << 1 << endl;
    }
}
```

###  E. Kuis If
diselesaikan oleh Athar

###  F. Pendalaman Ekspresi Boolean
diselesaikan oleh Athar

###  G. Mengukur Kandang II
diselesaikan oleh Athar
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int A = 364 * 79;
    int B = 243 * 99;
    int C = 189 * 155;

    string terbesar, terkecil;

    if (A > B && A > C) {
        // jika A lebih besar dari B dan C, maka A terbesar
        terbesar = "A";

        // cari yang terkecil, yakni yang lebih kecil antara B dan C
        if (B < C) {
            terkecil = "B";
        } else {
            terkecil = "C";
        }
    } else if (B > A && C > B) {
        // jika B lebih besar dari A dan C, maka B terbesar
        terbesar = "B";

        // cari yang terkecil, yakni yang lebih kecil antara A dan C
        if (C > A) {
            terkecil = "A";
        } else {
            terkecil = "C";
        }
    } else {
        // sampai sini, maka C terbesar
        terbesar = "C";
        
        
        if (A > B) {
            terkecil = "B";
        } else terkecil = "A";
        

   // cari yang terkecil, yakni yang lebih kecil antara A dan
   
   
    }

    cout << terbesar << endl;
    cout << terkecil << endl;
}

```

###  H. Rangkuman: Percabangan
diselesaikan oleh Athar

## BAB 5

###  A. Perkenalan For
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int sisi = 121; sisi <= 125; sisi += 1) {
        cout << sisi * sisi << endl;
    }
}

```

###  B. Perkenalan Tipe Data Boolean
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    bool ada_yang_dijual = false;

    for (int sisi = 121; sisi <= 125; sisi++) {
        bool kelipatan_2 = sisi % 2 == 0;
        bool kelipatan_3 = sisi % 3 == 0;

        if (kelipatan_2) {
            ada_yang_dijual = true;
        }
    }

    if (ada_yang_dijual) {
        cout << "ada" << endl;
    } else {
        cout << "tidak ada" << endl;
    }
}

```

###  C. Perkenalan Continue dan Break
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int luas = 100000; luas <= 200000; luas++) {
        // Jika luas ini bukan bilangan genap, iterasi ini bisa dihentikan
        // (dilewati), karena luas ini pasti tidak memenuhi syarat.
        if ( luas % 2 != 0) {
            continue;
        }
        
        // Sekarang, kita akan cek apakah luas ini merupakan bilangan kuadrat sempurna.
        bool kuadrat_sempurna = false;

        for (int k = 1; k <= luas; k++) {
            // Jika luas adalah tepat k * k,
            // maka luas ini merupakan bilangan kuadrat sempurna.
            if ( luas == k * k) {
                kuadrat_sempurna = true;
                break;
            }
        }

        if (kuadrat_sempurna) {
            // Kita telah menemukan luas terkecil yang memenuhi seluruh syarat.

            // Cetak luas ini.
            cout << luas << endl;

            // Kita tidak perlu lagi melanjutkan perulangan.
            break;
        }
    }
}

```

###  D. Kuis Perulangan & Percabangan
diselesaikan oleh Athar

###  E. Mencari Pola I
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 1; i <= N; i++) {
        // cetak i buah "*"
        for (j = 1; j <= i; j++) {
            cout << "*";
        }

        // sisanya, cetak "."
        for (j => i) {
            cout << ".";
        }

        cout << endl;
    }
}

```

###  F. Mencari Pola II
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == 10 || j == N || j == 1) {
                // jika baris atau kolom saat ini adalah yang pertama atau terakhir, cetak bintang
                cout << "*";
            } else {
                // selain itu, cetak titik
                cout << ".";
            }
        }
        cout << endl;
    }
}

```

###  G. Mencari Pola III
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 1; i <= N; i++) {
        for( int j = 1; j <= N; j++){
            if(j == i || j - 1 == N - i){
                cout << "*";
            }
            
            else{
                cout << ".";
            }
        }
    
        cout << endl;
    }
    
}

```

###  H. Rangkuman: Perulangan & Percabangan
diselesaikan oleh Athar

### BAB 6

###  A. Toko Kandang
diselesaikan oleh Athar
```cpp
#include <iostream>
using namespace std;

int main() {
    int luas1 = 225 * 335;
    int luas2 = 215 * 394;
    int luas3 = 198 * 400;
    int luas4 = 314 * 298;
    int luas5 = 299 * 278;

    int hasil = 0;

    if ( luas1 >= 80000) {
        hasil++;
    }

    if ( luas2 >= 80000) {
        hasil++;
    }

    if ( luas3 >= 80000) {
        hasil++;
    }
    
    if ( luas4 >= 80000) {
        hasil++;
    }
    
    if ( luas5 >= 80000) {
        hasil++;
    }




    cout << hasil << endl;
}

```





