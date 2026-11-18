#include <iostream>
using namespace std;

int main() {
    int a[6];
    int y,z;
    cout<<"Masukkan Nilai Array" <<endl;
    for(y=0;  y<6;y++){
        cout<<"a["<<y<<"] = "; cin>>a[y];
    }

    cout<<'\n';
    cout<<"Menampilkan nilai yang telah dimasukkan"<<endl;
    for(z=0; z<6; z++) {
        cout<<"Nilai yang terdapat pada elemen ke- ";
        cout<<z+1<<" : " << a[z]<<endl;
    }
    return 0;
}

