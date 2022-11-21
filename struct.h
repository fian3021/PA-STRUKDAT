#include <iostream>
#include <string>

using namespace std;

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
