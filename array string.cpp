#include <iostream>
using namespace std;    

int main() 
{
    string Y = "PUNJUL";
    //bisa juga dengan: char Y[6] = "PUNJUL";

    for (int z=0; z<7; z++)
    {
        cout<<Y[z];
    }

    cout<<endl;
    cout<<"Ukuran array: "<<Y.size()<<endl;

    return 0;
}