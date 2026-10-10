#include <iostream>
using namespace std;

int main() {
    char gred = 'A'; // Pembolehubah jenis huruf (character)

    // 1. Masukkan pembolehubah gred yang mahu disemak di dalam kurungan
    switch (___) {
        
        // 2. Isikan kata kunci untuk kes jika gred adalah 'A'
        ___ 'A':
            cout << "Gred A: Cemerlang!" << endl;
            break; // Berhenti di sini jika gred adalah A

        case 'B':
            cout << "Gred B: Bagus!" << endl;
            // 3. Isikan arahan wajib untuk "berhenti" supaya tidak bocor ke kes C
            ___;

        case 'C':
            cout << "Gred C: Lulus." << endl;
            break;
            
        // 4. Isikan kata kunci jika gred yang dimasukkan tiada dalam senarai (contoh: Gred F)
        ___:
            cout << "Gred tidak sah." << endl;
    }

    return 0;
}
