#include <iostream>
using namespace std;

int main() {
    int arr[3][3][4];
    int besar = 2;
    int kecil = 1;
    int hitung = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                
                if (hitung % 2 ==1) {
                    arr[i][j][k] = besar;
                    besar++;  
                } else {
                    arr[i][j][k] = kecil;
                    kecil++; 
                }
                hitung++;
            }
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << "tabel ke- " << i + 1 << endl;

        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << arr[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

}