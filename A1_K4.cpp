#include <iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

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
    Node *prev;
};

// Akun Admin
string username = "admin";
string password = "admin";
// Akun User
string user;
string pass; 

// Prototype
void login();
void regis();
void login_admin();


// Fungsi Utama
int main() {
    int choice, role;
	cout<<"************* LOGIN ***************\n";
	cout<<"1. LOGIN";
	cout<<"\n2. REGISTER";
	cout<<"\n3. ADMIN";
	cout<<"\nMasukkan Pilihan Anda :";
	cin>>choice;
	switch(choice){
		case 1:
			login();
			break;
		case 2:
			regis();
			break;
		case 3:
			login_admin();
			break;
 		case 4:
			cout<<"Terimakasih telah menggunakan program ini\n";
			break;
		default:
			cout<<"maaf pilihan yang anda masukkan salah\n";
			main();			
	}
};


void regis(){
	string reguser, regpass, kompass;
	system("cls");
	cout<<"masukkan username :";
	cin>>reguser;
	cout<<"masukkan password :";
	cin>>regpass;
	cout<<"konfirmasi password :";
	cin>>kompass;
	
	ofstream reg("database.txt, ios::app");
	reg<<reguser<<' '<<regpass<<' '<<kompass<<endl;
	system("cls");
	cout<<"registrasi berhasil\n";
	main();
}

void login(){
	int exist;
	string user, pass, u, p;
	system("cls");
	cout<<"masukkan username :";
	cin>>user;
	cout<<"masukkan password :";
	cin>>pass;
	
	ifstream input("databse.txt");
	
	while(input>>u>>p){
		if(u == user && p == pass){
			exist = 1;
		}
	}
	input.close();
	if(exist == 1){
		cout<<"selamat datang"<<user<<"\nselamat datang\n";
		cin.get();
		cin.get();
		main();
	}
	else{
		cout<<"login tidak berhasil";
		cin.get();
		cin.get();
		main();
	}
}

void login_admin(){
	int i;
	char ch;
	string user, pass;
	cout<<"Selamat datang admin";
		for (i=1; i<3; i++){
			cout<<"Masukkan Username : "; cin >> user;
			cout<<"Masukkan Password : ";
			ch = getch();
			while(ch != 13){
				pass.push_back(ch);
				cout << '*';
				ch = getch();
			}
			if (user == "admin" && pass == "admin"){
				cout <<"\n\n Anda berhasil login\n";
			}
			else{
				cout<<"\n\n username / password salah\n";
			}
		}
		while (i <= 3);
		cout<<"anda telah salah 3x";
		getch();
}