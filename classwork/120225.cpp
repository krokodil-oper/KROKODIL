#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

using namespace std;

template <typename T> 
class List {
private:
    

    int myint;
    string mystr;
    int* data;
    int size;
    int maxsize;
    vector<int> vec;
    vector<int> vecdata;

public: 
    List() {
        myint = 0;
        mystr = "baza";
        cout << "конструктор без параметров" << endl;
    }
    void print() {
        cout << "myint: " << myint << endl;
        cout << "mystr: " << mystr << endl;

    }
    List(int initsize) {
        if(initsize < 0){
            cout << "Рамзмер массива должен быть положительным" << endl;
            size = 0;
            maxsize = 0;
        }
    }
        Vec(int size, int value) : data(size, value) {
            cout << "Конструктор вызван. Размер: " << size << ", Значение: " << value << endl;
          }
        

          void print() const {
            cout << "Содержимое вектора: ";
            for (int i = 0; i < vec.size(); ++i) {
              cout << data[i] << " ";
            }
            cout << endl;
          }
        };
        List(initializer_list<int> list ) : vecdata(list){      
            cout << "конструктор со списком инициализации вызван" << endl;
        }
        void printData() const {
            cout << "содержимое вектора"; 
                for (int value2 : data) {
                    cout << value2 << " " << endl;
                }

        } 
        List(const MyClass& other) {
            data = new int(*(other.data)); 
            std::cout << "Конструктор копирования вызван. Значение: " << *data << std::endl;
        }
    };















// пустой коструктор 
// принимает размер
// который принимает размер и значение которым заполнить
// конструктор который принимает список инициализации
// копирования