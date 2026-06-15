#ifndef BUKU_H
#define BUKU_H

#include <string>

class Buku {
private:
    int id;
    std::string judul;
    std::string penulis;

public:
    Buku();
    Buku(int id, std::string judul, std::string penulis);

    void tampilkan();

    int getId();
    std::string getJudul();
    std::string getPenulis();
};

#endif