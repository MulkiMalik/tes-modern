#include <iostream>
#include "buku/Buku.h"
#include "user/User.h"

using namespace std;

int main() {

    Buku buku1(1, "Laskar Pelangi", "Andrea Hirata");
    User user1(101, "Mulki");

    cout << "=== SISTEM PERPUSTAKAAN ===" << endl;
    cout << endl;

    buku1.tampilkan();

    cout << endl;

    user1.tampilkan();

    return 0;
}