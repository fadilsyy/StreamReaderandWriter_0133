#include <iostream>
using namespace std;

int main() {
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0,5; // melemparkan sbuah integer maka
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}