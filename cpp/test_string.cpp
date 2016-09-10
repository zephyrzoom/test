#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;

string delStr(string toDel, string forDel) {
    string result;
    for (size_t i = 0; i < toDel.size(); i++) {
        bool isDel = false;
        for (size_t j = 0; j < forDel.size(); j++) {
            if (toDel[i] == forDel[j]) {
                isDel = true;
            }
        }
        if (!isDel) {
            result += toDel[i];
        }
    }
    return result;
}

int main(int argc, char const *argv[]) {
    string toDel, forDel;
    cin >> toDel >> forDel;
    
    cout << delStr(toDel, forDel);
    return 0;
}
