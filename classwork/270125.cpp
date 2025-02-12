// #include <iostream>
// #include <vector>

// using namespace std;

// class Foo{
//     int k;
//     mutable string n;
// public:
// Foo() {
//     cout << "add";
// }

// /*explicit Foo(int _k, string _n) {
//     k = _k;
//     n = _n;
//     }*/

// Foo operator +(Foo& other){
//     this->k += other .k;
//     this->n += other .n;
//     return *this;

// }
// }



#include <iostream>

using namespace std;

template <typename T> 
class a {
private:
    T b;

public:
    a(T value) : b(value) {}  

    void print() const {
        cout << "Данные: " << b << endl;
    }

    T get() const {
        return b;
    }
};


int main() {
    a<int> c(10);       
    c.print();                   

    a<double> d(270125); 
    d.print();                 

    a<string> d("Привет"); 
    d.print();                

    cout << "Значение: " << c.get() << endl;

    return 0;
}