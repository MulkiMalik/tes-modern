#include "buku.h"
#include <iostream>

Buku::Buku(int id, std::string judul, std::string penulis) {
    this->id = id;
    this->judul = judul;
    this->penulis = penulis;
}

void Buku::tampilkan() {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Judul: " << judul << std::endl;
    std::cout << "Penulis: " << penulis << std::endl;
}