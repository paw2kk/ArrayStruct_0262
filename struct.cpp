#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
}

int main(){
  mahasiswa mhs;

  mhs.nim = "20220140102";
  mhs.nama = "Abra Yudhistira";
  mhs.alamat = "Kasihan";

  cout << "Masukkan Nim = ";
  cin >> mhs.nim;
  cout << "Masukkan NAMA = ";
  cin >> mhs.nama;
  cout << "Masukkan Alamat = ";
  cin >> mhs.alamat;

  //menampilkan data struct
  cout << endl;


}