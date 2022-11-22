#include <iostream>
#include <conio.h>
#include <string>
#include "struct.h"
using namespace std;

// User
void tambahdata(node **Head){
	int i;
	node *nodebaru = new node;
	cout <<"Nama Ibu	\t: " ; fflush(stdin); getline (cin, nodebaru->datas.ibu);
	cout <<"Nama Anak	\t: " ; fflush(stdin); getline (cin, nodebaru->datas.anak);
	cout <<"Gender		\t: " ; fflush(stdin); getline (cin, nodebaru->datas.gender);
	cout <<"Usia		\t: " ; fflush(stdin); getline (cin, nodebaru->datas.usia);
	cout <<"Tinggi Badan\t: " ; fflush(stdin); getline (cin, nodebaru->datas.tinggi);
	cout <<"Berat Badan \t: " ; fflush(stdin); getline (cin, nodebaru->datas.berat);
	nodebaru->next = *Head;
	*Head = nodebaru;
	i++;
}

void tampildata(node *Head){
	if (Head==NULL){
	cout << "linked list kosong" << endl;
	}
	int i = 1;
	while (Head !=NULL){
		cout <<"Nama Ibu	\t: " << Head->datas.ibu << endl;
		cout <<"Nama Anak	\t: " << Head->datas.anak << endl;
		cout <<"Gender		\t: " << Head->datas.gender << endl;
		cout <<"Usia		\t: " << Head->datas.usia << endl;
		cout <<"Tinggi Badan\t: " << Head->datas.tinggi << endl;
		cout <<"Berat Badan \t: " << Head->datas.berat << endl;
		cout << endl;
		Head=Head->next;
		i++
	}
}

//void updatedata(node **Head){
//	if (Head==NULL){
//		cout << "linked list kosong" << endl;
//	}
//	int ubah,ubah2,i = 1;
//	cout << "Data Keberapa Yang Ingin di Ubah :"
//	cin >> ubah;
//	node *temp = (*Head);
//	while (temp !=NULL){
//		if (i==ubah){
//			cout << "Data apa yang ingin diubah?\n"
//		}
//	}
//}

