#include "User.h"
#include <iostream>

using namespace std;

User::User() {
    id = 0;
    nama = "";
}

User::User(int id, string nama) {
    this->id = id;
    this->nama = nama;
}

void User::tampilkan() {
    cout << "ID User : " << id << endl;
    cout << "Nama    : " << nama << endl;
}

int User::getId() {
    return id;
}

string User::getNama() {
    return nama;
}