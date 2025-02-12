#include <iostream>
#include <string>

using namespace std;

class car{
private:
    static int year;
    static int model; 
    static string owner;
public:
    car(int _model, int _year, string _owner){
            model = _model;
            year = _year;
            owner = _owner;
        }
    static void insert(int _year, int _model, string _owner) {
        year = _year;
        model = _model;
        owner = _owner;
        cout << year << endl;
        cout << model << endl;
        cout << owner << endl;
    }
};
int car::model;
int car::year;
string car::owner;


int main(){
    int year;
    int model;
    string owner;
    cin >> year >> model >> owner;

    car::insert(year, model, owner);
}