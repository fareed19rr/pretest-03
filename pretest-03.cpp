/*
Nama : Muhamad Farid Ridho Rambe
NPM : 140810180033
Nama Program : pretest-03
Tanggal Buat : 12/03/2019
Deskripsi : Membuat data mahasiswa lalu mengurutkan sesuai nama
*/
#include <iostream>
#include <string.h>
using namespace std;

struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n){
	cout<<"Masukkan banyak data : ";
	cin>>n;
}

void inputMhs(larikMhs& mhs,int n){
	for(int i=0;i<n;i++){
		cout<<"Masukkan data ke-"<<i+1<<endl;
		
		cout<<"Masukkan NPM :";
		cin>>mhs[i].npm;
		
		cout<<"Masukkan Nama : ";
		cin>>mhs[i].nama;
		
		cout<<"Masukkan IPK : ";
		cin>>mhs[i].ipk;
	}
}

void sortNPM(larikMhs mhs,int n){
	for(int i=0;i<n;i++){
		int j,bd;
		j=i;
		for(int k=i+1;k<n;k++){
			bd=strcmp(mhs[j].npm,mhs[k].npm);
			if(bd==1){
				j=k;
			}
			else if(j!=i){
				char temp[1][30]; 
                strcpy(temp[0],mhs[j].npm);
                strcpy(mhs[j].npm,mhs[i].npm);
                strcpy(mhs[i].npm,temp[0]);
			}
		}
	}
		
}

void cetakMhs (larikMhs& mhs,int n){
	for(int i=0;i<n;i++){
		cout<<"Data-"<<i+1<<endl;
		cout<<"NPM : "<<mhs[i].npm<<endl;
		cout<<"Nama : "<<mhs[i].nama<<endl;
		cout<<"IPK : "<<mhs[i].ipk<<endl;
	}
}

int main(){
	int n;
	larikMhs mhs;
	banyakData(n);
	inputMhs(mhs,n);
	sortNPM(mhs,n);
	cetakMhs(mhs,n);
}
