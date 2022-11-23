#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

// Deklarasi Struct
struct posyandu {
    int kode_pendaftaran;
    string nama_ibu;
    string nama_anak;
    char gender;
    int usia;
    float tinggi;
    float berat;
};

struct Node {
    posyandu data; 
    Node *next;
};

// User
void tambahdata(Node **Head){
	int i = 1;
	
	cout <<"--------------------------------------------------------" << endl;
	cout <<"        ***************************************         " << endl;
	cout <<"             FORM PENDATAAN IMUNISASI ANAK              " << endl;
	cout <<"        ***************************************         " << endl;
	cout <<"--------------------------------------------------------" << endl;
	Node *nodebaru = new Node();
	cout <<" Nama Ibu	\t: " ; fflush(stdin); getline (cin, nodebaru->data.nama_ibu);
	cout <<" Nama Anak	\t: " ; fflush(stdin); getline (cin, nodebaru->data.nama_anak);
	cout <<" Gender		\t: " ; cin >> nodebaru->data.gender;
	cout <<" Usia		\t: " ; cin >> nodebaru->data.usia;
	cout <<" Tinggi Badan\t: " ; cin >> nodebaru->data.tinggi;
	cout <<" Berat Badan \t: " ; cin >> nodebaru->data.berat;
	cout <<"---------------------------------------------------------" <<endl;
	cout << endl;
	cout <<"-----------------Data Telah Berhasil Di Input------------" <<endl;
	nodebaru->next = *Head;
	nodebaru->next = NULL;
	if (*Head == NULL){
		*Head = nodebaru;
		return;
	};
	
	Node *temp = *Head;
	while(temp->next !=NULL){
		temp = temp->next;
	}
	temp->next = nodebaru;
//	*Head = nodebaru;
//	i++;
}

void tampildata(Node *Head){
	if (Head==NULL){
	cout << "linked list kosong" << endl;
	}
	int i = 1;
	while (Head !=NULL){
		cout <<"--------------------------------------------------------" << endl;
		cout <<"        ***************************************         " << endl;
		cout <<"            Data Anak Yang Telah Terdaftar              " << endl;
		cout <<"        ***************************************         " << endl;
		cout <<"--------------------------------------------------------" << endl;
		cout <<"Nama Ibu	\t: " << Head->data.nama_ibu << endl;
		cout <<"Nama Anak	\t: " << Head->data.nama_anak << endl;
		cout <<"Gender		\t: " << Head->data.gender << endl;
		cout <<"Usia		\t: " << Head->data.usia << endl;
		cout <<"Tinggi Badan\t: " << Head->data.tinggi << endl;
		cout <<"Berat Badan \t: " << Head->data.berat << endl;
		cout << endl;
		Head=Head->next;
		i++;
	}
}



