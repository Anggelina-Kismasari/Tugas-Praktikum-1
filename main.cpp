//Nama  : Anggelina Kismasari
//Kelas : Manajemen Informatika 2020B
//NIM   : 20051397034


#include <iostream>
#include <conio.h>

/* Membuat Program Perhitungan Billing Warnet */

using namespace std;
int main(void)
{
	char nama[40];
	int nokomptr,jam1,mnt1,dtk1,jam2,mnt2,dtk2,jmldtk,totalbayar,jmluang,sisa;
	int tarif=5000;
	
	cout<<"=============================="<<endl;
	cout<<"Program Biaya Billing Warnet"<<endl;
	cout<<"=============================="<<endl;
	cout<<"No Komputer : ";cin>>nokomptr;
	cout<<"Nama User   : ";cin>>nama;
	cout<<"=============================="<<endl;
	cout<<"MULAI       : "<<endl;
	cout<<"Jam Mulai   : ";cin>>jam1;
	cout<<"Mnt Mulai   : ";cin>>mnt1;
	cout<<"Dtk Mulai   : ";cin>>dtk1;
	cout<<"=============================="<<endl;
	cout<<"SELESAI     : "<<endl;
	cout<<"Jam Selesai : ";cin>>jam2;
	cout<<"Mnt Selesai : ";cin>>mnt2;
	cout<<"Dtk Selesai : ";cin>>dtk2;
	cout<<"=============================="<<endl;
	cout<<endl;
	
	jmldtk = ((jam2-jam1)*3600) + ((mnt2-mnt1)*60) + (dtk2-dtk1);
	totalbayar = jmldtk * tarif / 3600;
	
	cout<<"No Komputer     : "<<nokomptr<<endl;
	cout<<"Nama User       : "<<nama<<endl;
	cout<<"Lama Penggunaan : "<<(jam2-jam1)<< "Jam" <<(mnt2-mnt1)<< "Menit" <<(dtk2-dtk1)<< "Detik" <<endl;
	cout<<"Total           : Rp."<<totalbayar<<endl;
	cout<<"=============================="<<endl;
	
	do {
		cout<<"Jumlah Uang : Rp.";cin>>jmluang;
		if (jmluang<totalbayar)
		cout<<"Maaf, uang anda kurang\n"<<endl;
	}
	 while (jmluang<totalbayar);
	 
	 sisa=jmluang-totalbayar;
	 cout<<"Kembalian Uang : Rp."<<sisa<<"\n"<<endl;
	 cout<<"============================="<<endl;
	 cout<<"Terima Kasih, Silahkan Berkunjung Kembali"<<endl;
	return 0;
}
