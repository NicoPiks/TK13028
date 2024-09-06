#include <iostream>
using namespace std; 

int main () {
    int count = 1; 
    string konfirmasi;
    cout<<"Apakah anda ingin menjalankan fungsi?"<<endl; 
    cin >> konfirmasi; 

    while (konfirmasi != "exit") {
        cout<<"Program C++ ke-"<<count<<endl;
        count = count + 1;
        cout<<"Apakah anda ingin menjalankan fungsi?"<<endl; 
        cin >> konfirmasi;
    }
    if (konfirmasi == "exit") {
            cout<<"ok"<<endl;
        }
}