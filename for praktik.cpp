#include <iostream>
using namespace std;    

int main(){
    int a = 1;
    for(a = 1; a <= 9; a++) {
        int b = 1;
        for(b = 1; b <= a; b++) {
            cout<<b;
        }
      cout<<endl;
    }
    return 0;
}