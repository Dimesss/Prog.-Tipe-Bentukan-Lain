#include <iostream>
using namespace std;

struct data {
	string nama;
	long long int nim;
	string kelas;
};
int main(){
	data n[3];
	for(int i=0; i<1; i++){
		cout<<"Nama\t: ";
		cin>>n[i].nama;
		cout<<"NIM\t: ";
		cin>>n[i].nim;
		cout<<"Kelas\t: ";
		cin>>n[i].kelas;
		cout<<endl;
	}
	for (int i=0; i<1; i++){
		cout<<"Data Yang Dimasukkan\n\n";
		
		cout<<"Nama\t: "<<n[i].nama<<endl;
		cout<<"NIM\t: "<<n[i].nim<<endl;
		cout<<"Kelas\t: "<<n[i].kelas<<endl;
	}
	return 0;
}
