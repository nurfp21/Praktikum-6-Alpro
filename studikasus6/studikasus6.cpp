#include <iostream>
using namespace std;
class hitung {
  public:
    void input();
    void proses();
    void output();

  private:
    int byk_mhs, maks, min, jumlah;
    float rata;
    int nilai[50];
    string matkul, dosen;
};

void hitung::input() {
  cout << "Nama Dosen = "; cin>>dosen;
  cout << "Nama matkul = ";
  cin >> matkul;
  cout << "Masukkan banyak mahasiswa = ";
  cin >> byk_mhs;
  for (int i = 1; i <= byk_mhs; i++) {
    cout << "nilai mahasiswa ke-" << i << " = ";
    cin >> nilai[i];
  }
}

void hitung::proses() {
  maks = nilai[1];
  min = nilai[1];
  for (int i = 1; i <= byk_mhs; i++) {
    if (maks < nilai[i]) {
      maks = nilai[i];
    }
    else if (min > nilai[i]) {
      min = nilai[i];
    }
  }

  jumlah = 0;
  for (int i = 1; i <= byk_mhs; i++)
  {
    jumlah = jumlah + nilai[i];
  }
  rata = jumlah / byk_mhs;
}

void hitung::output() {
  cout<<endl;
  cout<<"=========================="<<endl;
  cout<<"Dosen : "<<dosen<<endl;
  cout<<"Mata Kuliah : "<<matkul<<endl;
  cout<<"Daftar nilai :"<<endl;
  for(int i=1; i<=byk_mhs; i++)
  {
    cout<<i<<". "<<nilai[i]<<endl; 
  }
  cout << "\nNilai terbesar adalah : " << maks << endl;
  cout << "Nilai terkecil adalah : " << min << endl;
  cout << "Jumlah = " << jumlah << endl;
  cout << "Rata-rata = " << rata<<endl;
}

int main() {
  hitung x;
  x.input();
  x.proses();
  x.output();
}
