#include <iostream>
#include <string>
#include <vector>

using namespace std;



class vaz{
    private:
    int model;
    int year;
    string style;
    string owner; 
    public:
    vaz(int _model, int _year, string _style, string _owner){
        model = _model;
        year = _year;
        style = _style;
        owner = owner;
    }
};
int main(){
vector<vaz> a;
    int size;
    int model;
    int year;
    string style;
    string owner;
    cout << "введите кол-во тазов";
    cin >> size;
    for(int i = 0; i < size; i++){
        cout << "Введите модель";
        cin >> model;
        cout << "Введите год";
        cin >> year;
        cout << "Введите стиль";
        cin >> style;
        cout << "Введите владельца";
        cin >> owner;
        vaz temp(model, year, style, owner);
        a.push_back(temp);
        
    }



}