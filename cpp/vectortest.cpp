#include <vector>
#include <iostream>

int main(int argc, char const *argv[]) {
    std::vector<int> v{0,1};
    v.insert(v.begin(), 2);
    for (auto i:v)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
