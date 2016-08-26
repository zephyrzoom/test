#include <iostream>

int a = 10;

void print() {
    int a;
    int &b = a, s = a, &d = a;
    int &c = b;
    void *v = &a;

    std::cout << a << " " << ::a << std::endl;
}

int main(int argc, char const *argv[]) {
    print();
    return 0;
}
