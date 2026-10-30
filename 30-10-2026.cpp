// CATATAN:

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> buah = {"mangga", "jeruk"};

    cout << buah[0] << endl;

    buah.insert(buah.begin(), "apel");
    buah.insert(buah.begin() + 2, "semangka");
    buah.push_back("pisang");
    cout << "setelah ditambah: ";
    for (string item : buah) {
        cout << item << " ";
    }
    cout << endl;

buah.erase(buah.begin());
    buah.erase(buah.begin() + 1);
    buah.pop_back();
    cout <<"setelah dihapus: ";
    for (string item : buah) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}


// 1)
#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    vector<string> orang = {"budi", "siti"};
    
    cout << orang[0] << endl;
    
    orang.insert(orang.begin(), "roni");
    orang.push_back("dewi");
    orang.erase(orang.begin());
    cout << "hasil akhir: ";
    for (string item : orang) {
        cout << item << " ";
    }
    cout << endl;
    
    return 0;
}


// 2)
#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    vector<string> daftarlagu = {"ini abadi", "monokrom"};
    
    cout << daftarlagu[0] << endl;
    
    daftarlagu.insert(daftarlagu.begin() + 1, "everything u are");
    daftarlagu.push_back("aitakatta (eww)");
    daftarlagu.erase(daftarlagu.begin());
    cout << "hasil akhir: ";
    for (string item : daftarlagu) {
        cout << item << " ";
    }
    cout << endl;
    
    return 0;
}