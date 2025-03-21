#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    auto lam = [](int &n) {
        return n % 2 == 0;
    };
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int count = count_if(numbers.begin(), numbers.end(), lam);

    cout << "Количество чётных чисел: " << count << endl;

    return 0;
} 