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