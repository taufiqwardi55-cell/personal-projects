#include <iostream>
using namespace std;

int main() {
    int subjects;
    float totalPoint = 0, totalCredit = 0;
    
    cout << "=== STUDENT GPA CALCULATOR ===" << endl;
    cout << "Masukkan jumlah subjek sem ini: ";
    cin >> subjects;

    for(int i = 1; i <= subjects; i++) {
        float point, credit;
        cout << "\nSubjek " << i << " (Pointer): "; 
        cin >> point; // Contoh: 4.0 atau 3.67
        cout << "Jam Kredit: ";
        cin >> credit; // Contoh: 3 atau 4

        totalPoint += (point * credit);
        totalCredit += credit;
    }

    cout << "\n---------------------------" << endl;
    cout << "Total Jam Kredit: " << totalCredit << endl;
    cout << "GPA Anda: " << (totalPoint / totalCredit) << endl;
    cout << "---------------------------" << endl;

    return 0;
}