#include "Buku.h"
#include <iostream>

using namespace std;

Buku::Buku() {
    id = 0;
    judul = "";
    penulis = "";
}

Buku::Buku(int id, string judul, string penulis) {
    this->id = id;
    this->judul = judul;
    this->penulis = penulis;
}

void Buku::tampilkan() {
    cout << "ID      : " << id << endl;
    cout << "Judul   : " << judul << endl;
    cout << "Penulis : " << penulis << endl;
}

int Buku::getId() {
    return id;
}

string Buku::getJudul() {
    return judul;
}

string Buku::getPenulis() {
    return penulis;
}