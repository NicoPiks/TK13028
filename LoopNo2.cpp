#include <iostream>
#include <string>
using namespace std; 

int main () {
    string konfirmasi;
    int nilai; 
    int lulus = 0;
    int perbaikan = 0;
    int tidak_lulus = 0;
    cout << "Apakah anda ingin memasukkan nilai?" << endl;
    getline (cin, konfirmasi);
    
    while ((konfirmasi == "ya" ) || (konfirmasi == "yes")) {
        cout << "Masukkan nilai mahasiswa: " << endl;
        cin >> nilai; 

        if (nilai >= 70) {
            lulus = lulus + 1;
        } else if ((nilai >= 50) && (nilai <70)) {
            perbaikan = perbaikan + 1;
        } else if (nilai < 50) {
            tidak_lulus = tidak_lulus + 1;
        }
        cout << "Apakah anda ingin memasukkan nilai?" << endl;
        cin >> konfirmasi;
        if ((konfirmasi == "exit") || (konfirmasi == "tidak")) {
            break;
        } 
    }
    cout << "Mahasiswa yang LULUS berjumlah: " << lulus << endl; 
    cout << "Mahasiswa yang PERLU PERBAIKAN berjumlah: " << perbaikan << endl; 
    cout << "Mahasiswa yang TIDAK LULUS berjumlah: " << tidak_lulus << endl; 
    return 0;
}
