#include <iostream>
using namespace std;

struct bit_data
{ unsigned b0 : 1; unsigned b1 : 1;

};
int main(){


union ubyte
{ unsigned char byte; bit_data bit;
};
ubyte ascii;
int nilai;
cout<<"Contoh Penggunaan Bit-field"<<endl;
cout<<"---------------------------"<<endl;
cout<<"Masukkan ascii antara 0 s/d 255 : ";
cin>>nilai;
ascii.byte = nilai;
cout<<"\1 0 << Posisi bit"<<endl;
cout<<ascii.bit.b1<<" "<<ascii.bit.b0<<" "<<endl;
return 0;

}
