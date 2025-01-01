#include <iostream>
#include <cstdlib> // untuk fungsi rand() dan srand()
#include <ctime> // untuk fungsi time()
using namespace std;

// Fungsi untuk menghasilkan ramalan khodam secara acak
string cekKhodam() {
// Daftar khodam fiksi
string khodamList[] = {
"Khodam Harimau Putih",
"Khodam Naga Emas",
"Khodam Macan Hitam",
"Khodam Garuda Sakti",
"Khodam Pendekar Laut Selatan",
"Khodam Serigala Perak",
"Khodam Kuda Emas",
"Khodam Elang Hitam",
"Khodam Ratu Pantai Selatan",
"Khodam Singa Api"
};

// Menghasilkan indeks acak untuk memilih khodam dari daftar
int randomIndex = rand() % 10;

// Mengembalikan nama khodam yang dipilih secara acak
return khodamList[randomIndex];
}

int main() {
// Inisialisasi random seed

srand(time(0));

// Deklarasi variabel untuk input pengguna
string nama;
int hari, bulan, tahun;

// Meminta input dari pengguna
cout << "Selamat datang di cek khodam!" << endl;
cout << "Masukkan nama Anda: ";
getline(cin, nama); // Mengambil nama lengkap
cout << "Masukkan tanggal lahir Anda (1-31): ";
cin >> hari;
cout << "Masukkan bulan lahir Anda (1-12): ";
cin >> bulan;
cout << "Masukkan tahun lahir Anda: ";
cin >> tahun;

// Menampilkan khodam yang terpilih secara acak
cout << endl;
cout << "Halo, " << nama << "! Berdasarkan tanggal lahir Anda, khodam Anda adalah: " <<
cekKhodam() << endl;

return 0;
}