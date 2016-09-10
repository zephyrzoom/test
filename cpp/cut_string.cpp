#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string i;

    while(cin >> i) {
        vector<string> r;
        while (i.length() > 8) {
            r.push_back(i.substr(0, 8));
            i = i.substr(8, i.length()-1);
        }
        if (i.length() > 0) {
            r.push_back(i + string(8-i.length(), '0'));
        }
        for (auto i : r) {
            cout << i << endl;
        }
    }
    return 0;
}
