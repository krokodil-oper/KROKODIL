#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;



class MyVector {
private:
    vector<int> data;


    MyVector() : data() {
        cout << "Вызван пустой конструктор." << endl;
    }


    MyVector(int size) : data(size) {
        cout << "Вызван конструктор с размером. Размер: " << size << endl;
    }


    MyVector(int size, int value) : data(size, value) {
        cout << "Вызван конструктор с размером и значением. Размер: " << size << ", Значение: " << value << endl;
    }

    MyVector(initializer_list<int> list) : data(list) {
        cout << "Вызван конструктор со списком инициализации." << endl;
    }

    MyVector(const MyVector& other) : data(other.data) {
        std::cout << "Вызван конструктор копирования." << endl;
    }

    MyVector& operator=(const MyVector& other) {
        cout << "Вызван оператор присваивания копированием." << endl;
        data = other.data;
        return *this;
    }

    void print() const {
        cout << "Содержимое вектора: ";
        for (int value : data) {
            cout << value << " ";
        }
        cout << endl;
    }
};

int main() {

    MyVector vec1;
    vec1.print();


    MyVector vec2(5);
    vec2.print();

    MyVector vec3(5, 42);
    vec3.print();

    MyVector vec4 = {1, 2, 3, 4, 5};
    vec4.print();


    MyVector vec5 = vec4;
    vec5.print();

  
    MyVector vec6;
    vec6 = vec5; 
    vec6.print();

    return 0;
}