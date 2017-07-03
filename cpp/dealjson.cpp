#include "json.hpp"

#include <fstream>
#include <iostream>

using json = nlohmann::json;

int main()
{
    const char *a = "test.json";
    std::ifstream i(a);
    json j;
    i >> j;
    std::cout << std::setw(4) << j << std::endl;
    json texture = j["STATES"]["MENU"]["TEXTURES"];
    for (auto i : texture)
    {
        for (auto j : i) {
            std::cout << j["filename"] << std::endl;
        }
    }
}
