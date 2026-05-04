#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;

public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

// constructor default
mahasiswa::mahasiswa() {
}

// constructor hanya NIM
mahasiswa::mahasiswa(int iNim) {
    nim = iNim; // definisi hanya NIM
}
