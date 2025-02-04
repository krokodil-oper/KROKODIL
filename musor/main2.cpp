#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int a;
    int temp;
    int nol = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(nol < a){
            temp++;
        }


    }
    cout << temp;
    
}