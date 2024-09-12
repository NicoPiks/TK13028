#include <iostream>
#include <String> 
using namespace std; 

bool validasi () {
    string username, password;
    cout<<"Masukkan Nama: "<<endl;
    cin >> username; 

    cout <<"Masukkan Password: "<<endl;
    cin >> password;

    if ((username == "nicolas27") && (password == "paratu")) {
        return true;
    } else {
        return false;
    }
}

float faktorialFunct (float N) {
    if (N > 1) {
        return N*faktorialFunct(N-1);
    } else {
        return 1;
    }
}

void penambahanFunct () {
    float angka1, angka2, jumlah;
    cout << "Masukkan angka pertama yang ingin dioperasikan"<<endl;
    cin >> angka1;  
    cout << "Masukkan angka kedua yang ingin dioperasikan"<<endl;
    cin >> angka2; 
    jumlah = angka1 + angka2; 
    cout << "penambahan dari " << angka1 << " dan " << angka2 << " adalah " << jumlah <<endl;
}

void averageFunct () {
    float angka1, angka2, angka3;
    cout << "Masukkan angka pertama yang ingin dioperasikan"<<endl;
    cin >> angka1;  
    cout << "Masukkan angka kedua yang ingin dioperasikan"<<endl;
    cin >> angka2; 
    cout << "Masukkan angka ketiga yang ingin dioperasikan"<<endl;
    cin >> angka3; 

    float rata2 = (angka1 + angka2 + angka3)/3; 
    cout << "rata-rata dari " << angka1 << "," << angka2 << " dan " << angka3 << " adalah " << rata2 <<endl;
}

void pilihan() {
    string konfirmasi;
    int menu; 
    float fak, hasilfak;

    cout << "Apakah anda ingin masuk ke menu?" <<endl; 
    cin >> konfirmasi; 

    while (konfirmasi != "tidak") {
    cout << "Ketiklah angka untuk menentukan fungsi mana yang akan dioperasikan!" <<endl;
    cout << "1 untuk faktorial" <<endl; 
    cout << "2 untuk penambahan" <<endl; 
    cout << "3 untuk rata-rata" <<endl; 
    cin >> menu;

    if (menu == 1) {
       cout << "Masukkan angka"<<endl; 
       cin >> fak;
       hasilfak = faktorialFunct(fak);
       cout << "Hasil faktorial adalah "<< hasilfak<<endl;
    } else if (menu == 2) {
        penambahanFunct();
    } else if (menu == 3) {
        averageFunct();
    } else {
        cout << "Maaf angka yang dimasukkan invalid!" <<endl;
    } 
    cout << "Apakah anda ingin masuk ulang ke menu?" <<endl; 
    cin >> konfirmasi;
  }
    cout << "Terimakasih telah menggunakan program ini!" <<endl;
}

int main(){
    bool val;

    val = validasi();

    if (val) {
        pilihan(); 
    } else {
        cout << "Maaf username atau password yang dimasukkan salah!";
        return 0;
    }
}