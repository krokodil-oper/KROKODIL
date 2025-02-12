#include <iostream>
#include <string>
using namespace std;


class Uchenik {
    public:
    int age;
    string name;
    Uchenik() {
        cout << "Called Uchenik()" << endl;
        name = "Default";
    };
    Uchenik(string _name) : name(_name), age (0){
        cout << "Called Uchenik(string)" << endl;
        name = _name;
    };
    Uchenik(string name, int age);

    void set_name(string _name) {
        name = static_cast<char>(toupper(_name[0])) + _name.substr(1);
    };

    struct gen{
        int a;
        gen(int _a) : a(_a) ();
        int operator()(){
            
        }
    }

};

int main() {
    gen g(10);
    cout << g() << " " << g() << " " << g();
    for (int i : vec) (cout << i << "";)
    return 0;
}



//🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃🙃