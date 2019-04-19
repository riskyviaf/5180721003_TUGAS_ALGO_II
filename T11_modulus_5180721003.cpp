#include <iostream>
using namespace std;

int modul(int awal, int akhir){
        return awal%akhir;
}
main(){
int awal,akhir;
cout<<"Menghitung Modulus Dalam Fungsi"<<endl;
cout<<"Input Nilai Awal :";
cin>>awal;
cout<<"Input Nilai Modulus :";
cin>>akhir;
cout<<awal<<" modulus "<<akhir<<" = "<<modul(awal,akhir);
}
