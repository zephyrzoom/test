#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main() {
    int n;

    while(cin >> n) {
        vector<int> rand;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            rand.push_back(t);
        }
        sort(rand.begin(), rand.end());

        for (auto i = rand.begin(), j = rand.end(); i != j-1; i++) {
            if (*i == *(i+1)) {
                rand.erase(i+1);
                j = rand.end(); // 删掉之后end发生变化
                i--;    // 删掉之后i不能++
            }
        }

        // 另一种写法
        // auto i = rand.begin(), j = rand.end();
        // while (i != j-1) {
        //     if (*i == *(i+1)) {
        //         rand.erase(i+1);
        //         j = rand.end();
        //     } else {
        //         i++;
        //     }
        // }
        // 
        for (auto i : rand) {
            cout << i << endl;
        }
    }

    return 0;
}
