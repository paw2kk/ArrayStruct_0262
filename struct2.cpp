#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
  mahasiswa mhs;

  cout << "Masukkan Nim = ";
  cin >> mhs.nim;
  cout << "Masukkan NAMA = ";
  cin >> mhs.nama;
  cout << "Masukkan Alamat Desa = ";
  cin >> mhs.alamat.desa;
  cout << "Masukkan Alamat Kota = ";
  cin >> mhs.alamat.kota;

  //menampilkan data struct
  cout << endl;
  cout << "NIM = " << mhs.nim << endl;
  cout << "Nama = " << mhs.nama << endl;
  cout << "Desa = " << mhs.alamat.desa << endl;
  cout << "kota = " << mhs.alamat.kota << endl;
}