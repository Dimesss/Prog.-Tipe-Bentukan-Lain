#include <iostream>
using namespace std;

enum bulan{Januari, Februari, Maret, April, Mei, Juni,
Juli, Agustus, September, Oktober, November, Desember
};
int main(){


bulan b1,b2;

b1 = Juli;
b2 = Juni;
cout<<"Tipe ENUM C++"<<endl;
cout<<"-------------"<<endl;
cout<<"nilai b1 = "<< b1<<endl; // 11
cout<<"nilai b2 = "<< b2<<endl; // 1
cout<<"\nSelisih kedua bulan di atas adalah "<<b1-b2<<endl;
return 0;

}
