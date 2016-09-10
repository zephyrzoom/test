#include <iostream>
#include <string>
using std::string;
using std::cout;
int main(int argc, char const *argv[]) {
    string a[] = {"1, 2, 3","a","b"};
    string *p = a+1;
    string k = p[-1];
    cout << k;

    return 0;
}
