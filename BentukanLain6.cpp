#include <iostream>
#include <string>
using namespace std;

	struct data { 
		string nama;
		long long int stambuk;
		string kelas;

} ;
void screen(struct data bio)
{

	cout << "Stambuk : " << bio.stambuk <<endl;
	cout << "Nama : " << bio.nama <<endl;
	cout << "Kelas : " << bio.kelas <<endl;

}
int main()
{
	data bio_mhs;
	cout <<"Stambuk : "; cin>>bio_mhs.stambuk;
	cout <<"Nama : "; cin>>bio_mhs.nama;
	cout <<"Kelas : "; cin>>bio_mhs.kelas;
	screen(bio_mhs);

return 0;
}

