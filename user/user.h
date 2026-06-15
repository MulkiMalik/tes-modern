#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    int id;
    std::string nama;

public:
    User();
    User(int id, std::string nama);

    void tampilkan();

    int getId();
    std::string getNama();
};

#endif