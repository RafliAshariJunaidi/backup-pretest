//Nama 	: Rafli Ashari Junaidi
//NPM  	: 2117051067
//Kelas   : S1 Ilmu Komputer (D)

//	Note 
//
//int i = 1 : itu initial/ kondisi awal. Dimana i itu mulai dari angka 1
//
//i<=10 : itu sebagai batas nya, mau sampe berapa. Berhubung batasnya 10, maka akan dilakukan sampai batas 10 aja
//
//i++ : ini kek sebuah penambahan, jadi abis looping pertama, i itu akan ditambah satu terus sampe menyentuh batas nya 10


#include <iostream>

using namespace std;

int main (){
	
	int batas,loop;
	cin>>loop;
	
	cout<<" Masukkan angka batas kelipatan  :";

	cin>>batas;

	cout<<endl;

	cout<<"      ";

	for(loop;loop<=batas;loop++)
	{
	if(loop%3==0)

	cout<<loop<<" ";
	}

	return 0;
}
