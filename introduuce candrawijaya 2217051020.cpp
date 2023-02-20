#include <iostream>
using namespace std;
int main(){
	string nama, kelas;
	int jumlah;
	string nilai;
	getline(cin,nama);
	getline(cin,kelas);
	getline(cin,nilai);
	jumlah=nama.length();
	cout<<" Izin memperkenalkan diri nama saya "<<nama<<" dengan jumlah huruf "<<jumlah<<". Saya mwhasiswa S1 Ilmu komputer dari kelas "<<kelas<<". Nilai DDP saya adalah "<<nilai<<".";
}
