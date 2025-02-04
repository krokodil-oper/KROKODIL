#include <iostream>
#include <vector>
using namespace std;


int main(){
    cout << "Введите число: " << endl;
    vector<int> a;
    for(int i = 0; i < 4; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }   
    int popitka = 6;
    while(popitka != 0){
        cout << "Угадайте число: ";

        vector<int> b;
        for (int i =0; i < 4; ++i) {
            int temp2;
            cin >> temp2;
            b.push_back(temp2);
        }

        int correct = 0;
        int inList = 0;
        for(int i = 0; i < 4; ++i) {
            
            if (a[i] == b[i]){
                correct++;
            } else {
                for (auto num : a) {
                    if (b[i] == num) {
                        inList++;
                        break;
                    }
                }
            }
        }
        popitka--;
        if (a == b) {
            cout << "Вы победили";
            return 0;
        }
        cout << "У вас осталось попыток: " << popitka << endl;
        cout << "Верно угаданных чисел: " << correct << endl;
        cout << "Чисел присутствующих в списке: " << inList << endl;
    }
}