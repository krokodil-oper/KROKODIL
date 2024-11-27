#include <iostream>
#include <vector>
using namespace std;
int main() {
int n, p = 0;
cin >> n;
vector<int> a;
    for(int i = 0; i < n; i++){
    int temp;
    cin >> temp;
    a.push_back(temp);
}
    for(int i = 0;i < n; i ++){
        if(a[i] > 0){
            p++;}
        cout << p;
    }
  return 0;
}