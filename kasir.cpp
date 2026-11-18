#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int TB;              
   
    cout << "APLIKASI KASIR SEDERHANA"<<endl;
    cout << "========================"<<endl;
    cout << "========================"<<endl;
    cout << "1. Member"<<endl;
    cout << "2. Non Member"<<endl;
    cout << "Pilih status pembeli (1/2): ";
    cin >> pilihan;

    cout << "Masukkan total belanja keseluruhan (Rp): ";
    cin >> TB;

   

    
    if (pilihan == 1) { // (Member)
        if (TB >= 100000){
            TB = TB - (TB * 20 / 100);
        }

        else if (TB >= 500000){
            TB = TB - (TB * 15 / 100);
        }
            
        else if (TB >= 1000000){
            TB = TB - (TB * 10 / 100);

        }
            
    }
    else if (pilihan == 2) { // (Non Member)
        if (TB >= 1000000){
            TB = TB - (TB * 15 / 100);
        }
            
        else if (TB >= 500000){
            TB = TB - (TB * 10 / 100);
        }
        

    }

    

    cout << "==========================="<<endl;
    cout << "\n=== STRUK PEMBAYARAN ==="<<endl;
    cout << "Total Belanja  : Rp " << TB << endl;
    cout << "=========================="<<endl;
    

    return 0;
}