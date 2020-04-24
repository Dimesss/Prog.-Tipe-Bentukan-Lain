#include <iostream>
#include <string.h>
using namespace std;

	struct data{
		long long int NIM;
		string nama;
		string ttl;
		string fakultas;
		string kelas;
	};
	
int main ()
{
	struct data *identitas, biodata;
	biodata.NIM = 13020190243;
	biodata.nama = "Dimas Anggorojati Lastiko Bramanatyo";
	biodata.ttl = "Makassar, 27 Juni 2001";
	biodata.fakultas = "Teknik Informatika";
	biodata.kelas ="A5";
	
	identitas=&biodata;
	
	cout<<"NIM\t \t: "<<identitas ->NIM<<endl;
	cout<<"Nama\t\t: "<<identitas ->nama<<endl;
	cout<<"TTL\t\t: "<<identitas->ttl<<endl;
	cout<<"Fakultas\t: "<<identitas->fakultas<<endl;
	cout<<"Kelas\t\t: "<<identitas->kelas<<endl;
	
	return 0;
}
