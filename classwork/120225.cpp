#include <iostream>
#include <string>

using namespace std;

template <typename T> 
class List {
private:

    int myint;
    string mystr;
    int* data;
    int size;
    int maxsize;

public: 
    List() {
        myint = 0;
        mystr "baza";
        cout << "конструктор без параметров" << endl;
    }
    void print() {
        cout << "myint: " << myint << end;
        cout << "mystr: " << mystr << end;

    }
    List(int initsize) {
        if(initsize < 0){
            cout << "Рамзмер массива должен быть положительным" << endl;
            size = 0;
            maxsize = 0;

        }




    }


};
int main () { 
    List<int> Listobject;

    Listobject.print();
    
    return 0;
}



// пустой коструктор 
// принимает размер
// который принимает размер и значение коорым заполнить
// конструктор который принимает список инициализации
// копирования