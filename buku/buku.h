#ifndef BUKU_H
#define BUKU_H

#include <string>

class Buku {
private:
    int id;
    std::string judul;
    std::string penulis;

public:
    Buku(int id, std::string judul, std::string penulis);

    void tampilkan();
};

#endif
