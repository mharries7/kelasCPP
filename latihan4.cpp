#include <iostream>
#include <string> 
using namespace std;

int main() {
    int bilanganAgen;
    int totalMingguan = 0; // Pembolehubah untuk kumpul semua jualan

    cout << "=== SISTEM REKOD JUALAN MINYAK WANGI ===" << endl;
    cout << "Masukkan bilangan agen yang ada: ";
    // 1. Terima input bilangan agen daripada pengguna
    cin >> ___; 

    // Loop akan berjalan mengikut jumlah agen yang dimasukkan
    for (int i = 0; i < bilanganAgen; i++) {
        string namaAgen;
        int jumlahJualan = 0;

        cout << "\n--- Agen ke-" << i + 1 << " ---" << endl;
        
        cout << "Masukkan Nama Agen: ";
        cin >> namaAgen;

        cout << "Masukkan Jumlah Botol Terjual oleh " << namaAgen << ": ";
        // 2. Terima input jumlah jualan bagi agen tersebut
        cin >> ___;

        // 3. Tambahkan jualan agen ini terus ke dalam jumlah keseluruhan (total)
        totalMingguan = totalMingguan + ___;
    }

    cout << "\n=======================================" << endl;
    cout << "TOTAL JUALAN MINYAK WANGI MINGGU INI: " << totalMingguan << " BOTOL!" << endl;
    cout << "=======================================" << endl;

    return 0;
}
