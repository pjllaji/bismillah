  #include <iostream>
using namespace std;

int main() { 
    char nama[10];
    int y,z;
    cout<<"Masukkan Nama" <<endl;

    for(y=0; y<10; y++) {
      cout<<"a["<<y<<"] = "; cin>>nama[y];
      
    }

    cout<<'\n';
    cout<<"Menampilkan Nama yang telah dimasukkan"<<endl;
    for(z=0; z<10; z++) {
        cout<<"Nama saya adalah :  ";
        cout<<z+1<<" : " << nama[z]<<endl;

    }
    cout<<endl;
    cout<<"Nama saya adalah : ";
    for (z = 0; z < 10; z++) {
        cout << nama[z];
    }
}