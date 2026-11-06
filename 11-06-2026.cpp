// 1) Array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> angka = {10, 20, 30, 40};

    auto it_20 = find(angka.begin(), angka.end(), 20);
    bool ada_20 = (it_20 != angka.end());
    cout << "apakah 20 ada? " << (ada_20 ? "true" : "false") << endl;

    auto it_30 = find(angka.begin(), angka.end(), 30);
    if (it_30 != angka.end()) {

        int posisi_30 = distance(angka.begin(), it_30);
        cout << "index angka 30 adalah: " << posisi_30 << endl;
    }

    vector<int> hasil_filter;
    copy_if(angka.begin(), angka.end(), back_inserter(hasil_filter), [](int x) {
        return x > 20;
    });

    cout << "hasil filter (> 20): ";
    for (int x : hasil_filter) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

// 2) Sorting

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    vector<int> angka_asc = {5, 2, 9, 1};
    vector<int> angka_desc = {5, 2, 9, 1};

    sort(angka_asc.begin(), angka_asc.end());
    cout << "Ascending: ";
    for (int x : angka_asc) {
        cout << x << " ";
    }
    cout << endl;

    sort(angka_desc.begin(), angka_desc.end(), greater<int>());
    cout << "Descending: ";
    for (int x : angka_desc) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

// 3) Latihan

// a)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nilaiSiswa = {60, 85, 40, 90, 75, 50, 95};

    auto it = find(nilaiSiswa.begin(), nilaiSiswa.end(), 85);
    if (it != nilaiSiswa.end()) {
        int posisi85 = distance(nilaiSiswa.begin(), it);
        cout << "nilai 85 ada di-" << posisi85 << endl;
    } else {
        cout << "data tidak ditemukan" << endl;
    }

    vector<int> hasilFilter;
    for (int x : nilaiSiswa) {
        if (x > 75) {
            hasilFilter.push_back(x);
        }
    }

    cout << "[";
    for (size_t i = 0; i < hasilFilter.size(); i++) {
        cout << hasilFilter[i];
        if (i + 1 < hasilFilter.size()) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}

// b)

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<string> produk = {"Laptop", "Mouse", "Keyboard", "Monitor", "Headset"};

    if (find(produk.begin(), produk.end(), "Keyboard") != produk.end()) {
        cout << "Keyboard ditemukan" << endl;
    } else {
        cout << "Keyboard tidak ditemukan" << endl;
    }

    vector<string> hasilFilter;
    for (const string& x : produk) {
        if (x.length() > 5) {
            hasilFilter.push_back(x);
        }
    }

    cout << "[";
    for (size_t i = 0; i < hasilFilter.size(); i++) {
        cout << "\"" << hasilFilter[i] << "\"";
        if (i + 1 < hasilFilter.size()) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}

// c)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};

    if (find(suhu.begin(), suhu.end(), 0) != suhu.end()) {
        cout << "Nilai 0 ditemukan" << endl;
    } else {
        cout << "Nilai 0 tidak ditemukan" << endl;
    }

    vector<int> hasilFilter;
    for (int x : suhu) {
        if (x > 0) {
            hasilFilter.push_back(x);
        }
    }

    cout << "[";
    for (size_t i = 0; i < hasilFilter.size(); i++) {
        cout << hasilFilter[i];
        if (i + 1 < hasilFilter.size()) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}