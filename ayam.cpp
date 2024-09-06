#include <iostream>
using namespace std; 

int main () {
    int count = 0; 
    int banyak;
    string konfirmasi;
    cout<<"Apakah anda ingin menjalankan fungsi?"<<endl; 
    cin >> konfirmasi; 

    while (konfirmasi != "exit" ) {
        cout<<"Masukkan jumlah pencetakkan: "<<endl;
        cin>>banyak;
        while (count <= banyak) {
        cout<<"Program C++"<<endl;
        count = count + 1;
        }
        cout<<"Apakah anda ingin menjalankan fungsi?"<<endl; 
        cin >> konfirmasi;
    }  
    if (konfirmasi == "exit") {
        cout<<"ok";
}